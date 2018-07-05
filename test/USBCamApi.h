///////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------
// AUTHOR:       SYCameraDeveloper on 14-5-11
// COPYRIGHT:     ShiYan Photoelectricity Technology Co.,ltd
////////////////////////////////////////////////////////////////////////////////

#ifndef __USBCAMERAAPI_H
#define __USBCAMERAAPI_H
#include "USBCamPublic.h"
#ifdef USBCamSDK_EXPORTS
#define CAMERAUSB_API extern "C" __declspec(dllexport)
#else
#define CAMERAUSB_API extern "C" __declspec(dllimport)
#endif
/////////////////////////////////////////////////////
/*****************
设备驱动操作
*************/
CAMERAUSB_API const char *VersionInfo();
CAMERAUSB_API void ExitUSBDevice();
CAMERAUSB_API int  InitUSBDevice(const char *pathName);
CAMERAUSB_API int USBDeviceCount();
CAMERAUSB_API const char *USBDeviceName(int indexNum);
CAMERAUSB_API const char *USBDeviceChange(const char *Guidstring, bool changeState);
CAMERAUSB_API const char *USBDeviceGUID();
CAMERAUSB_API int ResumeUSBDevice(const char *strDeviceName);
CAMERAUSB_API int PauseUSBDevice(const char *strDeviceName);
CAMERAUSB_API int ResetUSBDevice(const char *strDeviceName);
CAMERAUSB_API int GetUSBDeviceState(const char *strDeviceName);
CAMERAUSB_API void GetMemInfo(int *MemSize,int *DataHeadLen,const char *strDeviceName);
CAMERAUSB_API int GetUSBDeviceInfo(int *PIDValue,int *VIDValue,int *BCDvalue,const char *strDeviceName);
//////////////////////////////////////////////////////////////////////////////////
CAMERAUSB_API int SetResolutionValue(int indexNum, const char *strDeviceName);
CAMERAUSB_API void GetResolutionInfo(int *indexNum, int *ResCount, const char *strDeviceName);
CAMERAUSB_API const char *GetResolutionName(int indexNum, const char *strDeviceName);


CAMERAUSB_API int GetGainInfo(int *CurValue, int *MinValue, int *MaxValue, int *StepValue, const char *strDeviceName);
CAMERAUSB_API int SetGainValue(int GainValue, const char *strDeviceName);


CAMERAUSB_API int GetExposureInfo(float *CurValue, float *MinValue, float *MaxValue, float *StepValue, const char *strDeviceName);
CAMERAUSB_API int SetExposureValue(float EXValue, const char *strDeviceName);


CAMERAUSB_API int WritePara(char *WriteData, int size, const char *strDeviceName);
CAMERAUSB_API int ReadPara(char *ReadData,  int size, const char *strDeviceName);

CAMERAUSB_API int GetRawSize(int *Width, int *Height, const char *strDeviceName);

CAMERAUSB_API int GetRawData(unsigned char *pBuffer, int len, const char *strDeviceName);

CAMERAUSB_API int GetDacInfo(float *CurValue, float *MinValue, float *MaxValue, float *StepValue, const char *strDeviceName);
CAMERAUSB_API int SetDacValue(float GainValue, const char *strDeviceName);

CAMERAUSB_API int SetIOValue(char IOValue, const char *strDeviceName);
CAMERAUSB_API int SetIOState(char IOState, const char *strDeviceName);
CAMERAUSB_API int GetIOValue(const char *strDeviceName);

CAMERAUSB_API int GetDelayInfo(float *CurValue, float *MinValue, float *MaxValue, float *StepValue, const char *strDeviceName);
CAMERAUSB_API int SetDelayValue(float EXValue, const char *strDeviceName);
#endif
