/*
    __ldc1101_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __ldc1101_driver.h
@brief    LDC1101 Driver
@mainpage LDC1101 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   LDC1101
@brief      LDC1101 Click Driver
@{

| Global Library Prefix | **LDC1101** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **avg 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _LDC1101_H_
#define _LDC1101_H_

/** 
 * @macro T_LDC1101_P
 * @brief Driver Abstract type 
 */
#define T_LDC1101_P    const uint8_t*

/** @defgroup LDC1101_COMPILE Compilation Config */              /** @{ */

   #define   __LDC1101_DRV_SPI__                            /**<     @macro __LDC1101_DRV_SPI__  @brief SPI driver selector */
//  #define   __LDC1101_DRV_I2C__                            /**<     @macro __LDC1101_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __LDC1101_DRV_UART__                           /**<     @macro __LDC1101_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup LDC1101_VAR Variables */                           /** @{ */

/* Register */
extern const uint8_t _LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE;
extern const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1    ;
extern const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2    ;
extern const uint8_t _LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL    ;
extern const uint8_t _LDC1101_REG_CFG_ADDITIONAL_DEVICE           ;
extern const uint8_t _LDC1101_REG_RP_THRESH_H_LSB                 ;
extern const uint8_t _LDC1101_REG_RP_THRESH_H_MSB                 ;
extern const uint8_t _LDC1101_REG_RP_THRESH_L_LSB                 ;
extern const uint8_t _LDC1101_REG_RP_THRESH_L_MSB                 ;
extern const uint8_t _LDC1101_REG_CFG_INTB_MODE                   ;
extern const uint8_t _LDC1101_REG_CFG_POWER_STATE                 ;
extern const uint8_t _LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT   ;
extern const uint8_t _LDC1101_REG_L_THRESH_HI_LSB                 ;
extern const uint8_t _LDC1101_REG_L_THRESH_HI_MSB                 ;
extern const uint8_t _LDC1101_REG_L_THRESH_LO_LSB                 ;
extern const uint8_t _LDC1101_REG_L_THRESH_LO_MSB                 ;
extern const uint8_t _LDC1101_REG_RP_L_MEASUREMENT_STATUS         ;
extern const uint8_t _LDC1101_REG_RP_DATA_LSB                     ;
extern const uint8_t _LDC1101_REG_RP_DATA_MSB                     ;
extern const uint8_t _LDC1101_REG_L_DATA_LSB                      ;
extern const uint8_t _LDC1101_REG_L_DATA_MSB                      ;
extern const uint8_t _LDC1101_REG_LHR_RCOUNT_LSB                  ;
extern const uint8_t _LDC1101_REG_LHR_RCOUNT_MSB                  ;
extern const uint8_t _LDC1101_REG_LHR_OFFSET_LSB                  ;
extern const uint8_t _LDC1101_REG_LHR_OFFSET_MSB                  ;
extern const uint8_t _LDC1101_REG_CFG_LHR                         ;
extern const uint8_t _LDC1101_REG_LHR_DATA_LSB                    ;
extern const uint8_t _LDC1101_REG_LHR_DATA_MID                    ;
extern const uint8_t _LDC1101_REG_LHR_DATA_MSB                    ;
extern const uint8_t _LDC1101_REG_LHR_STATUS                      ;
extern const uint8_t _LDC1101_REG_DEVICE_RID_VALUE                ;
extern const uint8_t _LDC1101_REG_CHIP_ID                         ;

/* Register RP_SET Field Descriptions (RW) */
extern const uint8_t _LDC1101_RP_SET_RP_MAX_IS_DRIVEN         ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_CURRENT_IS_IGNORED;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_96KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_48KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_24KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_12KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_6KOhm             ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_3KOhm             ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_1_5KOhm           ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_0_75KOh           ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_96KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_48KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_24KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_12KOhm            ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_6KOhm             ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_3KOhm             ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_1_5KOhm           ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_0_75KOh           ;

/* Configure Internal Time Constant 1 (RW) */
extern const uint8_t _LDC1101_TC1_C1_0_75pF   ;
extern const uint8_t _LDC1101_TC1_C1_1_5pF    ;
extern const uint8_t _LDC1101_TC1_C1_3pF      ;
extern const uint8_t _LDC1101_TC1_C1_6pF      ;
extern const uint8_t _LDC1101_TC1_R1_417kOhm  ;
extern const uint8_t _LDC1101_TC1_R1_212_7kOhm;
extern const uint8_t _LDC1101_TC1_R1_21_1kOhm ;

/* Configure Internal Time Constant 2 (RW) */
extern const uint8_t _LDC1101_TC2_C2_3pF      ;
extern const uint8_t _LDC1101_TC2_C2_6pF      ;
extern const uint8_t _LDC1101_TC2_C2_12pF     ;
extern const uint8_t _LDC1101_TC2_C2_24pF     ;
extern const uint8_t _LDC1101_TC2_R2_835kOhm  ;
extern const uint8_t _LDC1101_TC2_R2_426_4kOhm;
extern const uint8_t _LDC1101_TC2_R2_30_5kOhm ;

/* Configure RP+L conversion interval (RW) */
extern const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_500kHz;
extern const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_8MHz  ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_192s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_384s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_768s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_1536s;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_3072s;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_6144s;

/* Configure additional device settings (RW) */
extern const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_ENABLE   ;
extern const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_DISABLE  ;
extern const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_DISABLED;
extern const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_ENABLE  ;

/* Configure INTB reporting on SDO pin (RW) */
extern const uint8_t _LDC1101_INTB_MODE_DONT_REPORT_INTB_ON_SDO_PIN       ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_INTB_ON_SDO_PIN            ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_LHR_DATA_READY             ;
extern const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_THRESHOLDS      ;
extern const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_HIGH_THRESHOLDS ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_RP_L_DATA_READY            ;
extern const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_THRESHOLDS     ;
extern const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_HIGH_THRESHOLDS;
extern const uint8_t _LDC1101_INTB_MODE_NO_OUTPUT                         ;

/* Configure Power State (RW) */
extern const uint8_t _LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE;
extern const uint8_t _LDC1101_FUNC_MODE_SLEEP_MODE            ;
extern const uint8_t _LDC1101_FUNC_MODE_SHUTDOWN_MODE         ;

/* High Resolution L Configuration (RW) */
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_NOT_DIVIDED ;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_2;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_4;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_8;

                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup LDC1101_INIT Driver Initialization */              /** @{ */

#ifdef   __LDC1101_DRV_SPI__
void ldc1101_spiDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P spiObj);
#endif
#ifdef   __LDC1101_DRV_I2C__
void ldc1101_i2cDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P i2cObj, uint8_t slave);
#endif
#ifdef   __LDC1101_DRV_UART__
void ldc1101_uartDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void ldc1101_gpioDriverInit(T_LDC1101_P gpioObj);
                                                                       /** @} */
/** @defgroup LDC1101_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte on address
 *
 * @param[in] addr    Address in which the data will be written
 * @param[in] _data   Data which be written on the address
 */
void ldc1101_writeByte(uint8_t addr, uint8_t _data);

/**
 * @brief Functions for read byte from address
 *
 * @param[in] addr    Address which will be read
 * @retval one byte data which is read from the address
 */
uint8_t ldc1101_readByte(uint8_t addr);

/**
 * @brief Functions for initialization chip
 *
 * @return Whether the initialization is successful or not
 */
uint8_t ldc1101_init();

/**
 * @brief Functions for settings power mode
 *
 * @param[in] mode   Mode to be set
 *
 * Options:
      _LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE
      _LDC1101_FUNC_MODE_SLEEP_MODE
      _LDC1101_FUNC_MODE_SHUTDOWN_MODE
 */
void ldc1101_setPowerMode(uint8_t mode);

/**
 * @brief Functions for go to L mode
 */
void ldc1101_goTo_Lmode();

/**
 * @brief Functions for go to RP mode
 */
void ldc1101_goTo_RPmode();

/**
 * @brief Functions for reads status
 */
uint8_t ldc1101_getStatus();

/**
 * @brief Functions for reads RP data
 *
 * @return RT data
 */
uint16_t ldc1101_getRPData();

/**
 * @brief Functions for reads L data
 *
 * @return L data
 */
uint16_t ldc1101_getLData();

/**
 * @brief Functions for get interrupt pin status
 *
 * @return INT pin status
 */
uint8_t ldc1101_getInterrupt();


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_LDC1101_STM.c
    @example Click_LDC1101_TIVA.c
    @example Click_LDC1101_CEC.c
    @example Click_LDC1101_KINETIS.c
    @example Click_LDC1101_MSP.c
    @example Click_LDC1101_PIC.c
    @example Click_LDC1101_PIC32.c
    @example Click_LDC1101_DSPIC.c
    @example Click_LDC1101_AVR.c
    @example Click_LDC1101_FT90x.c
    @example Click_LDC1101_STM.mbas
    @example Click_LDC1101_TIVA.mbas
    @example Click_LDC1101_CEC.mbas
    @example Click_LDC1101_KINETIS.mbas
    @example Click_LDC1101_MSP.mbas
    @example Click_LDC1101_PIC.mbas
    @example Click_LDC1101_PIC32.mbas
    @example Click_LDC1101_DSPIC.mbas
    @example Click_LDC1101_AVR.mbas
    @example Click_LDC1101_FT90x.mbas
    @example Click_LDC1101_STM.mpas
    @example Click_LDC1101_TIVA.mpas
    @example Click_LDC1101_CEC.mpas
    @example Click_LDC1101_KINETIS.mpas
    @example Click_LDC1101_MSP.mpas
    @example Click_LDC1101_PIC.mpas
    @example Click_LDC1101_PIC32.mpas
    @example Click_LDC1101_DSPIC.mpas
    @example Click_LDC1101_AVR.mpas
    @example Click_LDC1101_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __ldc1101_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */