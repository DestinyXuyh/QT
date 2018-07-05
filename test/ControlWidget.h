#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include "USBAPI.h"

class ControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ControlWidget(QWidget *parent = nullptr);

    SDKReturn deviceInitialize();

private:
    QPushButton* _button;
    QLineEdit* _lineEdit;
signals:

public slots:
    void slotButtonClick();
};

#endif // CONTROLWIDGET_H
