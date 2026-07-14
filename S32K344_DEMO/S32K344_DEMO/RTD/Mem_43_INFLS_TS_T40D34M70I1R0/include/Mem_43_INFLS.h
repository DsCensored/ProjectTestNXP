/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : C40
*   Dependencies         : None
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

#ifndef MEM_43_INFLS_H
#define MEM_43_INFLS_H

/**
 * @file       Mem_43_INFLS.h
 *
 * @defgroup   MEM_43_INFLS MEM_43_INFLS Driver
 * @implements Mem_43_INFLS.h_Artifact
 *
 * @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mem_43_INFLS_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEM_43_INFLS_VENDOR_ID                      43
#define MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION       4
#define MEM_43_INFLS_AR_RELEASE_MINOR_VERSION       9
#define MEM_43_INFLS_AR_RELEASE_REVISION_VERSION    0
#define MEM_43_INFLS_SW_MAJOR_VERSION               7
#define MEM_43_INFLS_SW_MINOR_VERSION               0
#define MEM_43_INFLS_SW_PATCH_VERSION               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID != MEM_43_INFLS_VENDOR_ID_CFG)
    #error "Mem_43_INFLS.h and Mem_43_INFLS_Cfg.h have different vendor ids"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION    != MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION    != MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION != MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_INFLS.h and Mem_43_INFLS_Cfg.h are different"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION != MEM_43_INFLS_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION != MEM_43_INFLS_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION != MEM_43_INFLS_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_INFLS.h and Mem_43_INFLS_Cfg.h are different"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*When multicore type3 is enabled on MemAcc, global variables must be allocated to share memory section */
#if (MEM_43_INFLS_MULTICORE_ENABLED == STD_ON)
#define MEM_43_INFLS_START_SEC_VAR_SHARED_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
#define MEM_43_INFLS_START_SEC_VAR_CLEARED_UNSPECIFIED
#endif
#include "Mem_43_INFLS_MemMap.h"

/* Pointer to current mem internal flash module configuration set */
extern const Mem_43_INFLS_ConfigType            *Mem_43_INFLS_pConfigPtr;


#if (MEM_43_INFLS_MULTICORE_ENABLED == STD_ON)
#define MEM_43_INFLS_STOP_SEC_VAR_SHARED_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
#define MEM_43_INFLS_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#endif
#include "Mem_43_INFLS_MemMap.h"

/*==================================================================================================
                                       GLOBAL FUNCTIONS (Synchronous Functions)
==================================================================================================*/

/**
 * @brief        The function initializes Mem_43_INFLS module.
 *
 * @details      Initialization function - initializes all variables
 *               and sets the module state to initialized.
 *
 * @param[in]    ConfigPtr        Pointer to the configuration data structure - since Mem_43_INFLS driver
 *                                is a precompile module this parameter is typically not used and must be NULL.
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 * @pre          None
 *
 */
void Mem_43_INFLS_Init(const Mem_43_INFLS_ConfigType* ConfigPtr);


/**
 * @brief        The function de-initializes the Mem_43_INFLS module.
 *
 * @details      De-initialize module. If there is still an access job pending,
 *               it is immediately terminated (using hardware cancel operation)
 *               and the Mem driver module state is set to uninitialized.
 *
 * @param[in]    None
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 * @pre          The Mem_43_INFLS module must be re-initialized before it will accept
 *               any new job requests after this service is processed.
 *
 */
void Mem_43_INFLS_DeInit(void);

/**
 * @brief        Return the version information of the Mem module.
 *
 * @details      Version information includes:
 *               - Module Id
 *               - Vendor Id
 *               - Vendor specific version numbers
 *
 * @param[in]    None
 *
 * @param[inout] None
 *
 * @param[out]   VersionInfoPtr    Pointer to where to store the version information of this module.
 *
 * @return       None
 *
 */
void Mem_43_INFLS_GetVersionInfo(Std_VersionInfoType * VersionInfoPtr);


/**
 * @brief        Returns the result of the most recent job.
 *
 * @details      Returns synchronously the result of the last job.
 *
 * @param[in]    InstanceId    ID of the related memory driver instance.
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       Mem_43_INFLS_JobResultType    Most recent job result.
 *
 */
Mem_43_INFLS_JobResultType Mem_43_INFLS_GetJobResult(Mem_43_INFLS_InstanceIdType InstanceId);

/**
 * @brief        Suspends active memory operation using hardware mechanism.
 *
 * @details      If the suspend mechanism is not supported by hardware,
 *               implementation based on physical segmentation.
 *
 * @param[in]    InstanceId    ID of the related memory driver instance.
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 */
Std_ReturnType Mem_43_INFLS_Suspend(Mem_43_INFLS_InstanceIdType InstanceId);

/**
 * @brief        Resumes suspended memory operation using hardware mechanism.
 *
 * @details      Resumes suspended memory operation using hardware mechanism.
 *
 * @param[in]    InstanceId    ID of the related memory driver instance.
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 */
Std_ReturnType Mem_43_INFLS_Resume(Mem_43_INFLS_InstanceIdType InstanceId);

/**
 * @brief        Propagates an ECC error to the memory upper layers
 *
 * @details      This service can be used to report an access error in case
 *               the Mem driver cannot provide the access error information - typically for ECC faults.
 *               It is called by the system ECC handler to propagate an ECC error to the memory upper layers.
 *
 * @param[in]    InstanceId    ID of the related memory driver instance.
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 */
void Mem_43_INFLS_PropagateError(Mem_43_INFLS_InstanceIdType InstanceId);


/*==================================================================================================
                                       GLOBAL FUNCTIONS (Asynchronous Functions)
==================================================================================================*/

/**
 * @brief            Reads from flash memory.
 *
 * @details          Triggers a read job to copy the from the source address into the referenced destination data
 *                   buffer. The result of this service can be retrieved using the Mem_GetJobResult API. If the read
 *                   operation was successful, the result of the job is MEM_43_INFLS_JOB_OK. If the read operation failed,
 *                   the result of the job is either MEM_43_INFLS_JOB_FAILED in case of a general error or MEM_ECC_
 *                   CORRECTED/MEM_ECC_UNCORRECTED in case of a correctable/uncorrectable ECC error.
 *
 * @param[in]        InstanceId            ID of the related memory driver instance
 * @param[in]        SourceAddress         Physical address to read data from.
 * @param[in]        Length                Read length in bytes.
 *
 * @param[out]       DestinationDataPtr    Destination memory pointer to store the read data
 *
 * @return           Std_ReturnType
 *                   - E_OK                   : The requested job has been accepted by the module.
 *                   - E_NOT_OK               : The requested job has not been accepted by the module.
 *                   - E_MEM_SERVICE_NOT_AVAIL: The service function is not implemented.
 *
 */
Std_ReturnType Mem_43_INFLS_Read(Mem_43_INFLS_InstanceIdType    InstanceId,
                                 Mem_43_INFLS_AddressType       SourceAddress,
                                 Mem_43_INFLS_DataType          *DestinationDataPtr,
                                 Mem_43_INFLS_LengthType        Length
                                );

/**
 * @brief            Writes to flash memory.
 *
 * @details          Triggers a write job to store the passed data to the provided address area with given address
 *                   and length. The result of this service can be retrieved using the Mem_GetJobResult API. If the
 *                   write operation was successful, the job result is MEM_43_INFLS_JOB_OK. If there was an issue writing
 *                   the data, the result is MEM_FAILED.
 *
 * @param[in]        InstanceId            ID of the related memory driver instance
 * @param[in]        TargetAddress         Physical write address (aligned to page size).
 * @param[in]        SourceDataPtr         Source data pointer (aligned to page size).
 * @param[in]        Length                Write length in bytes (aligned to page size).
 *
 * @param[out]       None
 *
 * @return           Std_ReturnType
 *                   - E_OK                   : The requested job has been accepted by the module.
 *                   - E_NOT_OK               : The requested job has not been accepted by the module.
 *                   - E_MEM_SERVICE_NOT_AVAIL: The service function is not implemented.
 *
 * @pre              The module has to be initialized.
 *
 */
Std_ReturnType Mem_43_INFLS_Write(Mem_43_INFLS_InstanceIdType     InstanceId,
                                  Mem_43_INFLS_AddressType        TargetAddress,
                                  const Mem_43_INFLS_DataType     *SourceDataPtr,
                                  Mem_43_INFLS_LengthType         Length
                                 );


/**
 * @brief            Erase one or more complete flash sectors.
 *
 * @details          Triggers an erase job of the given sector/sector batch defined by targetAddress and length.
 *                   The result of this service can be retrieved using the Mem_GetJobResult API. If the erase operation
 *                   was successful, the result of the job is MEM_43_INFLS_JOB_OK. If the erase operation failed, e.g. due to
 *                   a hardware issue, the result of the job is MEM_43_INFLS_JOB_FAILED.
 *
 * @param[in]        InstanceId            ID of the related memory driver instance
 * @param[in]        TargetAddress         Physical erase address (aligned to sector size).
 * @param[in]        Length                Erase length in bytes (aligned to sector size).
 *
 * @param[out]       None
 *
 * @return           Std_ReturnType
 *                   - E_OK                   : The requested job has been accepted by the module.
 *                   - E_NOT_OK               : The requested job has not been accepted by the module.
 *                   - E_MEM_SERVICE_NOT_AVAIL: The service function is not implemented.
 *
 * @pre              The module has to be initialized.
 *
 */
Std_ReturnType Mem_43_INFLS_Erase(Mem_43_INFLS_InstanceIdType    InstanceId,
                                  Mem_43_INFLS_AddressType       TargetAddress,
                                  Mem_43_INFLS_LengthType        Length
                                 );


/**
 * @brief            Verify whether a given memory area has been erased but not (yet) programmed.
 *
 * @details          Triggers a job to check the erased state of the page which is referenced by targetAddress.
 *                   The result of this service can be retrieved using the Mem_GetJobResult API. If the checked page is
 *                   blank, the result of the job is MEM_43_INFLS_JOB_OK. Otherwise, if the page is not blank, the result is
 *                   MEM_INCONSISTENT.
 *
 * @param[in]        InstanceId            ID of the related memory driver instance
 * @param[in]        TargetAddress         Physical blank check address.
 * @param[in]        Length                Blank check length.
 *
 * @param[out]       None
 *
 * @return           Std_ReturnType
 *                   - E_OK                   : The requested job has been accepted by the module.
 *                   - E_NOT_OK               : The requested job has not been accepted by the module.
 *                   - E_MEM_SERVICE_NOT_AVAIL: The service function is not implemented.
 *
 * @pre              The module has to be initialized.
 *
 */
Std_ReturnType Mem_43_INFLS_BlankCheck(Mem_43_INFLS_InstanceIdType    InstanceId,
                                       Mem_43_INFLS_AddressType       TargetAddress,
                                       Mem_43_INFLS_LengthType        Length
                                      );


/**
 * @brief            Trigger a hardware specific service.
 *
 * @details          Triggers a hardware specific memory driver job. DataPtr can be used to pass and return data to/
 *                   from this service. This service is just a dispatcher to the hardware specific service
 *                   implementation referenced by HwServiceId. The result of this service can be retrieved using the
 *                   Mem_GetJobResult API. If the hardware specific operation was successful, the result of the job
 *                   is MEM_43_INFLS_JOB_OK. If the hardware specific operation failed, the result of the job is MEM_43_INFLS_JOB_FAILED.
 *
 * @param[in]        InstanceId            ID of the related memory driver instance
 * @param[in]        HwServiceId           Hardware specific service request identifier for dispatching the request.
 * @param[in]        DataPtr               Request specific data pointer.
 * @param[in]        LengthPtr             Size pointer of the data passed by dataPtr.
 *
 * @param[out]       None
 *
 * @return           Std_ReturnType
 *                   - E_OK                   : The requested job has been accepted by the module.
 *                   - E_NOT_OK               : The requested job has not been accepted by the module.
 *                   - E_MEM_SERVICE_NOT_AVAIL: The service function is not implemented.
 *
 * @pre              The module has to be initialized.
 *
 */
Std_ReturnType Mem_43_INFLS_HwSpecificService(Mem_43_INFLS_InstanceIdType     instanceId,
                                              Mem_43_INFLS_HwServiceIdType    hwServiceId,
                                              Mem_43_INFLS_DataType         * dataPtr,
                                              Mem_43_INFLS_LengthType       * lengthPtr
                                             );
/*==================================================================================================
                                       GLOBAL FUNCTIONS (Scheduled Functions)
==================================================================================================*/

/**
 * @brief            Service to handle the requested jobs and the internal management operations.
 *
 * @details          Service to handle the requested jobs and the internal management operations.
 *
 * @param[in]    None
 *
 * @param[inout] None
 *
 * @param[out]   None
 *
 * @return       None
 *
 * @pre              The module has to be initialized.
 *
 * @note             This function have to be called cyclically by the Basic Software Module;
 *                   it will do nothing if there aren't pending job.
 *
 */
void Mem_43_INFLS_MainFunction(void);


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* MEM_43_INFLS_H */
