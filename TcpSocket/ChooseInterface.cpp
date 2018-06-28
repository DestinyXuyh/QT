#include "ChooseInterface.h"
#include <QNetworkInterface>
#include <QVBoxLayout>

ChooseInterface::ChooseInterface(QWidget* parent):
    QDialog(parent)
{
    QList<QHostAddress> addrList = QNetworkInterface::allAddresses();

    _comboBox = new QComboBox;
    QVBoxLayout* lay = new QVBoxLayout(this);
    lay->addWidget(_comboBox);

    foreach (QHostAddress addr, addrList) {
        quint32 ipaddr = addr.toIPv4Address();
        if(ipaddr == 0)
            continue;
        _comboBox->addItem(QHostAddress(ipaddr).toString());
    }

    connect(_comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(slotCurrentIndexChanged(QString)));
}

void ChooseInterface::slotCurrentIndexChanged(QString str)
{
    this->_strSelect = str;
}
