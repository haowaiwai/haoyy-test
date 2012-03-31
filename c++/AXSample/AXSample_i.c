/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Jun 17 16:15:09 2010
 */
/* Compiler settings for .\AXSample.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAXSampleCtl = {0x1E03BF60,0x02DB,0x4587,{0xB7,0x93,0xC4,0xEE,0x48,0x27,0x9A,0xA9}};


const IID IID_ITestCtl = {0xB68D04E3,0x2F7B,0x4565,{0x85,0xA9,0xD9,0x3B,0x7A,0xFE,0x34,0xEC}};


const IID LIBID_AXSampleLib = {0x0A55D180,0x2587,0x41D6,{0x8B,0xC7,0xDA,0x63,0xA0,0xF4,0x30,0x96}};


const CLSID CLSID_AXSampleCtl = {0xE9CFE582,0x8937,0x4F7D,{0xAF,0xA0,0x00,0xD1,0x4B,0x28,0xA1,0x91}};


const IID DIID__ITestCtlEvents = {0x75667C0A,0x1FAB,0x45C5,{0x8B,0x67,0xB9,0x19,0xF6,0xE9,0x83,0x38}};


const CLSID CLSID_TestCtl = {0x0C05DDCB,0x049A,0x42FE,{0x8B,0x0F,0x05,0xF4,0xAE,0xE9,0x9A,0xEA}};


#ifdef __cplusplus
}
#endif

