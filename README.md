![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# LDC1101 Click

- **CIC Prefix**  : LDC1101
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : avg 2018.

---


### Software Support

We provide a library for the LDC1101 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2548/ldc-1101-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the SPI bus driver and drivers that offer a choice for writing data in address and reading data from address.
The library includes function for read RP data and L data.
The user also has the function for initializes chip, funstion for go to RP mode or L mode, Function for set porew mode and function for read interrupt state.


Key functions :

- ``` uint8_t ldc1101_init() ``` - Functions for initialization chip
- ``` void ldc1101_setPowerMode(uint8_t mode) ``` - Functions for settings power mode
- ``` void ldc1101_goTo_RPmode() ``` - Functions for go to RP mode
- ``` uint16_t ldc1101_getRPData() ``` - Functions for reads RP data

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets CS pin as OUTPUT and PWM and INT pin sa INPUT
- Application Initialization - Driver intialization, standard configurations and start measurement
- Application Task - (code snippet) - Reads RP data and logs data to USBUART every 100 ms.

- note:
    Example demonstrates measurement of inductance change depending on the linear motion of the metal object.
    Induction of the linear metal position depends on the type of metal and the configuration.


```.c
void applicationTask()
{
    RP_Data = ldc1101_getRPData();
    IntToStr(RP_Data, demoText);
    mikrobus_logWrite(" Inductive Linear Position :", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    Delay_100ms();
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2548/ldc-1101-click) page.

Other mikroE Libraries used in the example:

- SPI
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
