SOURCES += \
    main.cpp \
    ControlWidget.cpp \
    USBAPI.cpp

QT += gui widgets

LIBS += -LD:\Codes\QT\QT0625\build-test-Desktop_Qt_5_11_1_MSVC2017_64bit-Debug\debug -lUSBCamSDK

HEADERS += \
    ControlWidget.h \
    USBAPI.h

