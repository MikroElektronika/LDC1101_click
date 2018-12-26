_systemInit:
;Click_LDC1101_STM.c,36 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_LDC1101_STM.c,38 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_LDC1101_STM.c,39 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_LDC1101_STM.c,40 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_LDC1101_STM.c,42 :: 		mikrobus_spiInit( _MIKROBUS1, &_LDC1101_SPI_CFG[0] );
MOVW	R0, #lo_addr(__LDC1101_SPI_CFG+0)
MOVT	R0, #hi_addr(__LDC1101_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_LDC1101_STM.c,43 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_LDC1101_STM.c,44 :: 		mikrobus_logWrite("--- System Init ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_LDC1101_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_LDC1101_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_LDC1101_STM.c,45 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_LDC1101_STM.c,46 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_LDC1101_STM.c,48 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_LDC1101_STM.c,50 :: 		ldc1101_spiDriverInit( (T_LDC1101_P)&_MIKROBUS1_GPIO, (T_LDC1101_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_ldc1101_spiDriverInit+0
;Click_LDC1101_STM.c,51 :: 		ldc1101_init();
BL	_ldc1101_init+0
;Click_LDC1101_STM.c,54 :: 		ldc1101_writeByte(_LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE,_LDC1101_RP_SET_RP_MAX_24KOhm | _LDC1101_RP_SET_RP_MIN_1_5KOhm);
MOVS	R0, __LDC1101_RP_SET_RP_MAX_24KOhm
ORR	R0, R0, __LDC1101_RP_SET_RP_MIN_1_5KOhm
UXTB	R1, R0
MOVS	R0, __LDC1101_REG_CFG_RP_MEASUREMENT_DYNAMIC_RANGE
BL	_ldc1101_writeByte+0
;Click_LDC1101_STM.c,55 :: 		ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1,_LDC1101_TC1_C1_0_75pF | _LDC1101_TC1_R1_21_1kOhm);
MOVS	R0, __LDC1101_TC1_C1_0_75pF
ORR	R0, R0, __LDC1101_TC1_R1_21_1kOhm
UXTB	R1, R0
MOVS	R0, __LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_1
BL	_ldc1101_writeByte+0
;Click_LDC1101_STM.c,56 :: 		ldc1101_writeByte(_LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2,_LDC1101_TC2_C2_3pF | _LDC1101_TC2_R2_30_5kOhm);
MOVS	R0, __LDC1101_TC2_C2_3pF
ORR	R0, R0, __LDC1101_TC2_R2_30_5kOhm
UXTB	R1, R0
MOVS	R0, __LDC1101_REG_CFG_INTERNAL_TIME_CONSTANT_2
BL	_ldc1101_writeByte+0
;Click_LDC1101_STM.c,57 :: 		ldc1101_writeByte(_LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL, 0xD0 | _LDC1101_DIG_CFG_RESP_TIME_768s);
MOVS	R0, #208
ORR	R0, R0, __LDC1101_DIG_CFG_RESP_TIME_768s
UXTB	R1, R0
MOVS	R0, __LDC1101_REG_CFG_RP_L_CONVERSION_INTERVAL
BL	_ldc1101_writeByte+0
;Click_LDC1101_STM.c,58 :: 		ldc1101_setPowerMode(_LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE);
MOVS	R0, __LDC1101_FUNC_MODE_ACTIVE_CONVERSION_MODE
BL	_ldc1101_setPowerMode+0
;Click_LDC1101_STM.c,60 :: 		ldc1101_goTo_RPmode();
BL	_ldc1101_goTo_RPmode+0
;Click_LDC1101_STM.c,61 :: 		mikrobus_logWrite("--- Start measurement ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr2_Click_LDC1101_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_LDC1101_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_LDC1101_STM.c,62 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_LDC1101_STM.c,64 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_LDC1101_STM.c,66 :: 		RP_Data = ldc1101_getRPData();
BL	_ldc1101_getRPData+0
MOVW	R1, #lo_addr(_RP_Data+0)
MOVT	R1, #hi_addr(_RP_Data+0)
STRH	R0, [R1, #0]
;Click_LDC1101_STM.c,67 :: 		IntToStr(RP_Data, demoText);
SXTH	R0, R0
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_LDC1101_STM.c,68 :: 		mikrobus_logWrite(" Inductive Linear Position :", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr3_Click_LDC1101_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_LDC1101_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_LDC1101_STM.c,69 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_LDC1101_STM.c,70 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_LDC1101_STM.c,71 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_LDC1101_STM.c,73 :: 		void main()
;Click_LDC1101_STM.c,75 :: 		systemInit();
BL	_systemInit+0
;Click_LDC1101_STM.c,76 :: 		applicationInit();
BL	_applicationInit+0
;Click_LDC1101_STM.c,78 :: 		while (1)
L_main2:
;Click_LDC1101_STM.c,80 :: 		applicationTask();
BL	_applicationTask+0
;Click_LDC1101_STM.c,81 :: 		}
IT	AL
BAL	L_main2
;Click_LDC1101_STM.c,82 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
