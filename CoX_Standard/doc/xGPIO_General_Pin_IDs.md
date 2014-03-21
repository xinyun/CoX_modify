xGPIO document
======

xGPIO interrupt number config   {#xGPIO_Config_md}
================

aaaa
-----------
这个宏是提供给用户的，用户根据自己使用的GPIO中断情况来配置这个宏。
在CoX规范中，它是强制的，其形式 就是一个固定的宏名称：\ref xGPIO_INT_NUMBER

|xGPIO General Pin ID    |       CoX      |     all series         |
|-----------------------:|:--------------:|:-----------------------|
|xGPIO_INT_NUMBER        |    Mandatory   |  xGPIO_INT_NUMBER      |



xGPIO General Pin ID           {#xGPIO_General_Pin_IDs_md}
===========================

这组宏定义在CoX中是强制的，在每个系列中都必须实现这样一组宏。其强制的形式为xGPIO_PIN_n。
对于每个系列这个n的大小可以不同。
CoX 支持了以下的系列，这个参数在各个系列的实现情况如下表所示：

表格一
----------

|  xGPIO General Pin ID    | LPC17xx          |STM32F1xx         |NUC1xx/NUC2xx/NUC122/NUC123|Mini51/M051|Freescale       |Holtek            |
|:------------------------:|:-------------:   |:----------:      |:----------:      |:----------:      |:-----------     :|:-----------:     |
|  xGPIO_PIN_0             | xGPIO_PIN_0      |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |
|  xGPIO_PIN_1             | xGPIO_PIN_1      |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |
|    ...                   |   ...            |...               |...               |...               |...               |...               |
|                          | xGPIO_PIN_30     |xGPIO_PIN_14      |xGPIO_PIN_14      |xGPIO_PIN_6       |xGPIO_PIN_30      |xGPIO_PIN_14      |
|  xGPIO_PIN_n             | **xGPIO_PIN_31** | **xGPIO_PIN_15** | **xGPIO_PIN_15** | **xGPIO_PIN_7**  | **xGPIO_PIN_31** | **xGPIO_PIN_15** |


表格二
----------

|xGPIO General Pin ID | xGPIO_PIN_n|
|:------:|:------:|
|LPC17xx| xGPIO_PIN_0<br>...<br> **xGPIO_PIN_31** |
|STM32F1xx|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |
|NUVOTON|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |
|Freescale|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_31** |
|Holtek|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |

表格三
------------

|xGPIO General Pin ID | xGPIO_PIN_0|....|xGPIO_PIN_n|
|:------:|:------:|:------:|:------:|
|LPC17xx| xGPIO_PIN_0|...| **xGPIO_PIN_31** |
|STM32F1xx|xGPIO_PIN_0|...| **xGPIO_PIN_15** |
|NUVOTON|xGPIO_PIN_0|...| **xGPIO_PIN_15** |
|Freescale|xGPIO_PIN_0|...| **xGPIO_PIN_31** |
|Holtek|xGPIO_PIN_0|...| **xGPIO_PIN_15** |

xGPIO Dir Mode  {#xGPIO_Dir_Mode_md}
========

这组宏用来表示 GPIO方向的模式，CoX抽出了以下5种：输入、输出、准双端、开漏输出、作为外设管脚
不一定所有的芯片都具备这5种功能，以下表格列举了五种模式在各个系列的实现情况：

|  xGPIO Dir Mode       | LPC17xx|STM32F1xx|M051 |Mini51 |NUC1xx |NUC122 |NUC123 |NUC2xx |KLx    |HT32F125x| HT32F175x| 
|:---------------------:|:------:|:-------:|:---:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-------:|:--------:|
|  xGPIO_DIR_MODE_IN    |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_OUT   |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_HW    |    *N*     |    **Y**    | *N*   |   *N*   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_QB    |    *N*   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   *N*     |   *N*     |
|  xGPIO_DIR_MODE_OD    |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   **Y**     |   **Y**     |

>\note 对于强制参数，有的系列是No，也就是没有这个功能时，我们一般空实现一个。

xGPIO Int Type  {#xGPIO_Int_Type_md}
===========
这里定义的是GPIO支持的一些中断类型，包括上升沿 、下降沿、高电平、低电平 和 双边沿双电平。
一般MCU都会有 上升沿和下降沿。一些MCU

|  xGPIO Int Type       | LPC17xx |STM32F1xx|M051 |Mini51 |NUC1xx |NUC122 |NUC123 |NUC2xx |KLx    |HT32F125x| HT32F175x| LM3S     |
|-----------------------|---------|:-------:|:---:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-------:|:--------:|:--------:|
|  xGPIO_FALLING_EDGE   |  **Y**  |  **Y**  |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**  |  **Y**   |  **Y**   |
|  xGPIO_RISING_EDGE    |  **Y**  |  **Y**  |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**  |  **Y**   |  **Y**   |
|  xGPIO_LOW_LEVEL      |   *N*   |   *N*   |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**  |  **Y**   |  **Y**   |
|  xGPIO_HIGH_LEVEL     |   *N*   |   *N*   |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**  |  **Y**   |  **Y**   |
|  xGPIO_BOTH_LEVEL     |   *N*   |   *N*   |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|   *N* |   *N*   |   *N*    |   *N*    |
|  xGPIO_BOTH_EDGES     |  **Y**  |  **Y**  |**Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**|  **Y**  |  **Y**   |  **Y**   |




xGPIO Pad Config Strength {#xGPIO_Pad_Config_Strength_md}
=============
这组宏定义是定义 管脚的驱动能力，是个非强制性的参数（其对应的函数也是非强制性的），其宏的形式 是 xGPIO_STRENGTH_nMA，
其中nMA表示 具体的驱动能力，芯片不同 n 也会不同，比如：TI 的LM3S系列 n = 2，4，8。当然很多芯片没有这个功能，比如ST NXP的芯片。
详见下表：
|  xGPIO Pad Strength   | LPC17xx|STM32F1xx|M051/Mini51/NUC1xx/NUC122/NUC123/NUC2xx|KLx   |HT32F125x/HT32F175x|LM3S  |
|-----------------------|:------:|:------:|:--------------------------------------:|:----:|:-----------------:|:----:|
|  xGPIO_STRENGTH_2MA   |  *N*   |  *N*   |  *N*                                   |  *N* |  *N*              | **Y**|
|  xGPIO_STRENGTH_4MA   |  *N*   |  *N*   |  *N*                                   |  *N* | **Y**             | **Y**|
|  xGPIO_STRENGTH_8MA   |  *N*   |  *N*   |  *N*                                   |  *N* | **Y**             | **Y**|


xGPIO Short Pin ID           {#xGPIO_Short_Pin_md} 
======
Short Pin 是为了让用户更加方便的使用GPIO而引入的，比如 PA5表示GPIO portA的5号管脚，或者是 port0
（有些厂商用0，1，2...表示port） 的5号管脚。Short Pin 适合单个管脚的应用场合。对于需要多个引脚并行操作的，
不适合使用Short Pin 

我们提供了一系列的Short Pin 的API"函数"(其实是一些函数宏)，
- \ref xGPIOSPinDirModeSet()
- xGPIOSPinIntCallbackInit()
- xGPIOSPinIntEnable()
- xGPIOSPinIntDisable()
- xGPIOSPinIntClear()
- xGPIOSPinRead()
- xGPIOSPinWrite()
- xGPIOSPinTypeGPIOInput()
- xGPIOSPinTypeGPIOOutput()
- xGPIOSPinTypeGPIOOutputOD()

将PA0设置为输出，直接 xGPIOSPinTypeGPIOOutput(PA0)就行了,将PA0置1，xGPIOSPinWrite(PA0,1),清零则是 xGPIOSPinWrite(PA0,0)。
Short Pin的好处是可以直接传入 PA0这个字符串，而毋庸关心。PA0的寄存器地址或者port A的结构体变量等。

> API 部分我会给出具体的例子来说明。


|xGPIO Short Pin ID| LPC17xx    |STM32F1xx   |M051       |Mini51     |NUC1xx      |NUC122      |NUC123      |NUC2xx      |KLx         |HT32F125x   |HT32F175x   |LM3S       |
|:-----------------|:----------:|:----------:|:---------:|:---------:|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|:---------:|
|PXn               |PA0 ... PA31|PA0 ... PA15|PA0 ... PA7|PA0 ... PA7|PA0 ... PA15|PA10... PA15|PA10... PA15|PA0 ... PA15|PA0 ... PA31|PA0 ... PA15|PA0 ... PA15|PA0 ... PA7|
|(X = A/B/...)     |PB0 ... PB31|PB0 ... PB15|PB0 ... PB7|PB0 ... PB7|PB0 ... PB15|PB0 ... PB15|PB0 ... PB15|PB0 ... PB15|PB0 ... PB31|PB0 ... PB15|PB0 ... PB15|PB0 ... PB7|
|(n = 0/1/...)     |PC0 ... PC31|PC0 ... PC15|PC0 ... PC7|PC0 ... PC7|PC0 ... PC15|PC0 ... PC13|PC0 ... PC13|PC0 ... PC15|PC0 ... PC31|  ---       |PC0 ... PC15|PC0 ... PC7|
|                  |PD0 ... PD31|PD0 ... PD15|PD0 ... PD7|PD0 ... PD7|PD0 ... PD15|PD0 ... PD11|PD0 ... PD11|PD0 ... PD15|PD0 ... PD31|  ---       |PD0 ... PD15|PD0 ... PD7|
|                  |PE0 ... PE31|PE0 ... PE15|PE0 ... PE7|PE0 ... PE7|PE0 ... PE15|  ---       |  ---       |PE0 ... PE15|PE0 ... PE31|  ---       |PE0 ... PE15|PE0 ... PE7|
|                  |PF0 ... PF31|PF0 ... PF15|  ---      |  ---      |  ---       |  ---       |PF0 ... PF3 |PF0 ... PF3 |  ---       |  ---       |  ---       |PF0 ... PF7|
|                  |PG0 ... PG31|PG0 ... PG15|  ---      |  ---      |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |PG0 ... PG7|
|                  |  ---       |  ---       |  ---      |  ---      |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |PH0 ... PH7|
|                  |  ---       |  ---       |  ---      |  ---      |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |  ---       |PJ0 ... PJ7|


General Peripheral Pin            {#xGPIO_Peripheral_Pin_md} 
======
CoX 为了让用户更加方便的使用 GPIO的外设功能，特定义了一组SPin to Peripheral的功能。
比如：xSPinTypeADC(),xSPinTypeCAN(),xSPinTypeI2C()等。
这些函数的特点是一次值配置一个管脚，其中一个参数就是 上面的Short Pin，另外一个参数就是
这里要介绍的 外设管脚名称（General Peripheral Pin），比如：ADC0 I2C0SCK SPI0CS等。
比如 xSPinTypeADC(ADC0,PA0) 就是将PA0设置为 ADC 通道 0 的输入引脚。
下面 我们列举 CoX定义的一些外设管脚名称。

| General Peripheral Pin  |          LPC17xx                |
|-------------------------|---------------------------------|
| ADCn                    | ADC0 ADC1 ... ADC7              |
| I2CnSCK                 | I2C0SCK I2C1SCK I2C2SCK         |
| I2CnSDA                 | I2C0SDA I2C1SDA I2C2SDA         |
| SPInCLK                 | SPI0CLK                         |
| SPInMOSI                | SPI0MOSI                        |
| SPInMISO                | SPI0MISO                        |
| SPInCS                  | SPI0CS                          |
| UARTnRX                 | UART0RX UART1RX UART2RX UART3RX |
| UARTnTX                 | UART0TX UART1TX UART2TX UART3TX |
| UARTnCTS                | UART1CTS                        |
| UARTnDCD                | UART1DCD                        |
| UARTnDSR                | UART1DSR                        |
| UARTnDTR                | UART1DTR                        |
| PWMn                    | PWM0 ... PWM6                   |
| TIMCCPn                 | TIMCCP0 ... TIMCCP7             |
| DACOUTn                 | DACOUT0                         |
| CANnRX                  | CAN0RX  CAN1RX                  |
| CANnTX                  | CAN0TX  CAN1TX                  |

\note 关于 timer的引脚，由于不同系列的timer相差太大：有的有输入而有的没有，有的有几组输出，有的输入输出公用一个引脚，
有的是单独分开的。所以，我们只定义了timer的输出引脚标准。



