#include "EtServerBase.h"

using namespace ET;

CEtServerBase::CEtServerBase() {

}

CEtServerBase::~CEtServerBase() {

}

void CEtServerBase::create(evpp::EventLoop *loop, const std::string &listen_addr, const std::string &name, uint32_t threadNum) {
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
            auto _len = msg->ReadInt8();
            auto _serverId = msg->ReadInt16();
            LOG_INFO << (short)_len << "  " << (short)_serverId;
            if (_len >= msg->size()) {
                auto _data = msg->NextString(_len - 4);
                LOG_INFO << _data;
            }
        }
    });
    m_server->Init();
    m_server->Start();
}
