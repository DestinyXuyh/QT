#ifndef CHOOSEINTERFACE_H
#define CHOOSEINTERFACE_H

#include <QWidget>
#include <QDialog>
#include <QComboBox>
class ChooseInterface : public QDialog
{
    Q_OBJECT
public:
    explicit ChooseInterface(QWidget *parent = nullptr);

    QComboBox* _comboBox;
    QString _strSelect;

signals:

public slots:
    void slotCurrentIndexChanged(QString);
};

#endif // CHOOSEINTERFACE_H
