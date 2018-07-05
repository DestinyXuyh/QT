#include <QApplication>
#include <QLibrary>
#include <QDebug>
#include "ControlWidget.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
#if 0
    QLibrary mylib("USBCamSDK.dll");
    if(mylib.load())
    {
        qDebug() << "success";
    }
    else
    {
        qDebug() << "fail";
    }
#endif

    ControlWidget w;
    w.show();


    return app.exec();
}
