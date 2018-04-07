#ifndef _ET_SERVER_BASE_H
#define _ET_SERVER_BASE_H

#include <set>
#include <evpp/tcp_server.h>
#include <evpp/buffer.h>
#include <evpp/tcp_conn.h>

namespace ET {
    class CEtServerBase {
    public:
        CEtServerBase();
        void create(evpp::EventLoop *loop, const std::string &listen_addr, const std::string &name, uint32_t threadNum);
        const evpp::EventLoop *getLoop() const;
        virtual ~CEtServerBase();
    private:
        int m_serverId;
        std::set<evpp::TCPConnPtr> m_connectList;
        std::shared_ptr<evpp::TCPServer> m_server;
        evpp::EventLoop *m_loop;
    };
}


#endif
