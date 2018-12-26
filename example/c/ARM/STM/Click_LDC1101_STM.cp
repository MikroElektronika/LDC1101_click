#line 1 "D:/Clicks_git/L/LDC1101_Click/SW/example/c/ARM/STM/Click_LDC1101_STM.c"
#line 1 "d:/clicks_git/l/ldc1101_click/sw/example/c/arm/stm/click_ldc1101_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/l/ldc1101_click/sw/example/c/arm/stm/click_ldc1101_config.h"
#line 1 "d:/clicks_git/l/ldc1101_click/sw/example/c/arm/stm/click_ldc1101_types.h"
#line 3 "d:/clicks_git/l/ldc1101_click/sw/example/c/arm/stm/click_ldc1101_config.h"
const uint32_t _LDC1101_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV256,
 _SPI_SECOND_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_HIGH |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};
#line 1 "d:/clicks_git/l/ldc1101_click/sw/library/__ldc1101_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/l/ldc1101_click/sw/library/__ldc1101_driver.h"
extern const uint8_t _LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE;
extern const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1 ;
extern const uint8_t _LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2 ;
extern const uint8_t _LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL ;
extern const uint8_t _LDC1101_REG_CFG_ADDITIONAL_DEVICE ;
extern const uint8_t _LDC1101_REG_RP_THRESH_H_LSB ;
extern const uint8_t _LDC1101_REG_RP_THRESH_H_MSB ;
extern const uint8_t _LDC1101_REG_RP_THRESH_L_LSB ;
extern const uint8_t _LDC1101_REG_RP_THRESH_L_MSB ;
extern const uint8_t _LDC1101_REG_CFG_INTB_MODE ;
extern const uint8_t _LDC1101_REG_CFG_POWER_STATE ;
extern const uint8_t _LDC1101_REG_AMPLITUDE_CONTROL_REQUIREMENT ;
extern const uint8_t _LDC1101_REG_L_THRESH_HI_LSB ;
extern const uint8_t _LDC1101_REG_L_THRESH_HI_MSB ;
extern const uint8_t _LDC1101_REG_L_THRESH_LO_LSB ;
extern const uint8_t _LDC1101_REG_L_THRESH_LO_MSB ;
extern const uint8_t _LDC1101_REG_RP_L_MEASUREMENT_STATUS ;
extern const uint8_t _LDC1101_REG_RP_DATA_LSB ;
extern const uint8_t _LDC1101_REG_RP_DATA_MSB ;
extern const uint8_t _LDC1101_REG_L_DATA_LSB ;
extern const uint8_t _LDC1101_REG_L_DATA_MSB ;
extern const uint8_t _LDC1101_REG_LHR_RCOUNT_LSB ;
extern const uint8_t _LDC1101_REG_LHR_RCOUNT_MSB ;
extern const uint8_t _LDC1101_REG_LHR_OFFSET_LSB ;
extern const uint8_t _LDC1101_REG_LHR_OFFSET_MSB ;
extern const uint8_t _LDC1101_REG_CFG_LHR ;
extern const uint8_t _LDC1101_REG_LHR_DATA_LSB ;
extern const uint8_t _LDC1101_REG_LHR_DATA_MID ;
extern const uint8_t _LDC1101_REG_LHR_DATA_MSB ;
extern const uint8_t _LDC1101_REG_LHR_STATUS ;
extern const uint8_t _LDC1101_REG_DEVICE_RID_VALUE ;
extern const uint8_t _LDC1101_REG_CHIP_ID ;


extern const uint8_t _LDC1101_RP_SET_RP_MAX_IS_DRIVEN ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_CURRENT_IS_IGNORED;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_96KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_48KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_24KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_12KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_6KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_3KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_1_5KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MAX_0_75KOh ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_96KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_48KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_24KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_12KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_6KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_3KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_1_5KOhm ;
extern const uint8_t _LDC1101_RP_SET_RP_MIN_0_75KOh ;


extern const uint8_t _LDC1101_TC1_C1_0_75pF ;
extern const uint8_t _LDC1101_TC1_C1_1_5pF ;
extern const uint8_t _LDC1101_TC1_C1_3pF ;
extern const uint8_t _LDC1101_TC1_C1_6pF ;
extern const uint8_t _LDC1101_TC1_R1_417kOhm ;
extern const uint8_t _LDC1101_TC1_R1_212_7kOhm;
extern const uint8_t _LDC1101_TC1_R1_21_1kOhm ;


extern const uint8_t _LDC1101_TC2_C2_3pF ;
extern const uint8_t _LDC1101_TC2_C2_6pF ;
extern const uint8_t _LDC1101_TC2_C2_12pF ;
extern const uint8_t _LDC1101_TC2_C2_24pF ;
extern const uint8_t _LDC1101_TC2_R2_835kOhm ;
extern const uint8_t _LDC1101_TC2_R2_426_4kOhm;
extern const uint8_t _LDC1101_TC2_R2_30_5kOhm ;


extern const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_500kHz;
extern const uint8_t _LDC1101_DIG_CFG_MIN_FREQ_8MHz ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_192s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_384s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_768s ;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_1536s;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_3072s;
extern const uint8_t _LDC1101_DIG_CFG_RESP_TIME_6144s;


extern const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_ENABLE ;
extern const uint8_t _LDC1101_ALT_CFG_SHUTDOWN_DISABLE ;
extern const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_DISABLED;
extern const uint8_t _LDC1101_ALT_CFG_L_OPTIMAL_ENABLE ;


extern const uint8_t _LDC1101_INTB_MODE_DONT_REPORT_INTB_ON_SDO_PIN ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_INTB_ON_SDO_PIN ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_LHR_DATA_READY ;
extern const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_THRESHOLDS ;
extern const uint8_t _LDC1101_INTB_MODE_L_CONVERSION_TO_L_HIGH_THRESHOLDS ;
extern const uint8_t _LDC1101_INTB_MODE_REPORT_RP_L_DATA_READY ;
extern const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_THRESHOLDS ;
extern const uint8_t _LDC1101_INTB_MODE_RP_CONVERSION_TO_L_HIGH_THRESHOLDS;
extern const uint8_t _LDC1101_INTB_MODE_NO_OUTPUT ;


extern const uint8_t _LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE;
extern const uint8_t _LDC1101_FUNC_MODE_SLEEP_MODE ;
extern const uint8_t _LDC1101_FUNC_MODE_SHUTDOWN_MODE ;


extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_NOT_DIVIDED ;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_2;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_4;
extern const uint8_t _LDC1101_LHR_CFG_FREQUENCY_DIVIDED_BY_8;
#line 176 "d:/clicks_git/l/ldc1101_click/sw/library/__ldc1101_driver.h"
void ldc1101_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 186 "d:/clicks_git/l/ldc1101_click/sw/library/__ldc1101_driver.h"
void ldc1101_gpioDriverInit( const uint8_t*  gpioObj);




void ldc1101_writeByte(uint8_t addr, uint8_t _data);

uint8_t ldc1101_readByte(uint8_t addr);

uint8_t ldc1101_init();

void ldc1101_setPowerMode(uint8_t mode);

void ldc1101_goTo_LHRmode();

void ldc1101_goTo_RPmode();

uint8_t ldc1101_getStatus();

uint16_t ldc1101_getRPData();

uint16_t ldc1101_getLData();

uint8_t ldc1101_getInterrupt();
#line 33 "D:/Clicks_git/L/LDC1101_Click/SW/example/c/ARM/STM/Click_LDC1101_STM.c"
uint16_t RP_Data;
char demoText[50];

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );

 mikrobus_spiInit( _MIKROBUS1, &_LDC1101_SPI_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite("--- System Init ---", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 ldc1101_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 ldc1101_init();


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
 IntToStr(RP_Data, demoText);
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
