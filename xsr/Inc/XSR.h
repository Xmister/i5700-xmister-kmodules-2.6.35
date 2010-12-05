/*****************************************************************************/
/*                                                                           */
/* PROJECT : TinyBML_1.1.1_b008-XSR_1.5.2p4_b122/PROJECT                                                             */
/* MODULE  : XSR                                                             */
/* NAME    : XSR include file                                                */
/* FILE    : XSR.h                                                           */
/* PURPOSE : This file contains the include files of XSR.                    */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*          COPYRIGHT 2003-2008, SAMSUNG ELECTRONICS CO., LTD.               */
/*                          ALL RIGHTS RESERVED                              */
/*                                                                           */
/*   Permission is hereby granted to licensees of Samsung Electronics        */
/*   Co., Ltd. products to use or abstract this computer program for the     */
/*   sole purpose of implementing NAND/OneNAND based on Samsung              */
/*   Electronics Co., Ltd. products. No other rights to reproduce, use,      */
/*   or disseminate this computer program, whether in part or in whole,      */
/*   are granted.                                                            */
/*                                                                           */
/*   Samsung Electronics Co., Ltd. makes no representations or warranties    */
/*   with respect to the performance of this computer program, and           */
/*   specifically disclaims any responsibility for any damages,              */
/*   special or consequential, connected with the use of this program.       */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* REVISION HISTORY                                                          */
/*                                                                           */
/*   23-DEC-2003 [HyoJun Kim]   : first writing                              */
/*   02-FEB-2004 [SongHo Yoon]  : added XSR_Init definition                  */
/*                                                                           */
/*****************************************************************************/

#ifndef _XSR_H_
#define _XSR_H_

#include <XsrTypes.h>
#include <OAM.h>
#include <PAM.h>
#include <LLD.h>
#include <BML.h>
#include <STL.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*****************************************************************************/
/* XSR version                                                               */
/*****************************************************************************/
#define XSR_VER_MAJOR             1           /* XSR major version           */
#define XSR_VER_MINOR1            5           /* XSR minor1 version          */
#define XSR_VER_MINOR2            2           /* XSR minor2 version          */
#define XSR_VER_PATCHLEVEL        4           /* XSR patch version           */
#define XSR_BUILD_NUMBER          122         /* XSR build number            */

#define XSR_VER_PREFIX            "XSR_"      /* XSR version prefix          */
#define XSR_VERSION_RCX           ""          /* XSR version RC{X}.          */
                                              /* ex)"_RC15", "_RTM"          */

/** XSR version string                                                       */
#if (XSR_VER_PATCHLEVEL > 0)
#define XSR_VERSION_STR(major, minor1, minor2, patchlevel, buildnum) \
            #major "." #minor1 "." #minor2 "p" #patchlevel "_b" #buildnum XSR_VERSION_RCX
#else
#define XSR_VERSION_STR(major, minor1, minor2, patchlevel, buildnum) \
            #major "." #minor1 "." #minor2 "_b" #buildnum XSR_VERSION_RCX
#endif /* #if (XSR_VER_PATCHLEVEL > 0) */

/** XSR version variable declares                                            */
#define XSR_VERSION(maj, min1, min2, plevel, bldnum) \
            UINT8* paXSRVerStr = (UINT8*) XSR_VER_PREFIX \
                                          XSR_VERSION_STR (maj, min1, min2, plevel, bldnum);

/** XSR version variable declares                                            */
#define     XSR_VER_STRING_LEN  22

/*****************************************************************************/
/* En-/Dis-able printing debug message of BML                                */
/*****************************************************************************/
#if defined(BML_DEBUG)
    #define     BML_DBG_PRINT(x)        XSR_DBG_PRINT(x)
#else
    #define     BML_DBG_PRINT(x)
#endif  /* BML_DEBUG */

#define     BML_RTL_PRINT(x)        XSR_RTL_PRINT(x)

#define     BIF_LOG_MSG_ON
#define     BIF_INF_MSG_ON

#define     BBM_LOG_MSG_ON
#define     BBM_INF_MSG_ON

#define     BIF_RTL_PRINT(x)            BML_RTL_PRINT(x)
#define     BIF_ERR_PRINT(x)            BML_RTL_PRINT(x)

#define     BBM_RTL_PRINT(x)            BML_RTL_PRINT(x)
#define     BBM_ERR_PRINT(x)            BML_RTL_PRINT(x)

#if defined(BIF_LOG_MSG_ON)
#define     BIF_LOG_PRINT(x)            BML_DBG_PRINT(x)
#else
#define     BIF_LOG_PRINT(x)
#endif

#if defined(BIF_INF_MSG_ON)
#define     BIF_INF_PRINT(x)            BML_DBG_PRINT(x)
#else
#define     BIF_INF_PRINT(x)
#endif

#if defined(BBM_LOG_MSG_ON)
#define     BBM_LOG_PRINT(x)            BML_DBG_PRINT(x)
#else
#define     BBM_LOG_PRINT(x)
#endif

#if defined(BBM_INF_MSG_ON)
#define     BBM_INF_PRINT(x)            BML_DBG_PRINT(x)
#else
#define     BBM_INF_PRINT(x)
#endif

/*****************************************************************************/
/* define for debug message of STL                                           */
/*****************************************************************************/

/* En-/Dis-able printing debug message of SectorMap */

#define SM_ERR_MSG_ON          1
#define SM_LOG_MSG_ON          0
#define SM_INF_MSG_ON          1

/* En-/Dis-able printing bebug message of Stl Interface */
#define STI_ERR_MSG_ON          1
#define STI_LOG_MSG_ON          0
#define STI_INF_MSG_ON          1

/* En-/Dis-able printing bebug message of Virtual Nand */
#define VN_ERR_MSG_ON           1
#define VN_LOG_MSG_ON           0
#define VN_INF_MSG_ON           1

/* En-/Dis-able printing bebug message of Sam Buf Manager */
#define SBM_ERR_MSG_ON           1
#define SBM_LOG_MSG_ON           0
#define SBM_INF_MSG_ON           0

/* En-/Dis-able printing bebug message of Ready Queue */
#define RQ_ERR_MSG_ON           1
#define RQ_LOG_MSG_ON           0
#define RQ_INF_MSG_ON           0

/* En-/Dis-able printing bebug message of Operation Queue */
#define OQ_ERR_MSG_ON          1
#define OQ_LOG_MSG_ON          0
#define OQ_INF_MSG_ON          0

/* En-/Dis-able printing bebug message of Garbage Queue */
#define GQ_ERR_MSG_ON           1
#define GQ_LOG_MSG_ON           0
#define GQ_INF_MSG_ON           0

/* debug message of Sector Map */
#if SM_ERR_MSG_ON
#define SM_ERR_PRINT(x)        STL_RTL_PRINT(x)
#else
#define SM_ERR_PRINT(x)        
#endif

#if SM_LOG_MSG_ON
#define SM_LOG_PRINT(x)        STL_DBG_PRINT(x)
#else
#define SM_LOG_PRINT(x)        
#endif

#if SM_INF_MSG_ON
#define SM_INF_PRINT(x)        STL_DBG_PRINT(x)
#else
#define SM_INF_PRINT(x)        
#endif

/* debug message of Stl Interface */
#if STI_ERR_MSG_ON
#define STI_ERR_PRINT(x)        STL_RTL_PRINT(x)
#else
#define STI_ERR_PRINT(x)        
#endif

#if STI_LOG_MSG_ON
#define STI_LOG_PRINT(x)        STL_DBG_PRINT(x)
#else
#define STI_LOG_PRINT(x)        
#endif

#if STI_INF_MSG_ON
#define STI_INF_PRINT(x)        STL_DBG_PRINT(x)
#else
#define STI_INF_PRINT(x)        
#endif

/* debug message of Virtual Nand */
#if VN_ERR_MSG_ON
#define VN_ERR_PRINT(x)         STL_RTL_PRINT(x)
#else
#define VN_ERR_PRINT(x)
#endif

#if VN_LOG_MSG_ON
#define VN_LOG_PRINT(x)         STL_DBG_PRINT(x)
#else
#define VN_LOG_PRINT(x)
#endif

#if VN_INF_MSG_ON
#define VN_INF_PRINT(x)         STL_DBG_PRINT(x)
#else
#define VN_INF_PRINT(x)
#endif

/* debug message of Sam Buf Manager */
#if SBM_ERR_MSG_ON
#define SBM_ERR_PRINT(x)         STL_RTL_PRINT(x)
#else
#define SBM_ERR_PRINT(x)
#endif

#if SBM_LOG_MSG_ON
#define SBM_LOG_PRINT(x)         STL_DBG_PRINT(x)
#else
#define SBM_LOG_PRINT(x)
#endif

#if SBM_INF_MSG_ON
#define SBM_INF_PRINT(x)         STL_DBG_PRINT(x)
#else
#define SBM_INF_PRINT(x)
#endif

/* debug message of Ready Queue */
#if RQ_ERR_MSG_ON
#define RQ_ERR_PRINT(x)         STL_RTL_PRINT(x)
#else
#define RQ_ERR_PRINT(x)
#endif

#if RQ_LOG_MSG_ON
#define RQ_LOG_PRINT(x)         STL_DBG_PRINT(x)
#else
#define RQ_LOG_PRINT(x)
#endif

#if RQ_INF_MSG_ON
#define RQ_INF_PRINT(x)         STL_DBG_PRINT(x)
#else
#define RQ_INF_PRINT(x)
#endif

/* debug message of Operation Queue */
#if OQ_ERR_MSG_ON
#define OQ_ERR_PRINT(x)        STL_RTL_PRINT(x)
#else
#define OQ_ERR_PRINT(x)        
#endif

#if OQ_LOG_MSG_ON
#define OQ_LOG_PRINT(x)        STL_DBG_PRINT(x)
#else
#define OQ_LOG_PRINT(x)        
#endif

#if OQ_INF_MSG_ON
#define OQ_INF_PRINT(x)        STL_DBG_PRINT(x)
#else
#define OQ_INF_PRINT(x)        
#endif

/* debug message of Garbage Queue */
#if GQ_ERR_MSG_ON
#define GQ_ERR_PRINT(x)         STL_RTL_PRINT(x)
#else
#define GQ_ERR_PRINT(x)
#endif

#if GQ_LOG_MSG_ON
#define GQ_LOG_PRINT(x)         STL_DBG_PRINT(x)
#else
#define GQ_LOG_PRINT(x)
#endif

#if GQ_INF_MSG_ON
#define GQ_INF_PRINT(x)         STL_DBG_PRINT(x)
#else
#define GQ_INF_PRINT(x)
#endif

#ifdef __cplusplus
};
#endif // __cplusplus

#endif /* _XSR_H_ */


