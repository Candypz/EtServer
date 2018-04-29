#include "../common/server/EtClientBase.h"
#include "../common/server/EtServerBase.h"

#ifdef _WIN32
#include "winmain-inl.h"
#endif

int main(int argc, char* argv[]) {
    std::string addr = "127.0.0.1:2819";
    evpp::EventLoop loop;


    ET::CEtServerBase _server;
    _server.create(&loop, "0.0.0.0:2820", "Login", 4);

    ET::CEtClientBase _client;
    _client.create(&loop, addr, "login");

    loop.Run();
    return 0;
}
