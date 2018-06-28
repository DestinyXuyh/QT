#include "TcpClient.h"
#include <QHBoxLayout>
#include <QPushButton>
TcpClient::TcpClient(QWidget *parent) : QWidget(parent)
{
    _socket = new QTcpSocket(this);
    _socket->connectToHost("127.0.0.1", 9988);

    _lineEdit = new QLineEdit;
    QHBoxLayout* lay = new QHBoxLayout(this);
    lay->addWidget(_lineEdit);
    QPushButton* button = new QPushButton;
    button->setText("send");
    lay->addWidget(button);

    connect(button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClick()));
    connect(_lineEdit, SIGNAL(returnPressed()), this, SLOT(slotButtonClick()));
}

void TcpClient::slotButtonClick()
{
    QString strText = _lineEdit->text();
    _socket->write(strText.toUtf8());

    _lineEdit->clear();
}
