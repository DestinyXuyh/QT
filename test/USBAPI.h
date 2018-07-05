#ifndef USBAPI_H
#define USBAPI_H

#include "USBCamApi.h"

enum SDKReturn
{
    _NO_SUPPORT=-4,
    _NO_SUCCEED=-3,
    _NO_RANGE=-2,
    _NO_CAMERA=-1,
    _NO_FAIL=0,
};

class USBAPI
{
public:
    USBAPI();


};

#endif // USBAPI_H
