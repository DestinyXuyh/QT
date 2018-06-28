#include "TcpServer.h"
#include <QHBoxLayout>
#include <QNetworkInterface>
#include <QMessageBox>
#include "ChooseInterface.h"
TcpServer::TcpServer(QWidget *parent) : QWidget(parent)
{


    _server = new QTcpServer;

    ChooseInterface dlg;
    //dlg.setWindowTitle("choose interface");
    dlg.exec();
    QMessageBox::information(NULL,"you select the ip:",dlg._strSelect);

    _server->listen(QHostAddress(dlg._strSelect), 9988);
    connect(_server, SIGNAL(newConnection()), this, SLOT(slotNewConnection()));

    _show = new QTextBrowser;
    QHBoxLayout* lay=new QHBoxLayout(this);
    lay->addWidget(_show);
}

void TcpServer::slotNewConnection()
{
    while(_server->hasPendingConnections())
    {
        _socket =  _server->nextPendingConnection();

        connect(_socket, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    }


}

void TcpServer::slotReadyRead()
{
    while(_socket->bytesAvailable())
    {
        QByteArray buf = _socket->readAll();
        _show->append(buf);
    }

}
