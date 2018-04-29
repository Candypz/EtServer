#include "EtClientBase.h"

using namespace ET;

CEtClientBase::CEtClientBase() {
    m_client = nullptr;
}

CEtClientBase::~CEtClientBase() {

}

void CEtClientBase::create(evpp::EventLoop *loop, const std::string &listen_addr, const std::string &name) {
    m_loop = loop;
    m_client = std::shared_ptr<evpp::TCPClient>(new evpp::TCPClient(loop, listen_addr, name));

    m_client->SetMessageCallback([&](const evpp::TCPConnPtr &conn, evpp::Buffer *msg) {

    });

    m_client->SetConnectionCallback([](const evpp::TCPConnPtr &conn) {
        if (conn->IsConnected()) {
            LOG_INFO << "Connected to " << conn->remote_addr();
        }
    });

    m_client->Connect();
}