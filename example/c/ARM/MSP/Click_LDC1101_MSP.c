/*
Example for LDC1101 Click

    Date          : avg 2018.
    Author        : Katarina Perendic

Test configuration MSP :
    
    MCU              : MSP432
    Dev. Board       : Clicker 2 for MSP432
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets CS pin as OUTPUT and PWM and INT pin sa INPUT
- Application Initialization - Driver intialization, standard configurations and start measurement
- Application Task - (code snippet) - Reads RP data and logs data to USBUART every 100 ms.

- note:
    Example demonstrates measurement of inductance change depending on the linear motion of the metal object.
    Induction of the linear metal position depends on the type of metal and the configuration.
*/

#include "Click_LDC1101_types.h"
#include "Click_LDC1101_config.h"

uint32_t RP_Data;
char demoText[50];

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    
    mikrobus_spiInit( _MIKROBUS1, &_LDC1101_SPI_CFG[0] );
    mikrobus_logInit( _MIKROBUS2, 9600 );
    mikrobus_logWrite("--- System Init ---", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    ldc1101_spiDriverInit( (T_LDC1101_P)&_MIKROBUS1_GPIO, (T_LDC1101_P)&_MIKROBUS1_SPI );
    ldc1101_init();

    // Configuration
    ldc1101_writeByte(_LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE,_LDC1101_RP_SET_RP_MAX_24KOhm | _LDC1101_RP_SET_RP_MIN_1_5KOhm);
    ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1,_LDC1101_TC1_C1_0_75pF | _LDC1101_TC1_R1_21_1kOhm);
    ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2,_LDC1101_TC2_C2_3pF | _LDC1101_TC2_R2_30_5kOhm);
    ldc1101_writeByte(_LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL, 0xD0 | _LDC1101_DIG_CFG_RESP_TIME_768s);
    ldc1101_setPowerMode(_LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE);
    
    ldc1101_goTo_RPmode();
    mikrobus_logWrite("--- Start measurement ---", _LOG_LINE);
}

void applicationTask()
{
    RP_Data = ldc1101_getRPData();
    LongWordToStr(RP_Data, demoText);
    mikrobus_logWrite(" Inductive Linear Position :", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    Delay_100ms();
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}