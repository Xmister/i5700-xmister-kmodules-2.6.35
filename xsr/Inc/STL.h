/*****************************************************************************/
/*                                                                           */
/* PROJECT : TinyBML_1.1.1_b008-XSR_1.5.2p4_b122/PROJECT                                                             */
/* MODULE  : XSR STL                                                         */
/* NAME    : Main STL Header                                                 */
/* FILE    : STL.h                                                           */
/* PURPOSE : Main STL Header file                                            */
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
/* - 01/JUL/2003 [HyoJun Kim]   : first writing                              */
/* - 23/JUL/2003 [HyoJun Kim]   : reorganization                             */
/* - 15/MAY/2004 [Jihyun In]    : added bAsyncMode field in STLInfo          */
/* - 25/MAR/2005 [MinYoung Kim] : modified parameters of STL interface func  */
/* - 29/MAR/2005 [MinYoung Kim] : changed STL_VOLUME_NOT_OPENED and          */
/*                                STL_VOLUME_ALREADY_OPENED to               */
/*                                STL_PARTITION_NOT_OPENED and               */
/*                                STL_PARTITION_ALREADY_OPENED               */
/* - 30/MAR/2005 [MinYoung Kim] : added STL IOCtl function codes             */
/* - 25/NOV/2005 [Woo-Young Yang] : added STL_GetBBInfo()                    */
/* - 15/DEC/2005 [Byoung Young Ahn]	: added STL_IOCtl funtion codes			 */
/* - 14/FEB/2006 [WooYoung Yang] : Remove STL_GetBBInfo()                    */
/*                                                                           */
/*****************************************************************************/

#ifndef _XSR_STL_H_
#define _XSR_STL_H_

/*****************************************************************************/
/* STL Options                                                               */
/*****************************************************************************/
#define STL_FORMAT_REMEMBER_ECNT        (1 << 0)

/*****************************************************************************/
/* STL Return Codes                                                          */
/*****************************************************************************/

#define STL_SUCCESS                     XSR_RETURN_VALUE(0, 0x0000, 0x0000)
#define STL_SYNC_COMPLETE               XSR_RETURN_VALUE(0, 0x0001, 0x0000)
#define STL_SYNC_INCOMPLETE             XSR_RETURN_VALUE(0, 0x0002, 0x0000)

#define STL_ERROR                       XSR_RETURN_VALUE(1, 0x0000, 0x0000)
#define STL_CRITICAL_ERROR              XSR_RETURN_VALUE(1, 0x0001, 0x0000)
#define STL_INVALID_PARAM               XSR_RETURN_VALUE(1, 0x0002, 0x0000)
#define STL_USERDATA_ERROR              XSR_RETURN_VALUE(1, 0x0003, 0x0000)
#define STL_REQUEST_FAIL                XSR_RETURN_VALUE(1, 0x0004, 0x0000)
#define STL_UNCORRECTABLE_ERROR         XSR_RETURN_VALUE(1, 0x0005, 0x0000)
#define STL_PARTITION_NOT_OPENED        XSR_RETURN_VALUE(1, 0x0006, 0x0000)
#define STL_UNFORMATTED                 XSR_RETURN_VALUE(1, 0x0007, 0x0000)
#define STL_PARTITION_ALREADY_OPENED    XSR_RETURN_VALUE(1, 0x0008, 0x0000)
#define STL_SMALL_SIZE_SAM_BUF          XSR_RETURN_VALUE(1, 0x0009, 0x0000)
#define STL_ALREADY_INITIALIZED         XSR_RETURN_VALUE(1, 0x000A, 0x0000)
#define STL_INVALID_PARTITION_ID        XSR_RETURN_VALUE(1, 0x000B, 0x0000)
#define STL_NO_PARTITION_CONTEXT        XSR_RETURN_VALUE(1, 0x000C, 0x0000)

/*****************************************************************************/
/* STL IOCtl function codes                                                  */
/*****************************************************************************/
#define STL_IOCTL_READ_ECNT             XSR_IOCTL_CODE(XSR_MODULE_STL, 1,   \
                                                       XSR_METHOD_INOUT_DIRECT, \
                                                       XSR_READ_ACCESS)
                                                       
#define STL_IOCTL_LOG_SECTS             XSR_IOCTL_CODE(XSR_MODULE_STL, 2,   \
                                                       XSR_METHOD_INOUT_DIRECT, \
                                                       XSR_READ_ACCESS)

#define STL_IOCTL_PAGE_SIZE             XSR_IOCTL_CODE(XSR_MODULE_STL, 3,   \
                                                       XSR_METHOD_INOUT_DIRECT, \
                                                       XSR_READ_ACCESS)
                                                  
#define STL_IOCTL_XSR_VERSION           XSR_IOCTL_CODE(XSR_MODULE_STL, 4,   \
                                                       XSR_METHOD_INOUT_DIRECT, \
                                                       XSR_READ_ACCESS)

#define STL_IOCTL_DEVICE_ID         XSR_IOCTL_CODE(XSR_MODULE_STL, 5,   \
                                                       XSR_METHOD_INOUT_DIRECT, \
                                                       XSR_READ_ACCESS)

/*****************************************************************************/
/* XSR Configuration                                                         */
/*****************************************************************************/
typedef struct
{
    UINT16  nFillFactor;        /* LogSctsPerUnit : UsableSctsPerUnit        */
                                /* Percentage, Full Usage Fill Factor = 100  */
    UINT16	nSnapshots;			/* The number of snapshot in a unit			 */
    							/* NUM_OF_SNAPSHOT_1 or NUM_OF_SNAPSHOT_4	 */
    UINT32  nNumOfRsvUnits;     /* Reserved Units, should be >= 2            */
    UINT32  nBlksPerUnit;       /* Maximum sectors per Unit is 256           */
} STLConfig;

/*****************************************************************************/
/* STL Information                                                           */
/*****************************************************************************/
typedef struct
{
    UINT32  nTotalLogScts;   /* Output : The number of total logical sectors */                             
    UINT32  nLogSctsPerUnit; /* Output : The number of sectors per a unit    */
    UINT32  nSamBufFactor;   /* Input  : size of buffer for SAM (percentage) */
    BOOL32  bASyncMode;      /* Input  : in case of Asynchronous mode, TRUE32 */
                             /*        : in case of Synchronous mode, FALSE32*/
} STLInfo;

/*****************************************************************************/
/* Number of snapshot option                                                 */
/*****************************************************************************/
typedef enum
{
	NUM_OF_SNAPSHOT_1 = 1,
	NUM_OF_SNAPSHOT_4 = 4
} Snapshots;

/*****************************************************************************/
/* External Functions                                                        */
/*****************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

INT32 STL_Format		(UINT32 nVol, UINT32 nPartID, STLConfig *pstCfg, UINT32 nOpt);
INT32 STL_Init			(VOID);
INT32 STL_Open			(UINT32 nVol, UINT32 nPartID, STLInfo *pstSTLInfo);
INT32 STL_Close			(UINT32 nVol, UINT32 nPartID);
INT32 STL_Read			(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts, UINT8 *pBuf);
INT32 STL_Write			(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts, UINT8 *pBuf);
INT32 STL_Delete		(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts);
INT32 STL_SecureDelete	(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts);
INT32 STL_AWrite		(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts, UINT8 *pBuf,
                                                UINT32 *pWrittenScts);
INT32 STL_ADelete		(UINT32 nVol, UINT32 nPartID, UINT32 nLsn, UINT32 nNumOfScts, 
                                                UINT32 *pDeletedenScts);
INT32 STL_Sync			(UINT32 nVol, UINT32 nQuantum);
INT32 STL_IOCtl			(UINT32 nVol, UINT32 nPartID, UINT32 nCode, VOID *pBufIn,  UINT32 nLenIn,
                         VOID *pBufOut, UINT32 nLenOut, UINT32 *pBytesReturned);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _XSR_STL_H_ */
