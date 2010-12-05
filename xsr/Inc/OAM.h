/*****************************************************************************/
/*                                                                           */
/* PROJECT : TinyBML_1.1.1_b008-XSR_1.5.2p4_b122/PROJECT                                                             */
/* MODULE  : XSR OAM                                                         */
/* NAME    : OS Adapation Module header file                                 */
/* FILE    : OAM.h                                                           */
/* PURPOSE : This file contains the definition and protypes of exported      */
/*           functions for OS Adaptation Module.                             */
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
/*   24-JUL-2003 [SongHo Yoon]  : first writing                              */
/*   28-JUL-2003 [SongHo Yoon]  : added OAM_Memcmp()                         */
/*   13-AUG-2003 [SongHo Yoon]  : added NULL definition                      */
/*   03-SEP-2003 [HyoJun Kim]   : added OAM_ResetTimer()                     */
/*                                added OAM_GetTime()                        */
/*   17-DEC-2003 [SongHo Yoon]  : reorganization                             */
/*   17-DEC-2003 [SongHo Yoon]  : added OAM_WaitNMSec()                      */
/*   27-JAN-2004 [SongHo Yoon]  : added OAM_RTLMSG_DISABLE                   */
/*                                removed OAM_RTLMSG_ENABLE                  */
/*   12-FEB-2004 [SongHo Yoon]  : changed TEXT macro                         */
/*                                #define   TEXT(x)  (VOID *) (x)            */
/*   22-OCT-2004 [Jihyun In]    : Interrupt related functions are modified   */
/*   15-DEC-2005 [Byoungyoung Ahn]: added OAM_Idle(), OAM_GetROLockFlag()    */
/*                                                                           */
/*****************************************************************************/

#ifndef _XSR_OAM_H_
#define	_XSR_OAM_H_

/*****************************************************************************/
/* OS Selection                                                              */
/* DO NOT DEFINE WINCE_OAM or SYMOS_OAM or in This Header File               */
/*   WINCE_OAM  : the definition for WindowsCE                               */
/*   SYMOS_OAM  : the definition for SymbianOS                               */
/*                                                                           */
/*****************************************************************************/

#if defined(WINCE_OAM)

	#include <windows.h>

	#define	XSR_RTL_PRINT(x)		RETAILMSG(1, x)

	#if defined(OAM_DBGMSG_ENABLE)
	#define	XSR_DBG_PRINT(x)		RETAILMSG(1, x)
	#endif /* OAM_DBGMSG_ENABLE */

#elif defined(SYMOS_OAM)

#if defined(SYMOS_OAM_EKA2)
	#include <locmedia.h>
	#include <platform.h>
#endif 
#if defined(SYMOS_OAM_EKA1)
    #include <k32std.h>    
    #ifdef REAL_TARGET
    #include <m32std.h>
    #endif        
#endif 

	#define	XSR_RTL_PRINT(x)		Kern::Printf x

#if defined(OAM_DBGMSG_ENABLE)

    #if defined(SYMOS_OAM_EKA2)
	#define	XSR_DBG_PRINT(x)		Kern::Printf x
    #endif 
    
    #if defined(SYMOS_OAM_EKA1)
	#define	XSR_DBG_PRINT(x)		__KTRACE_OPT(KBOOT, Kern::Printf x)	
    #endif

#endif /* OAM_DBGMSG_ENABLE */
	
#if defined(SYMOS_OAM_EKA2)
	#define	TEXT(x)					(x)
#endif
#if defined(SYMOS_OAM_EKA1)
	#define	TEXT(x)					_L(x)
#endif 

#else /* other case */

	#if defined(OAM_RTLMSG_DISABLE)
	#define	XSR_RTL_PRINT(x)
	#else
	#define	XSR_RTL_PRINT(x)		OAM_Debug x
	#endif /* OAM_RTLMSG_DISABLE */

	#if defined(OAM_DBGMSG_ENABLE)
	#define	XSR_DBG_PRINT(x)		OAM_Debug x
	#else
	#define	XSR_DBG_PRINT(x)
	#endif /* OAM_DBGMSG_ENABLE */

	#undef	TEXT
	#define	TEXT(x)					(VOID *) (x)

#endif

/*****************************************************************************/
/* NULL #defines                                                             */
/*   If Each OAM header file defines NULL, following define is not used.     */
/*****************************************************************************/
#ifndef		NULL
#ifdef		__cplusplus
#define		NULL				0
#else
#define		NULL				((void *)0)
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*****************************************************************************/
/* exported function prototype of OAM                                        */
/*****************************************************************************/
#ifdef ASYNC_MODE
VOID	 OAM_InitInt   		(UINT32 nLogIntId);
VOID	 OAM_BindInt   		(UINT32 nLogIntId, UINT32 nPhyIntId); 
VOID	 OAM_EnableInt 		(UINT32 nLogIntId, UINT32 nPhyIntId); 
VOID	 OAM_DisableInt		(UINT32 nLogIntId, UINT32 nPhyIntId); 
VOID	 OAM_ClearInt  		(UINT32 nLogIntId, UINT32 nPhyIntId);
#endif

VOID    *OAM_Malloc    		(UINT32 nSize);
VOID     OAM_Free      		(VOID  *pMem);
VOID     OAM_Memcpy    		(VOID  *pDst, VOID  *pSrc,   UINT32 nLen);
VOID     OAM_Memset    		(VOID  *pDst, UINT8  nData,  UINT32 nLen);
INT32    OAM_Memcmp    		(VOID  *pCmp1,VOID  *pCmp2,  UINT32 nLen);

BOOL32   OAM_CreateSM  		(SM32  *pHandle);
BOOL32   OAM_DestroySM 		(SM32   nHandle);
BOOL32   OAM_AcquireSM 		(SM32   nHandle);
BOOL32   OAM_ReleaseSM 		(SM32   nHandle);
UINT32   OAM_Pa2Va     		(UINT32 nPAddr);
UINT32   OAM_Pa2Va_256M    (UINT32 nPAddr);

VOID     OAM_Debug     		(VOID *pStr, ...);

VOID 	 OAM_ResetTimer		(VOID);
UINT32   OAM_GetTime   		(VOID);
VOID     OAM_WaitNMSec 		(UINT32 nNMSec);

BOOL32 	 OAM_GetROLockFlag	(VOID);
VOID	 OAM_Idle	   		(VOID);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif	/* _XSR_OAM_H_ */
