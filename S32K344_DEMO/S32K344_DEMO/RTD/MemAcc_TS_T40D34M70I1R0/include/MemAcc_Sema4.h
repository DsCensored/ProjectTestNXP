/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : none
*   Dependencies         : MemAcc
*
*   Autosar Version      : 4.9.0
*   Autosar Revision     : ASR_REL_4_9_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 7.0.1
*   Build Version        : S32K3_RTD_7_0_1_D2602_ASR_REL_4_9_REV_0000_20260206
*
*   Copyright 2020 - 2026 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef MEMACC_SEMA4_H
#define MEMACC_SEMA4_H

/**
*   @file MemAcc_Sema4.h
*
*   @addtogroup MEMACC
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC_SEMA4_VENDOR_ID                      43
#define MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION       4
#define MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION       9
#define MEMACC_SEMA4_AR_RELEASE_REVISION_VERSION    0
#define MEMACC_SEMA4_SW_MAJOR_VERSION               7
#define MEMACC_SEMA4_SW_MINOR_VERSION               0
#define MEMACC_SEMA4_SW_PATCH_VERSION               1

#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)
/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#if (MEMACC_MULTI_PARTITION_TYPE_3_ENABLED == STD_ON)
#define MEMACC_START_SEC_VAR_SHARED_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
#define MEMACC_START_SEC_VAR_CLEARED_UNSPECIFIED
#endif
#include "MemAcc_MemMap.h"

/* Pointer to current memacc module configuration set */
extern const MemAcc_ConfigType            *MemAcc_pConfigPtr;

#if (MEMACC_MULTI_PARTITION_TYPE_3_ENABLED == STD_ON)
#define MEMACC_STOP_SEC_VAR_SHARED_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
#define MEMACC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#endif
#include "MemAcc_MemMap.h"

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief        The function request lock the sema4 channel.
 *
 * @details      Request lock function - request lock sema4 channel for current core on the mem hardware resource.
 *
 * @param[in]    MemHwResource    Mem resource index.
 *
 * @return       Std_ReturnType
 *                  - E_OK                   : Lock sema4 successfully.
 *                  - E_NOT_OK               : Lock sema4 fail.
 *
 * @pre          None.
 *
 * @api
 */
Std_ReturnType         MemAcc_Sema4_RequestLock(uint8 MemHwResource);
/**
 * @brief        The function request unlock the sema4 channel.
 *
 * @details      Request unlock function - request unlock sema4 channel for current core on the mem hardware resource.
 *
 * @param[in]    MemHwResource    Mem resource index.
 *
 * @return       None.
 *
 *
 * @pre          None.
 *
 * @api
 */
void                   MemAcc_Sema4_ReleaseLock(uint8 MemHwResource);

/**
 * @brief        The function request lock the sema4 channel when initializing the driver.
 *
 * @details      Request lock function - request lock sema4 channel for current core on all mem hardware resource.
 *
 * @param[in]    MemHwResource    Mem resource index.
 *
 * @return       Std_ReturnType
 *                  - E_OK                   : Lock sema4 successfully.
 *                  - E_NOT_OK               : Lock sema4 fail.
 *
 * @pre          None.
 *
 * @api
 */
Std_ReturnType         MemAcc_Sema4_InitLock(void);

/**
 * @brief        The function request lock the sema4 channel when initializing the driver.
 *
 * @details      Request unlock function - request unlock sema4 channel for current core on all mem hardware resource.
 *
 * @param[in]    MemHwResource    Mem resource index.
 *
 * @return       None.
 *
 *
 * @pre          None.
 *
 * @api
 */
void                   MemAcc_Sema4_InitUnLock(void);

/**
 * @brief        The function t0 check the resource is locked or not.
 *
 * @details      Check the locking status of the resource.
 *
 * @param[in]    None.
 *
 * @return       Std_ReturnType
 *                  - E_OK                   : Lock sema4 successfully.
 *                  - E_NOT_OK               : Lock sema4 fail.
 *
 * @pre          None.
 *
 * @api
 */
Std_ReturnType         MemAcc_Sema4_IsLocked(uint8 MemHwResource);

#if(MEMACC_MULTI_PARTITION_ADVANCE_ENABLED == STD_ON)

/**
 * @brief Check if semaphores are locked in advanced mode based on job type
 * @details Advanced mode verification that checks if the appropriate semaphores
 *          are locked by the current module instance based on job type requirements.
 *          Different job types have different locking requirements to verify.
 *
 * @param[in] JobInfo - Pointer to job runtime information
 *
 * @return Std_ReturnType
 * @retval E_OK - Required semaphores are properly locked by this instance
 * @retval E_NOT_OK - Required semaphores are not locked or unknown job type
 *
 * @pre JobInfo must be valid with properly initialized job type and SubArea
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @post No state change - read-only verification operation
 *
 */
Std_ReturnType MemAcc_Sema4_IsLockedAdvancedMode(const MemAcc_JobRuntimeInfoType *JobInfo);

/**
 * @brief Request semaphore locks in advanced mode based on job type
 * @details Advanced mode semaphore locking that determines the appropriate locking
 *          strategy based on job type and flash block. Different job types require
 *          different levels of locking granularity for optimal concurrency.
 *
 * @param[in] JobInfo - Pointer to job runtime information
 *
 * @return Std_ReturnType
 * @retval E_OK - Successfully acquired appropriate locks for the job type
 * @retval E_NOT_OK - Failed to acquire locks or unknown job type
 *
 * @pre JobInfo must be valid with properly initialized job type and SubArea
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @post Appropriate semaphores are locked based on job type requirements
 *
 */
Std_ReturnType MemAcc_Sema4_RequestLockAdvancedMode(const MemAcc_JobRuntimeInfoType *JobInfo);

/**
 * @brief Release all software semaphore locks in advanced mode
 * @details Advanced mode cleanup function that releases all software semaphore locks
 *          that are currently held by the current module instance. Iterates through
 *          all software semaphore channels and unlocks those matching the instance ID.
 *
 * @param[in] MemHwResource - Memory hardware resource identifier
 *
 * @return void
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre MemHwResource must be a valid hardware resource index
 * @post All software semaphores held by this instance are released
 *
 */
void MemAcc_Sema4_ReleaseLockAdvancedMode(uint8 MemHwResource);

#endif

#ifdef __cplusplus
}
#endif

#endif  /*#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED) */

/** @} */

#endif /* MEMACC_H */
