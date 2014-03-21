//*****************************************************************************
//
//! \file      xgpio.h
//! \brief     Prototypes for the GPIO Driver.
//! \version   V2.2.1.0
//! \date      $CURRENTTIME$
//! \author    CooCox
//! \copyright
//!
//! Copyright (c)  2011, CooCox
//! All rights reserved.
//!
//! Redistribution and use in source and binary forms, with or without
//! modification, are permitted provided that the following conditions
//! are met:
//!     * Redistributions of source code must retain the above copyright
//! notice, this list of conditions and the following disclaimer.
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution.
//!     * Neither the name of the <ORGANIZATION> nor the names of its
//! contributors may be used to endorse or promote products derived
//! from this software without specific prior written permission.
//!
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __xGPIO_H__
#define __xGPIO_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplu
extern "C"
{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup GPIO
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup GPIO
//! @{
//
//*****************************************************************************


//*****************************************************************************
//
//! \addtogroup  LPC17xx_GPIO_General_Pin_IDs  LPC17xx GPIO General Pin ID
//! \brief       The following values define the bit field for the ucPins argument
//!              to several of the APIs.
//! @{
//
//*****************************************************************************

//! GPIO Pin 0
#define GPIO_PIN_0              BIT_32_0

//! GPIO Pin 1
#define GPIO_PIN_1              BIT_32_1

//! GPIO Pin 2
#define GPIO_PIN_2              BIT_32_2

//! GPIO Pin 3
#define GPIO_PIN_3              BIT_32_3

//! GPIO Pin 4
#define GPIO_PIN_4              BIT_32_4

//! GPIO Pin 5
#define GPIO_PIN_5              BIT_32_5

//! GPIO Pin 6
#define GPIO_PIN_6              BIT_32_6

//! GPIO Pin 7
#define GPIO_PIN_7              BIT_32_7

//! GPIO Pin 8
#define GPIO_PIN_8              BIT_32_8

//! GPIO Pin 9
#define GPIO_PIN_9              BIT_32_9

//! GPIO Pin 10
#define GPIO_PIN_10             BIT_32_10

//! GPIO Pin 11
#define GPIO_PIN_11             BIT_32_11

//! GPIO Pin 12
#define GPIO_PIN_12             BIT_32_12

//! GPIO Pin 13
#define GPIO_PIN_13             BIT_32_13

//! GPIO Pin 14
#define GPIO_PIN_14             BIT_32_14

//! GPIO Pin 15
#define GPIO_PIN_15             BIT_32_15

//! GPIO Pin 16
#define GPIO_PIN_16             BIT_32_16

//! GPIO Pin 17
#define GPIO_PIN_17             BIT_32_17

//! GPIO Pin 18
#define GPIO_PIN_18             BIT_32_18

//! GPIO Pin 19
#define GPIO_PIN_19             BIT_32_19

//! GPIO Pin 20
#define GPIO_PIN_20             BIT_32_20

//! GPIO Pin 21
#define GPIO_PIN_21             BIT_32_21

//! GPIO Pin 22
#define GPIO_PIN_22             BIT_32_22

//! GPIO Pin 23
#define GPIO_PIN_23             BIT_32_23

//! GPIO Pin 24
#define GPIO_PIN_24             BIT_32_24

//! GPIO Pin 25
#define GPIO_PIN_25             BIT_32_25

//! GPIO Pin 26
#define GPIO_PIN_26             BIT_32_26

//! GPIO Pin 27
#define GPIO_PIN_27             BIT_32_27

//! GPIO Pin 28
#define GPIO_PIN_28             BIT_32_28

//! GPIO Pin 29
#define GPIO_PIN_29             BIT_32_29

//! GPIO Pin 30
#define GPIO_PIN_30             BIT_32_30

//! GPIO Pin 31
#define GPIO_PIN_31             BIT_32_31

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup  LPC17xx_GPIO_General_Pin_IDs  LPC17xx GPIO General Pin ID
//! \brief       The following values define the bit field for the ucPins argument
//!              to several of the APIs.
//! @{
//
//*****************************************************************************
#define GPIO_PA0_PA0            ((unsigned long)0x00 << 0 )
#define GPIO_PA0_CAN1RX         ((unsigned long)0x01 << 0 )
#define GPIO_PA0_UART3TX        ((unsigned long)0x02 << 0 )
#define GPIO_PA0_I2C1SDA        ((unsigned long)0x03 << 0 )
#define GPIO_PA1_PA1            ((unsigned long)0x00 << 2 )
#define GPIO_PA1_CAN1TX         ((unsigned long)0x01 << 2 )
#define GPIO_PA1_UART3RX        ((unsigned long)0x02 << 2 )
#define GPIO_PA1_I2C1SCK        ((unsigned long)0x03 << 2 )
#define GPIO_PA2_PA2            ((unsigned long)0x00 << 4 )
#define GPIO_PA2_UART0TX        ((unsigned long)0x01 << 4 )
#define GPIO_PA2_ADC7           ((unsigned long)0x02 << 4 )
#define GPIO_PA3_PA3            ((unsigned long)0x00 << 6 )
#define GPIO_PA3_UART0RX        ((unsigned long)0x01 << 6 )
#define GPIO_PA3_ADC6           ((unsigned long)0x02 << 6 )
#define GPIO_PA4_PA4            ((unsigned long)0x00 << 8 )
#define GPIO_PA4_I2SRX_CLK      ((unsigned long)0x01 << 8 )
#define GPIO_PA4_CAN2RX         ((unsigned long)0x02 << 8 )
#define GPIO_PA4_TIMCCP0        ((unsigned long)0x03 << 8 )
#define GPIO_PA5_PA5            ((unsigned long)0x00 << 10)
#define GPIO_PA5_I2SRX_WS       ((unsigned long)0x01 << 10)
#define GPIO_PA5_CAN2TX         ((unsigned long)0x02 << 10)
#define GPIO_PA5_TIMCCP1        ((unsigned long)0x03 << 10)
#define GPIO_PA6_PA6            ((unsigned long)0x00 << 12)
#define GPIO_PA6_I2SRX_SDA      ((unsigned long)0x01 << 12)
#define GPIO_PA6_SSEL1          ((unsigned long)0x02 << 12)
#define GPIO_PA6_TIM_MAT0       ((unsigned long)0x03 << 12)
#define GPIO_PA7_PA7            ((unsigned long)0x00 << 14)
#define GPIO_PA7_I2STX_CLK      ((unsigned long)0x01 << 14)
#define GPIO_PA7_SCK1           ((unsigned long)0x02 << 14)
#define GPIO_PA7_TIM_MAT1       ((unsigned long)0x03 << 14)
#define GPIO_PA8_PA8            ((unsigned long)0x00 << 16)
#define GPIO_PA8_I2STX_WS       ((unsigned long)0x01 << 16)
#define GPIO_PA8_MISO1          ((unsigned long)0x02 << 16)
#define GPIO_PA8_TIM_MAT2       ((unsigned long)0x03 << 16)
#define GPIO_PA9_PA9            ((unsigned long)0x00 << 18)
#define GPIO_PA9_I2STX_SDA      ((unsigned long)0x01 << 18)
#define GPIO_PA9_MOSI1          ((unsigned long)0x02 << 18)
#define GPIO_PA9_TIM_MAT3       ((unsigned long)0x03 << 18)
#define GPIO_PA10_PA10          ((unsigned long)0x00 << 20)
#define GPIO_PA10_UART2TX       ((unsigned long)0x01 << 20)
#define GPIO_PA10_I2C2SDA       ((unsigned long)0x02 << 20)
#define GPIO_PA10_TIM_MAT0      ((unsigned long)0x03 << 20)
#define GPIO_PA11_PA11          ((unsigned long)0x00 << 22)
#define GPIO_PA11_UART2RX       ((unsigned long)0x01 << 22)
#define GPIO_PA11_I2C2SCK       ((unsigned long)0x02 << 22)
#define GPIO_PA11_TIM_MAT1      ((unsigned long)0x03 << 22)
#define GPIO_PA15_PA15          ((unsigned long)0x00 << 30)
#define GPIO_PA15_UART1TX       ((unsigned long)0x01 << 30)
#define GPIO_PA15_SCK0          ((unsigned long)0x02 << 30)
#define GPIO_PA15_SPI0CLK       ((unsigned long)0x03 << 30)
#define GPIO_PA16_PA16          ((unsigned long)0x00 << 0 )
#define GPIO_PA16_UART1RX       ((unsigned long)0x01 << 0 )
#define GPIO_PA16_SSEL0         ((unsigned long)0x02 << 0 )
#define GPIO_PA16_SPI0CS        ((unsigned long)0x03 << 0 )
#define GPIO_PA17_PA17          ((unsigned long)0x00 << 2 )
#define GPIO_PA17_UART1CTS      ((unsigned long)0x01 << 2 )
#define GPIO_PA17_MISO0         ((unsigned long)0x02 << 2 )
#define GPIO_PA17_SPI0MISO      ((unsigned long)0x03 << 2 )
#define GPIO_PA18_PA18          ((unsigned long)0x00 << 4 )
#define GPIO_PA18_UART1DCD      ((unsigned long)0x01 << 4 )
#define GPIO_PA18_MOSI0         ((unsigned long)0x02 << 4 )
#define GPIO_PA18_SPI0MOSI      ((unsigned long)0x03 << 4 )
#define GPIO_PA19_PA19          ((unsigned long)0x00 << 6 )
#define GPIO_PA19_UART1DSR      ((unsigned long)0x01 << 6 )
#define GPIO_PA19_I2C1SDA       ((unsigned long)0x03 << 6 )
#define GPIO_PA20_PA20          ((unsigned long)0x00 << 8 )
#define GPIO_PA20_UART1DTR      ((unsigned long)0x01 << 8 )
#define GPIO_PA20_I2C1SCK       ((unsigned long)0x03 << 8 )
#define GPIO_PA21_PA21          ((unsigned long)0x00 << 10)
#define GPIO_PA21_UART1RI       ((unsigned long)0x01 << 10)
#define GPIO_PA21_CAN1RX        ((unsigned long)0x03 << 10)
#define GPIO_PA22_PA22          ((unsigned long)0x00 << 12)
#define GPIO_PA22_UART1RTS      ((unsigned long)0x01 << 12)
#define GPIO_PA22_CAN1TX        ((unsigned long)0x03 << 12)
#define GPIO_PA23_PA23          ((unsigned long)0x00 << 14)
#define GPIO_PA23_ADC0          ((unsigned long)0x01 << 14)
#define GPIO_PA23_I2SRX_CLK     ((unsigned long)0x02 << 14)
#define GPIO_PA23_TIMCCP0       ((unsigned long)0x03 << 14)
#define GPIO_PA24_PA24          ((unsigned long)0x00 << 16)
#define GPIO_PA24_ADC1          ((unsigned long)0x01 << 16)
#define GPIO_PA24_I2SRX_WS      ((unsigned long)0x02 << 16)
#define GPIO_PA24_TIMCCP1       ((unsigned long)0x03 << 16)
#define GPIO_PA25_PA25          ((unsigned long)0x00 << 18)
#define GPIO_PA25_ADC2          ((unsigned long)0x01 << 18)
#define GPIO_PA25_I2SRX_SDA     ((unsigned long)0x02 << 18)
#define GPIO_PA25_UART3TX       ((unsigned long)0x03 << 18)
#define GPIO_PA26_PA26          ((unsigned long)0x00 << 20)
#define GPIO_PA26_ADC3          ((unsigned long)0x01 << 20)
#define GPIO_PA26_DACOUT1       ((unsigned long)0x02 << 20)
#define GPIO_PA26_UART3RX       ((unsigned long)0x03 << 20)
#define GPIO_PA27_PA27          ((unsigned long)0x00 << 22)
#define GPIO_PA27_I2C0SDA       ((unsigned long)0x01 << 22)
#define GPIO_PA27_USB_SDA       ((unsigned long)0x02 << 22)
#define GPIO_PA28_PA28          ((unsigned long)0x00 << 24)
#define GPIO_PA28_I2C0SCK       ((unsigned long)0x01 << 24)
#define GPIO_PA28_USB_SCL       ((unsigned long)0x02 << 24)
#define GPIO_PA29_PA29          ((unsigned long)0x00 << 26)
#define GPIO_PA29_USB_D_P       ((unsigned long)0x01 << 26)
#define GPIO_PA30_PA30          ((unsigned long)0x00 << 28)
#define GPIO_PA30_USB_D_N       ((unsigned long)0x01 << 28)
#define GPIO_PB0_PB0            ((unsigned long)0x00 << 0 )
#define GPIO_PB0_ETH_TXD0       ((unsigned long)0x01 << 0 )
#define GPIO_PB1_PB1            ((unsigned long)0x00 << 2 )
#define GPIO_PB1_ETH_TXD1       ((unsigned long)0x01 << 2 )
#define GPIO_PB4_PB4            ((unsigned long)0x00 << 8 )
#define GPIO_PB4_ETH_TX_EN      ((unsigned long)0x01 << 8 )
#define GPIO_PB8_PB8            ((unsigned long)0x00 << 16)
#define GPIO_PB8_ETH_CRS        ((unsigned long)0x01 << 16)
#define GPIO_PB9_PB9            ((unsigned long)0x00 << 18)
#define GPIO_PB9_ETH_RXD0       ((unsigned long)0x01 << 18)
#define GPIO_PB10_PB10          ((unsigned long)0x00 << 20)
#define GPIO_PB10_ETH_RXD1      ((unsigned long)0x01 << 20)
#define GPIO_PB14_PB14          ((unsigned long)0x00 << 28)
#define GPIO_PB14_ETH_RX_ER     ((unsigned long)0x01 << 28)
#define GPIO_PB15_PB15          ((unsigned long)0x00 << 30)
#define GPIO_PB15_ETH_REF_CLK   ((unsigned long)0x01 << 30)
#define GPIO_PB16_PB16          ((unsigned long)0x00 << 0 )
#define GPIO_PB16_ENET_MDC      ((unsigned long)0x01 << 0 )
#define GPIO_PB17_PB17          ((unsigned long)0x00 << 2 )
#define GPIO_PB17_ENET_MDIO     ((unsigned long)0x01 << 2 )
#define GPIO_PB18_PB18          ((unsigned long)0x00 << 4 )
#define GPIO_PB18_USB_UP_LED    ((unsigned long)0x01 << 4 )
#define GPIO_PB18_PWM1          ((unsigned long)0x02 << 4 )
#define GPIO_PB18_TIMCCP0       ((unsigned long)0x03 << 4 )
#define GPIO_PB19_PB19          ((unsigned long)0x00 << 6 )
#define GPIO_PB19_MCOA0         ((unsigned long)0x01 << 6 )
#define GPIO_PB19_USB_PPWR      ((unsigned long)0x02 << 6 )
#define GPIO_PB19_TIMCCP1       ((unsigned long)0x03 << 6 )
#define GPIO_PB20_PB20          ((unsigned long)0x00 << 8 )
#define GPIO_PB20_MCI0          ((unsigned long)0x01 << 8 )
#define GPIO_PB20_PWM2          ((unsigned long)0x02 << 8 )
#define GPIO_PB20_SCK0          ((unsigned long)0x03 << 8 )
#define GPIO_PB21_PB21          ((unsigned long)0x00 << 10)
#define GPIO_PB21_MCABORT       ((unsigned long)0x01 << 10)
#define GPIO_PB21_PWM3          ((unsigned long)0x02 << 10)
#define GPIO_PB21_SSEL0         ((unsigned long)0x03 << 10)
#define GPIO_PB22_PB22          ((unsigned long)0x00 << 12)
#define GPIO_PB22_MCOB0         ((unsigned long)0x01 << 12)
#define GPIO_PB22_USB_PWRD      ((unsigned long)0x02 << 12)
#define GPIO_PB22_TIM_MAT0      ((unsigned long)0x03 << 12)
#define GPIO_PB23_PB23          ((unsigned long)0x00 << 14)
#define GPIO_PB23_MCI1          ((unsigned long)0x01 << 14)
#define GPIO_PB23_PWM4          ((unsigned long)0x02 << 14)
#define GPIO_PB23_MISO0         ((unsigned long)0x03 << 14)
#define GPIO_PB24_PB24          ((unsigned long)0x00 << 16)
#define GPIO_PB24_MCI2          ((unsigned long)0x01 << 16)
#define GPIO_PB24_PWM5          ((unsigned long)0x02 << 16)
#define GPIO_PB24_MOSI0         ((unsigned long)0x03 << 16)
#define GPIO_PB25_PB25          ((unsigned long)0x00 << 18)
#define GPIO_PB25_MCOA1         ((unsigned long)0x01 << 18)
#define GPIO_PB25_TIM_MAT1      ((unsigned long)0x03 << 18)
#define GPIO_PB26_PB26          ((unsigned long)0x00 << 20)
#define GPIO_PB26_MCOB1         ((unsigned long)0x01 << 20)
#define GPIO_PB26_PWM6          ((unsigned long)0x02 << 20)
#define GPIO_PB26_TIMCCP0       ((unsigned long)0x03 << 20)
#define GPIO_PB27_PB27          ((unsigned long)0x00 << 22)
#define GPIO_PB27_CLKOUT        ((unsigned long)0x01 << 22)
#define GPIO_PB27_USB_OVRCR     ((unsigned long)0x02 << 22)
#define GPIO_PB27_TIMCCP1       ((unsigned long)0x03 << 22)
#define GPIO_PB28_PB28          ((unsigned long)0x00 << 24)
#define GPIO_PB28_MCOA2         ((unsigned long)0x01 << 24)
#define GPIO_PB28_PWM_CAP_CH0   ((unsigned long)0x02 << 24)
#define GPIO_PB28_TIM_MAT0      ((unsigned long)0x03 << 24)
#define GPIO_PB29_PB29          ((unsigned long)0x00 << 26)
#define GPIO_PB29_MCOB2         ((unsigned long)0x01 << 26)
#define GPIO_PB29_PWM_CAP_CH1   ((unsigned long)0x02 << 26)
#define GPIO_PB29_TIM_MAT1      ((unsigned long)0x03 << 26)
#define GPIO_PB30_PB30          ((unsigned long)0x00 << 28)
#define GPIO_PB30_VBUS          ((unsigned long)0x02 << 28)
#define GPIO_PB30_ADC4          ((unsigned long)0x03 << 28)
#define GPIO_PB31_PB31          ((unsigned long)0x00 << 30)
#define GPIO_PB31_SCK1          ((unsigned long)0x02 << 30)
#define GPIO_PB31_ADC5          ((unsigned long)0x03 << 30)
#define GPIO_PC0_PC0            ((unsigned long)0x00 << 0 )
#define GPIO_PC0_PWM1           ((unsigned long)0x01 << 0 )
#define GPIO_PC0_UART1TX        ((unsigned long)0x02 << 0 )
#define GPIO_PC1_PC1            ((unsigned long)0x00 << 2 )
#define GPIO_PC1_PWM2           ((unsigned long)0x01 << 2 )
#define GPIO_PC1_UART1RX        ((unsigned long)0x02 << 2 )
#define GPIO_PC2_PC2            ((unsigned long)0x00 << 4 )
#define GPIO_PC2_PWM3           ((unsigned long)0x01 << 4 )
#define GPIO_PC2_UART1CTS       ((unsigned long)0x02 << 4 )
#define GPIO_PC3_PC3            ((unsigned long)0x00 << 6 )
#define GPIO_PC3_PWM4           ((unsigned long)0x01 << 6 )
#define GPIO_PC3_UART1DCD       ((unsigned long)0x02 << 6 )
#define GPIO_PC4_PC4            ((unsigned long)0x00 << 8 )
#define GPIO_PC4_PWM5           ((unsigned long)0x01 << 8 )
#define GPIO_PC4_UART1DSR       ((unsigned long)0x02 << 8 )
#define GPIO_PC5_PC5            ((unsigned long)0x00 << 10)
#define GPIO_PC5_PWM6           ((unsigned long)0x01 << 10)
#define GPIO_PC5_UART1DTR       ((unsigned long)0x02 << 10)
#define GPIO_PC6_PC6            ((unsigned long)0x00 << 12)
#define GPIO_PC6_PWM_CAP_CH0    ((unsigned long)0x01 << 12)
#define GPIO_PC6_UART1RI        ((unsigned long)0x02 << 12)
#define GPIO_PC7_PC7            ((unsigned long)0x00 << 14)
#define GPIO_PC7_CAN2RX         ((unsigned long)0x01 << 14)
#define GPIO_PC7_UART1RTS       ((unsigned long)0x02 << 14)
#define GPIO_PC8_PC8            ((unsigned long)0x00 << 16)
#define GPIO_PC8_CAN2TX         ((unsigned long)0x01 << 16)
#define GPIO_PC8_UART2TX        ((unsigned long)0x02 << 16)
#define GPIO_PC8_ENET_MDC       ((unsigned long)0x03 << 16)
#define GPIO_PC9_PC9            ((unsigned long)0x00 << 18)
#define GPIO_PC9_USB_CONNECT    ((unsigned long)0x01 << 18)
#define GPIO_PC9_UART2RX        ((unsigned long)0x02 << 18)
#define GPIO_PC9_ENET_MDIO      ((unsigned long)0x03 << 18)
#define GPIO_PC10_PC10          ((unsigned long)0x00 << 20)
#define GPIO_PC10_EINT0         ((unsigned long)0x01 << 20)
#define GPIO_PC10_NMI           ((unsigned long)0x02 << 20)
#define GPIO_PC11_PC11          ((unsigned long)0x00 << 22)
#define GPIO_PC11_EINT1         ((unsigned long)0x01 << 22)
#define GPIO_PC11_I2STX_CLK     ((unsigned long)0x03 << 22)
#define GPIO_PC12_PC12          ((unsigned long)0x00 << 24)
#define GPIO_PC12_EINT2         ((unsigned long)0x01 << 24)
#define GPIO_PC12_I2STX_WS      ((unsigned long)0x03 << 24)
#define GPIO_PC13_PC13          ((unsigned long)0x00 << 26)
#define GPIO_PC13_EINT3         ((unsigned long)0x01 << 26)
#define GPIO_PC13_I2STX_SDA     ((unsigned long)0x03 << 26)
#define GPIO_PD25_PD25          ((unsigned long)0x00 << 18)
#define GPIO_PD25_TIM_MAT0      ((unsigned long)0x02 << 18)
#define GPIO_PD25_PWM2          ((unsigned long)0x03 << 18)
#define GPIO_PD26_PD26          ((unsigned long)0x00 << 20)
#define GPIO_PD26_STCLK         ((unsigned long)0x01 << 20)
#define GPIO_PD26_TIM_MAT1      ((unsigned long)0x02 << 20)
#define GPIO_PD26_PWM3          ((unsigned long)0x03 << 20)
#define GPIO_PE28_PE28          ((unsigned long)0x00 << 24)
#define GPIO_PE28_RX_MCLK       ((unsigned long)0x01 << 24)
#define GPIO_PE28_TIM_MAT0      ((unsigned long)0x02 << 24)
#define GPIO_PE28_UART3TX       ((unsigned long)0x03 << 24)
#define GPIO_PE29_PE29          ((unsigned long)0x00 << 26)
#define GPIO_PE29_TX_MCLK       ((unsigned long)0x01 << 26)
#define GPIO_PE29_TIM_MAT1      ((unsigned long)0x02 << 26)
#define GPIO_PE29_UART3RX       ((unsigned long)0x03 << 26)
//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup  LPC17xx_GPIO_Cfg  LPC17xx GPIO Configure parameters.
//! \brief
//! @{
//
//*****************************************************************************

//! Disable Open-Drain function.
#define PIN_MODE_OD_DIS         (BIT_32_6                       )

//! Enable Open-Drain function.
#define PIN_MODE_OD_EN          (BIT_32_6 | BIT_32_5            )

//! Enable pull-up function.
#define PIN_MODE_PULL_UP        (BIT_32_4                       )

//! Enable repeater function.
#define PIN_MODE_REPEATER       (BIT_32_4 | BIT_32_2            )

//! No pull-up, No pull-down.
#define PIN_MODE_NONE           (BIT_32_4 | BIT_32_3            )

//! Enable pull-down function.
#define PIN_MODE_PULL_DOWN      (BIT_32_4 | BIT_32_3 | BIT_32_2 )

//! Input mode.
#define PIN_MODE_INPUT          (BIT_32_1                       )

//! Output mode.
#define PIN_MODE_OUTPUT         (BIT_32_1 | BIT_32_0            )

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup  LPC17xx_GPIO_Int_Types  LPC17xx GPIO Interrupt types
//! \brief
//! @{
//
//*****************************************************************************

//! GPIO Interrupt Type: Rising edge
#define INT_TYPE_RISING         BIT_32_0

//! GPIO Interrupt Type: Falling edge
#define INT_TYPE_FALLING        BIT_32_1

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LPC17xx_GPIO_Exported_APIs LPC17xx GPIO API
//! \brief      LPC17xx GPIO APIs Reference.
//! @{
//
//*****************************************************************************

extern unsigned long GPIOPinToPeripheralId(unsigned long ulPort, unsigned long ulPin);
extern unsigned long GPIOPinToPort(unsigned long ulPort, unsigned long ulPin);
extern unsigned long GPIOPinToPin(unsigned long ulPort, unsigned long ulPin);

extern void          GPIOPinFunCfg(unsigned long ulPort, unsigned long ulPin, unsigned long ulCfg);
extern void          GPIOPinModeCfg(unsigned long ulPort, unsigned long ulPin, unsigned long ulCfg);
extern void          GPIOPinSet(unsigned long ulPort, unsigned long ulPins);
extern void          GPIOPinClr(unsigned long ulPort, unsigned long ulPins);
extern void          GPIOPinWrite(unsigned long ulPort, unsigned long ulPins, unsigned long ulVal);
extern unsigned long GPIOPinRead(unsigned long ulPort, unsigned long ulPin);
extern unsigned long GPIOPortRead(unsigned long ulPort);
extern void          GPIOPortWrite(unsigned long ulPort, unsigned long ulVal);
extern void          GPIOPinIntCfg(unsigned long ulPort, unsigned long ulPin, unsigned long ulCfg);
extern unsigned long GPIOPinIntFlagGet(unsigned long ulPort, unsigned long ulPin);
extern void          GPIOPinIntFlagClear(unsigned long ulPort, unsigned long ulPin);
extern void          GPIOPinIntEnable(unsigned long ulPort, unsigned long ulPin);
extern void          GPIOPinIntDisable(unsigned long ulPort, unsigned long ulPin);

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __XGPIO_H__

