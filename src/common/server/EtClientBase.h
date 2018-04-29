#ifndef _ET_CLIENT_BASE_H
#define _ET_CLIENT_BASE_H

#include <memory>
#include <evpp/tcp_client.h>
#include <evpp/buffer.h>
#include <evpp/tcp_conn.h>

namespace ET {
    class CEtClientBase {
    public:
        CEtClientBase();
        virtual ~CEtClientBase();
        void create(evpp::EventLoop *loop, const std::string &listen_addr, const std::string &name);
    private:
        std::shared_ptr<evpp::TCPClient > m_client;
        evpp::EventLoop *m_loop;
    };
}

#endif
