#include <QApplication>
#include "TcpClient.h"
#include "TcpServer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    TcpServer s; s.show();
    TcpClient c; c.show();
    s.setWindowTitle("服务端");
    c.setWindowTitle("客户端");



    return app.exec();
}
