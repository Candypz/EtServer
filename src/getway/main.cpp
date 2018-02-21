#include "../common/server/EtServerBase.h"

int main(int argc, char* argv[]) {
    std::string addr = "0.0.0.0:9099";
    int thread_num = 4;
    evpp::EventLoop loop;

    ET::CEtServerBase _server;
    _server.create(&loop, addr, "TCPEchoServer", thread_num);

    loop.Run();
    return 0;
}
