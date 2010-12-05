/*****************************************************************************/
/*                                                                           */
/* PROJECT : AnyStore II                                                     */
/* MODULE  : XSR PAM                                                         */
/* NAME    : Platform Adapation Module header file                           */
/* FILE    : PAM.h                                                           */
/* PURPOSE : This file contains the definition and protypes of exported      */
/*           functions for Platform Adaptation Module of XSR.                */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*          COPYRIGHT 2003-2005, SAMSUNG ELECTRONICS CO., LTD.               */
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
/*   08-DEC-2003 [JangHwan Kim] : Add entry of XsrDevParm                    */
/*   15-DEC-2003 [SongHo Yoon]  : removed XsrVolParm structure               */
/*   07-SEP-2004 [JangHwan Kim] : Added PAM_DummyLLDFunc()                   */
/*   13-MAY-2005 [SeWook Na]    : Reorganize for XSR1.4                      */
/*                                                                           */
/*****************************************************************************/

#ifndef _XSR_PAM_H_
#define _XSR_PAM_H_


/*****************************************************************************/
/* Definitions of PAM                                                        */
/*****************************************************************************/
#define     NOT_MAPPED              0xFFFFFFFF  /* Device not mapped 
                                                   in platform memory map    */

/* ECC Policy Selection */
#define     NO_ECC                  0       /* No ECC or ECC execution by 
                                               another type of ECC mechanism */
#define     SW_ECC                  1       /* ECC execution by XSR Software 
                                               (based on Hamming code)       */
#define     HW_ECC                  2       /* ECC execution by HW     
                                               (based on Hamming code)       */
                                               
/* Lock Scheme Policy Selection */
#define     NO_LOCK_SCHEME          0       /* No Lock Scheme execution      */
#define     SW_LOCK_SCHEME          1       /* Lock Scheme execution by SW   */
#define     HW_LOCK_SCHEME          2       /* Lock Scheme execution by HW   */

/*****************************************************************************/
/* return typedef of PAM_GetPAParm()                                         */
/*****************************************************************************/
typedef struct {
    UINT32  nBaseAddr[XSR_MAX_DEV/XSR_MAX_VOL];
	UINT32  nBaseAddr1[XSR_MAX_DEV/XSR_MAX_VOL];
                                    /* the base address for accessing NAND 
                                       device                                */
    UINT16  nEccPol;                /* Ecc Execution Section                  
                                       NO_ECC : No Ecc or another type of ECC
                                       SW_ECC : Ecc Execution by XSR SW
                                       HW_ECC : Ecc Execution by HW 
                                                (based on Hamming code)      */
    UINT16  nLSchemePol;            /* Lock Scheme Policy Section
                                       NO_LOCK_SCHEME : No Lock Scheme
                                       SW_LOCK_SCHEME : Lock Scheme Execution
                                                        by SW
                                       HW_LOCK_SCHEME : Lock Scheme Execution
                                                        by HW
                                        (if HW has Lock/Unlock functionality) */
    BOOL32  bByteAlign;             /* Memory Byte Alignment Problem
                                       TRUE32 : Byte Align Problem Free in
                                                XSR and LLD
                                               (Memory usage increased)
                                       FALSE32 : No Action for Byte Align
                                                 Problem                     */

    UINT32  nDevsInVol;             /* number of devices in the volume       */

    VOID   *pExInfo;                /* For Device Extension.
                                       For Extra Information of Device,
                                       data structure can be mapped.         */
} XsrVolParm;

/*****************************************************************************/
/* Exported Function Prototype of PAM                                        */
/*****************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

VOID    PAM_Init         (VOID);
VOID   *PAM_GetPAParm    (VOID);
VOID    PAM_RegLFT       (VOID  *pContext);
VOID    PAM_Memcpy       (VOID  *pDst, VOID *pSrc, UINT32 nLen);
VOID	PAM_Idle         (UINT32 nMode);

#ifdef ASYNC_MODE
VOID    PAM_InitInt      (UINT32 nLogIntId);
VOID    PAM_BindInt      (UINT32 nLogIntId); 
VOID    PAM_EnableInt    (UINT32 nLogIntId); 
VOID    PAM_DisableInt   (UINT32 nLogIntId); 
VOID    PAM_ClearInt     (UINT32 nLogIntId);
#endif /* ASYNC_MODE */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif  /* _XSR_PAM_H_ */
