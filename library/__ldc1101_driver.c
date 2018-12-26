/*
    __ldc1101_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__ldc1101_driver.h"
#include "__ldc1101_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Register */
const uint8_t _LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE = 0x01;
const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1     = 0x02;
const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2     = 0x03;
const uint8_t _LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL     = 0x04;
const uint8_t _LDC1101_REG_CFG_ADDITIONAL_DEVICE            = 0x05;
const uint8_t _LDC1101_REG_RP_THRESH_H_LSB                  = 0x06;
const uint8_t _LDC1101_REG_RP_THRESH_H_MSB                  = 0x07;
const uint8_t _LDC1101_REG_RP_THRESH_L_LSB                  = 0x08;
const uint8_t _LDC1101_REG_RP_THRESH_L_MSB                  = 0x09;
const uint8_t _LDC1101_REG_CFG_INTB_MODE                    = 0x0A;
const uint8_t _LDC1101_REG_CFG_POWER_STATE                  = 0x0B;
const uint8_t _LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT    = 0x0C;
const uint8_t _LDC1101_REG_L_THRESH_HI_LSB                  = 0x16;
const uint8_t _LDC1101_REG_L_THRESH_HI_MSB                  = 0x17;
const uint8_t _LDC1101_REG_L_THRESH_LO_LSB                  = 0x18;
const uint8_t _LDC1101_REG_L_THRESH_LO_MSB                  = 0x19;
const uint8_t _LDC1101_REG_RP_L_MEASUREMENT_STATUS          = 0x20;
const uint8_t _LDC1101_REG_RP_DATA_LSB                      = 0x21;
const uint8_t _LDC1101_REG_RP_DATA_MSB                      = 0x22;
const uint8_t _LDC1101_REG_L_DATA_LSB                       = 0x23;
const uint8_t _LDC1101_REG_L_DATA_MSB                       = 0x24;
const uint8_t _LDC1101_REG_LHR_RCOUNT_LSB                   = 0x30;
const uint8_t _LDC1101_REG_LHR_RCOUNT_MSB                   = 0x31;
const uint8_t _LDC1101_REG_LHR_OFFSET_LSB                   = 0x32;
const uint8_t _LDC1101_REG_LHR_OFFSET_MSB                   = 0x33;
const uint8_t _LDC1101_REG_CFG_LHR                          = 0x34;
const uint8_t _LDC1101_REG_LHR_DATA_LSB                     = 0x38;
const uint8_t _LDC1101_REG_LHR_DATA_MID                     = 0x39;
const uint8_t _LDC1101_REG_LHR_DATA_MSB                     = 0x3A;
const uint8_t _LDC1101_REG_LHR_STATUS                       = 0x3B;
const uint8_t _LDC1101_REG_DEVICE_RID_VALUE                 = 0x3E;
const uint8_t _LDC1101_REG_CHIP_ID                          = 0x3F;

/* Register RP_SET Field Descriptions (RW) */
const uint8_t _LDC1101_RP_SET_RP_MAX_IS_DRIVEN              = 0x00;
const uint8_t _LDC1101_RP_SET_RP_MAX_CURRENT_IS_IGNORED     = 0x80;
const uint8_t _LDC1101_RP_SET_RP_MAX_96KOhm                 = 0x00;
const uint8_t _LDC1101_RP_SET_RP_MAX_48KOhm                 = 0x10;
const uint8_t _LDC1101_RP_SET_RP_MAX_24KOhm                 = 0x20;
const uint8_t _LDC1101_RP_SET_RP_MAX_12KOhm                 = 0x30;
const uint8_t _LDC1101_RP_SET_RP_MAX_6KOhm                  = 0x40;
const uint8_t _LDC1101_RP_SET_RP_MAX_3KOhm                  = 0x50;
const uint8_t _LDC1101_RP_SET_RP_MAX_1_5KOhm                = 0x60;
const uint8_t _LDC1101_RP_SET_RP_MAX_0_75KOh                = 0x70;
const uint8_t _LDC1101_RP_SET_RP_MIN_96KOhm                 = 0x00;
const uint8_t _LDC1101_RP_SET_RP_MIN_48KOhm                 = 0x01;
const uint8_t _LDC1101_RP_SET_RP_MIN_24KOhm                 = 0x02;
const uint8_t _LDC1101_RP_SET_RP_MIN_12KOhm                 = 0x03;
const uint8_t _LDC1101_RP_SET_RP_MIN_6KOhm                  = 0x04;
const uint8_t _LDC1101_RP_SET_RP_MIN_3KOhm                  = 0x05;
const uint8_t _LDC1101_RP_SET_RP_MIN_1_5KOhm                = 0x06;
const uint8_t _LDC1101_RP_SET_RP_MIN_0_75KOh                = 0x07;

/* Configure Internal Time Constant 1 (RW) */
const uint8_t _LDC1101_TC1_C1_0_75pF     = 0x00;
const uint8_t _LDC1101_TC1_C1_1_5pF      = 0x40;
const uint8_t _LDC1101_TC1_C1_3pF        = 0x80;
const uint8_t _LDC1101_TC1_C1_6pF        = 0xC0;
const uint8_t _LDC1101_TC1_R1_417kOhm    = 0x00;
const uint8_t _LDC1101_TC1_R1_212_7kOhm  = 0x10;
const uint8_t _LDC1101_TC1_R1_21_1kOhm   = 0x1F;

/* Configure Internal Time Constant 2 (RW) */
const uint8_t _LDC1101_TC2_C2_3pF        = 0x00;
const uint8_t _LDC1101_TC2_C2_6pF        = 0x40;
const uint8_t _LDC1101_TC2_C2_12pF       = 0x80;
const uint8_t _LDC1101_TC2_C2_24pF       = 0xC0;
const uint8_t _LDC1101_TC2_R2_835kOhm    = 0x00;
const uint8_t _LDC1101_TC2_R2_426_4kOhm  = 0x20;
const uint8_t _LDC1101_TC2_R2_30_5kOhm   = 0x3F;

/* Configure RP+L conversion interval (RW) */
const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_500kHz   = 0x00;
const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_8MHz     = 0xF0;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_192s    = 0x02;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_384s    = 0x03;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_768s    = 0x04;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_1536s   = 0x05;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_3072s   = 0x06;
const uint8_t _LDC1101_DIG_CFG_RESP_TIME_6144s   = 0x07;

/* Configure additional device settings (RW) */
const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_ENABLE     = 0x02;
const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_DISABLE    = 0x00;
const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_DISABLED  = 0x00;
const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_ENABLE    = 0x01;

/* Configure INTB reporting on SDO pin (RW) */
const uint8_t _LDC1101_INTB_MODE_DONT_REPORT_INTB_ON_SDO_PIN         = 0x00;
const uint8_t _LDC1101_INTB_MODE_REPORT_INTB_ON_SDO_PIN              = 0x80;
const uint8_t _LDC1101_INTB_MODE_REPORT_LHR_DATA_READY               = 0x20;
const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_THRESHOLDS        = 0x10;
const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_HIGH_THRESHOLDS   = 0x08;
const uint8_t _LDC1101_INTB_MODE_REPORT_RP_L_DATA_READY              = 0x04;
const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_THRESHOLDS       = 0x02;
const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_HIGH_THRESHOLDS  = 0x01;
const uint8_t _LDC1101_INTB_MODE_NO_OUTPUT                           = 0x00;

/* Configure Power State (RW) */
const uint8_t _LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE  = 0x00;
const uint8_t _LDC1101_FUNC_MODE_SLEEP_MODE              = 0x01;
const uint8_t _LDC1101_FUNC_MODE_SHUTDOWN_MODE           = 0x02;

/* High Resolution L Configuration (RW) */
const uint8_t _LDC1101_LHR_CFG_FREQUENCY_NOT_DIVIDED    = 0x00;
const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_2   = 0x01;
const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_4   = 0x02;
const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_8   = 0x03;


/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __LDC1101_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static const uint8_t DEVICE_ERROR = 0x01;
static const uint8_t DEVICE_OK = 0x00;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __LDC1101_DRV_SPI__

void ldc1101_spiDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    hal_gpio_csSet(1);
}

#endif
#ifdef   __LDC1101_DRV_I2C__

void ldc1101_i2cDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __LDC1101_DRV_UART__

void ldc1101_uartDriverInit(T_LDC1101_P gpioObj, T_LDC1101_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
/* ----------------------------------------------------------- IMPLEMENTATION */
void ldc1101_writeByte(uint8_t addr, uint8_t _data)
{
    uint8_t writeReg[ 2 ];

    writeReg[ 0 ] = addr;
    writeReg[ 1 ] = _data;

    hal_gpio_csSet( 0 );
    hal_spiWrite(writeReg, 2);
    hal_gpio_csSet( 1 );
}

uint8_t ldc1101_readByte(uint8_t addr)
{
    uint8_t writeReg[ 2 ];
    uint8_t readReg[ 2 ];

    writeReg[ 0 ] = (0x80 | addr);

    hal_gpio_csSet( 0 );
    hal_spiWrite(writeReg,1);
    hal_spiRead(readReg, 1);
    hal_gpio_csSet( 1 );

    return readReg[ 0 ];
}

uint8_t ldc1101_init()
{
    uint8_t chip_id;
    
    chip_id = ldc1101_readByte( _LDC1101_REG_CHIP_ID );
    if( chip_id != 0xD4 )
    {
        return  DEVICE_ERROR;
    }
    
    // Default Init
    ldc1101_writeByte(_LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE,0x07);
    ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1,0x90);
    ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2,0xA0);
    ldc1101_writeByte(_LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL,0x03);
    ldc1101_writeByte(_LDC1101_REG_CFG_ADDITIONAL_DEVICE,0x00);                 // 0x01
    ldc1101_writeByte(_LDC1101_REG_RP_THRESH_H_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_RP_THRESH_L_LSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_RP_THRESH_L_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_CFG_INTB_MODE,0x00);
    ldc1101_writeByte(_LDC1101_REG_CFG_POWER_STATE,_LDC1101_FUNC_MODE_SLEEP_MODE);
    ldc1101_writeByte(_LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT,0x00);         // 0x01
    ldc1101_writeByte(_LDC1101_REG_L_THRESH_HI_LSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_L_THRESH_HI_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_L_THRESH_LO_LSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_L_THRESH_LO_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_LHR_RCOUNT_LSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_LHR_RCOUNT_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_LHR_OFFSET_LSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_LHR_OFFSET_MSB,0x00);
    ldc1101_writeByte(_LDC1101_REG_CFG_LHR,0x00);
    Delay_100ms();
     
    return DEVICE_OK;
}

void ldc1101_setPowerMode(uint8_t mode)
{
    ldc1101_writeByte(_LDC1101_REG_CFG_POWER_STATE, mode);
}

void ldc1101_goTo_Lmode()
{
    ldc1101_writeByte( _LDC1101_REG_CFG_ADDITIONAL_DEVICE, 0x01 );
    ldc1101_writeByte( _LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT, 0x01 );
}

void ldc1101_goTo_RPmode()
{
    ldc1101_writeByte( _LDC1101_REG_CFG_ADDITIONAL_DEVICE, 0x02 );
    ldc1101_writeByte( _LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT, 0x00 );
}

uint8_t ldc1101_getStatus()
{
    uint8_t status;
    
    status = ldc1101_readByte( 0x20 );
    return status;
}

uint16_t ldc1101_getRPData()
{
    uint16_t _data;

    _data = ldc1101_readByte(0x22);
    _data = _data << 8;
    _data = _data | ldc1101_readByte(0x21);
    
    return _data;
}

uint16_t ldc1101_getLData()
{
    uint16_t _data;

    _data = ldc1101_readByte(0x24);
    _data = _data << 8;
    _data = _data | ldc1101_readByte(0x23);

    return _data;
}

uint8_t ldc1101_getInterrupt()
{
    return hal_gpio_intGet();
}

/* -------------------------------------------------------------------------- */
/*
  __ldc1101_driver.c

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