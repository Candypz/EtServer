#include "../common/server/EtServerBase.h"

#ifdef _WIN32
#include "winmain-inl.h"
#endif

int main(int argc, char* argv[]) {
    std::string addr = "0.0.0.0:2819";
    int thread_num = 4;
    evpp::EventLoop loop;

    ET::CEtServerBase _server;
    _server.create(&loop, addr, "GetWay", thread_num);

    loop.Run();
    return 0;
}
