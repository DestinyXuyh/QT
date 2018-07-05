#include "ControlWidget.h"
#include <QHBoxLayout>
#include <QDir>
#include <QMessageBox>
ControlWidget::ControlWidget(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout* lay = new QHBoxLayout(this);
    _button = new QPushButton("Click");
    _lineEdit = new QLineEdit;
    lay->addWidget(_button);
    lay->addWidget(_lineEdit);

    connect(_button,SIGNAL(clicked(bool)),this,SLOT(slotButtonClick()));
}

void ControlWidget::slotButtonClick()
{
    QMessageBox::about(this,"1","2");
}

SDKReturn ControlWidget::deviceInitialize()
{
    QString path = QDir::currentPath();
    QByteArray ba = path.toLatin1();
    char* chPath = ba.data();

    int res = InitUSBDevice(chPath);
    SDKReturn ds = (SDKReturn)res;
    if(ds == _NO_FAIL)
    {   //操作成功

    }
    else
    {

    }

    return _NO_CAMERA;
}
