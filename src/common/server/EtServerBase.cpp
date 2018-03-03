#include "EtServerBase.h"
#include "GameMessage.pb.h"

using namespace ET;

CEtServerBase::CEtServerBase() {

}

CEtServerBase::~CEtServerBase() {

}

void CEtServerBase::create(evpp::EventLoop *loop, const std::string &listen_addr, const std::string &name, uint32_t threadNum) {
    google::InitGoogleLogging(name.c_str());
    FLAGS_stderrthreshold = 0;
    FLAGS_colorlogtostderr = true;
    google::SetLogDestination(google::GLOG_FATAL, "log/log_fatal_");
    google::SetLogDestination(google::GLOG_ERROR, "log/log_error_");
    google::SetLogDestination(google::GLOG_WARNING, "log/log_warning_");
    google::SetLogDestination(google::GLOG_INFO, "log/log_info_");
#ifdef _DEBUG
    FLAGS_logbufsecs = 0;
#else
    FLAGS_logbufsecs = 10;
#endif
    FLAGS_max_log_size = 100;
    FLAGS_stop_logging_if_full_disk = true;

    m_server = std::shared_ptr<evpp::TCPServer>(new evpp::TCPServer(loop, listen_addr, name, threadNum));
    m_server->SetConnectionCallback([&](const evpp::TCPConnPtr& conn) {
        if (conn->IsConnected()) {
            m_connectList.insert(conn);
            LOG_INFO << "A new connection from " << conn->remote_addr();
        } else {
            m_connectList.erase(conn);
            LOG_INFO << "Lost the connection from " << conn->remote_addr();
        }
    });
    m_server->SetMessageCallback([](const evpp::TCPConnPtr& conn, evpp::Buffer* msg) {
        if (msg->size() > sizeof(short) * 2) {
            auto _len = (short)ntohs(msg->ReadInt16());
            auto _serverId = (short)ntohs(msg->ReadInt16());
            if (_serverId != 2819) {
                LOG_ERROR << conn->remote_addr() << " date error close conn";
                conn->Close();
                return;
            }
            if (_len >= msg->size()) {
                auto _data = msg->NextString(_len - 4);
                CMessage _message;
                _message.ParseFromString(_data);
                LOG_DEBUG << _message.sn() << " " << _message.cmd() << " " << _message.content();
            }
        }
    });
    m_server->Init();
    m_server->Start();
}
