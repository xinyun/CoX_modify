
#include "gpio.h"



//! Auxiliary function.
#define GPIOSPinConfigure(ePeripheralPin, eShortPin)                          \
        GPIOPinFunCfg(G##eShortPin, GPIO_##eShortPin##_##ePeripheralPin)

//*****************************************************************************
//
//! \addtogroup xGPIO_GP_Short_Pin xGPIO General Purpose Short Pin
//! @{
//
//*****************************************************************************

//! PortA
//! For LPC17xx mcu, Port A is equal to Port 0
#define GPA0                    GPIOA_BASE, GPIO_PIN_0
#define GPA1                    GPIOA_BASE, GPIO_PIN_1
#define GPA2                    GPIOA_BASE, GPIO_PIN_2
#define GPA3                    GPIOA_BASE, GPIO_PIN_3
#define GPA4                    GPIOA_BASE, GPIO_PIN_4
#define GPA5                    GPIOA_BASE, GPIO_PIN_5
#define GPA6                    GPIOA_BASE, GPIO_PIN_6
#define GPA7                    GPIOA_BASE, GPIO_PIN_7
#define GPA8                    GPIOA_BASE, GPIO_PIN_8
#define GPA9                    GPIOA_BASE, GPIO_PIN_9
#define GPA10                   GPIOA_BASE, GPIO_PIN_10
#define GPA11                   GPIOA_BASE, GPIO_PIN_11
#define GPA12                   GPIOA_BASE, GPIO_PIN_12
#define GPA13                   GPIOA_BASE, GPIO_PIN_13
#define GPA14                   GPIOA_BASE, GPIO_PIN_14
#define GPA15                   GPIOA_BASE, GPIO_PIN_15
#define GPA16                   GPIOA_BASE, GPIO_PIN_16
#define GPA17                   GPIOA_BASE, GPIO_PIN_17
#define GPA18                   GPIOA_BASE, GPIO_PIN_18
#define GPA19                   GPIOA_BASE, GPIO_PIN_19
#define GPA20                   GPIOA_BASE, GPIO_PIN_20
#define GPA21                   GPIOA_BASE, GPIO_PIN_21
#define GPA22                   GPIOA_BASE, GPIO_PIN_22
#define GPA23                   GPIOA_BASE, GPIO_PIN_23
#define GPA24                   GPIOA_BASE, GPIO_PIN_24
#define GPA25                   GPIOA_BASE, GPIO_PIN_25
#define GPA26                   GPIOA_BASE, GPIO_PIN_26
#define GPA27                   GPIOA_BASE, GPIO_PIN_27
#define GPA28                   GPIOA_BASE, GPIO_PIN_28
#define GPA29                   GPIOA_BASE, GPIO_PIN_29
#define GPA30                   GPIOA_BASE, GPIO_PIN_30
#define GPA31                   GPIOA_BASE, GPIO_PIN_31

//! PortB
//! For LPC17xx mcu, Port B is equal to Port 1
#define GPB0                    GPIOB_BASE, GPIO_PIN_0
#define GPB1                    GPIOB_BASE, GPIO_PIN_1
#define GPB2                    GPIOB_BASE, GPIO_PIN_2
#define GPB3                    GPIOB_BASE, GPIO_PIN_3
#define GPB4                    GPIOB_BASE, GPIO_PIN_4
#define GPB5                    GPIOB_BASE, GPIO_PIN_5
#define GPB6                    GPIOB_BASE, GPIO_PIN_6
#define GPB7                    GPIOB_BASE, GPIO_PIN_7
#define GPB8                    GPIOB_BASE, GPIO_PIN_8
#define GPB9                    GPIOB_BASE, GPIO_PIN_9
#define GPB10                   GPIOB_BASE, GPIO_PIN_10
#define GPB11                   GPIOB_BASE, GPIO_PIN_11
#define GPB12                   GPIOB_BASE, GPIO_PIN_12
#define GPB13                   GPIOB_BASE, GPIO_PIN_13
#define GPB14                   GPIOB_BASE, GPIO_PIN_14
#define GPB15                   GPIOB_BASE, GPIO_PIN_15
#define GPB16                   GPIOB_BASE, GPIO_PIN_16
#define GPB17                   GPIOB_BASE, GPIO_PIN_17
#define GPB18                   GPIOB_BASE, GPIO_PIN_18
#define GPB19                   GPIOB_BASE, GPIO_PIN_19
#define GPB20                   GPIOB_BASE, GPIO_PIN_20
#define GPB21                   GPIOB_BASE, GPIO_PIN_21
#define GPB22                   GPIOB_BASE, GPIO_PIN_22
#define GPB23                   GPIOB_BASE, GPIO_PIN_23
#define GPB24                   GPIOB_BASE, GPIO_PIN_24
#define GPB25                   GPIOB_BASE, GPIO_PIN_25
#define GPB26                   GPIOB_BASE, GPIO_PIN_26
#define GPB27                   GPIOB_BASE, GPIO_PIN_27
#define GPB28                   GPIOB_BASE, GPIO_PIN_28
#define GPB29                   GPIOB_BASE, GPIO_PIN_29
#define GPB30                   GPIOB_BASE, GPIO_PIN_30
#define GPB31                   GPIOB_BASE, GPIO_PIN_31

//! PortC
//! For LPC17xx mcu, Port C is equal to Port 2
#define GPC0                    GPIOC_BASE, GPIO_PIN_0
#define GPC1                    GPIOC_BASE, GPIO_PIN_1
#define GPC2                    GPIOC_BASE, GPIO_PIN_2
#define GPC3                    GPIOC_BASE, GPIO_PIN_3
#define GPC4                    GPIOC_BASE, GPIO_PIN_4
#define GPC5                    GPIOC_BASE, GPIO_PIN_5
#define GPC6                    GPIOC_BASE, GPIO_PIN_6
#define GPC7                    GPIOC_BASE, GPIO_PIN_7
#define GPC8                    GPIOC_BASE, GPIO_PIN_8
#define GPC9                    GPIOC_BASE, GPIO_PIN_9
#define GPC10                   GPIOC_BASE, GPIO_PIN_10
#define GPC11                   GPIOC_BASE, GPIO_PIN_11
#define GPC12                   GPIOC_BASE, GPIO_PIN_12
#define GPC13                   GPIOC_BASE, GPIO_PIN_13
#define GPC14                   GPIOC_BASE, GPIO_PIN_14
#define GPC15                   GPIOC_BASE, GPIO_PIN_15
#define GPC16                   GPIOC_BASE, GPIO_PIN_16
#define GPC17                   GPIOC_BASE, GPIO_PIN_17
#define GPC18                   GPIOC_BASE, GPIO_PIN_18
#define GPC19                   GPIOC_BASE, GPIO_PIN_19
#define GPC20                   GPIOC_BASE, GPIO_PIN_20
#define GPC21                   GPIOC_BASE, GPIO_PIN_21
#define GPC22                   GPIOC_BASE, GPIO_PIN_22
#define GPC23                   GPIOC_BASE, GPIO_PIN_23
#define GPC24                   GPIOC_BASE, GPIO_PIN_24
#define GPC25                   GPIOC_BASE, GPIO_PIN_25
#define GPC26                   GPIOC_BASE, GPIO_PIN_26
#define GPC27                   GPIOC_BASE, GPIO_PIN_27
#define GPC28                   GPIOC_BASE, GPIO_PIN_28
#define GPC29                   GPIOC_BASE, GPIO_PIN_29
#define GPC30                   GPIOC_BASE, GPIO_PIN_30
#define GPC31                   GPIOC_BASE, GPIO_PIN_31

//! PortD
//! For LPC17xx mcu, Port D is equal to Port 3
#define GPD0                    GPIOD_BASE, GPIO_PIN_0
#define GPD1                    GPIOD_BASE, GPIO_PIN_1
#define GPD2                    GPIOD_BASE, GPIO_PIN_2
#define GPD3                    GPIOD_BASE, GPIO_PIN_3
#define GPD4                    GPIOD_BASE, GPIO_PIN_4
#define GPD5                    GPIOD_BASE, GPIO_PIN_5
#define GPD6                    GPIOD_BASE, GPIO_PIN_6
#define GPD7                    GPIOD_BASE, GPIO_PIN_7
#define GPD8                    GPIOD_BASE, GPIO_PIN_8
#define GPD9                    GPIOD_BASE, GPIO_PIN_9
#define GPD10                   GPIOD_BASE, GPIO_PIN_10
#define GPD11                   GPIOD_BASE, GPIO_PIN_11
#define GPD12                   GPIOD_BASE, GPIO_PIN_12
#define GPD13                   GPIOD_BASE, GPIO_PIN_13
#define GPD14                   GPIOD_BASE, GPIO_PIN_14
#define GPD15                   GPIOD_BASE, GPIO_PIN_15
#define GPD16                   GPIOD_BASE, GPIO_PIN_16
#define GPD17                   GPIOD_BASE, GPIO_PIN_17
#define GPD18                   GPIOD_BASE, GPIO_PIN_18
#define GPD19                   GPIOD_BASE, GPIO_PIN_19
#define GPD20                   GPIOD_BASE, GPIO_PIN_20
#define GPD21                   GPIOD_BASE, GPIO_PIN_21
#define GPD22                   GPIOD_BASE, GPIO_PIN_22
#define GPD23                   GPIOD_BASE, GPIO_PIN_23
#define GPD24                   GPIOD_BASE, GPIO_PIN_24
#define GPD25                   GPIOD_BASE, GPIO_PIN_25
#define GPD26                   GPIOD_BASE, GPIO_PIN_26
#define GPD27                   GPIOD_BASE, GPIO_PIN_27
#define GPD28                   GPIOD_BASE, GPIO_PIN_28
#define GPD29                   GPIOD_BASE, GPIO_PIN_29
#define GPD30                   GPIOD_BASE, GPIO_PIN_30
#define GPD31                   GPIOD_BASE, GPIO_PIN_31

//! PortE
//! For LPC17xx mcu, Port E is equal to Port 4
#define GPE0                    GPIOE_BASE, GPIO_PIN_0
#define GPE1                    GPIOE_BASE, GPIO_PIN_1
#define GPE2                    GPIOE_BASE, GPIO_PIN_2
#define GPE3                    GPIOE_BASE, GPIO_PIN_3
#define GPE4                    GPIOE_BASE, GPIO_PIN_4
#define GPE5                    GPIOE_BASE, GPIO_PIN_5
#define GPE6                    GPIOE_BASE, GPIO_PIN_6
#define GPE7                    GPIOE_BASE, GPIO_PIN_7
#define GPE8                    GPIOE_BASE, GPIO_PIN_8
#define GPE9                    GPIOE_BASE, GPIO_PIN_9
#define GPE10                   GPIOE_BASE, GPIO_PIN_10
#define GPE11                   GPIOE_BASE, GPIO_PIN_11
#define GPE12                   GPIOE_BASE, GPIO_PIN_12
#define GPE13                   GPIOE_BASE, GPIO_PIN_13
#define GPE14                   GPIOE_BASE, GPIO_PIN_14
#define GPE15                   GPIOE_BASE, GPIO_PIN_15
#define GPE16                   GPIOE_BASE, GPIO_PIN_16
#define GPE17                   GPIOE_BASE, GPIO_PIN_17
#define GPE18                   GPIOE_BASE, GPIO_PIN_18
#define GPE19                   GPIOE_BASE, GPIO_PIN_19
#define GPE20                   GPIOE_BASE, GPIO_PIN_20
#define GPE21                   GPIOE_BASE, GPIO_PIN_21
#define GPE22                   GPIOE_BASE, GPIO_PIN_22
#define GPE23                   GPIOE_BASE, GPIO_PIN_23
#define GPE24                   GPIOE_BASE, GPIO_PIN_24
#define GPE25                   GPIOE_BASE, GPIO_PIN_25
#define GPE26                   GPIOE_BASE, GPIO_PIN_26
#define GPE27                   GPIOE_BASE, GPIO_PIN_27
#define GPE28                   GPIOE_BASE, GPIO_PIN_28
#define GPE29                   GPIOE_BASE, GPIO_PIN_29
#define GPE30                   GPIOE_BASE, GPIO_PIN_30
#define GPE31                   GPIOE_BASE, GPIO_PIN_31

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

#define GPIO_DIR_MODE_OD        PIN_MODE_OD_EN

#define GPIO_DIR_MODE_QB        0
#define GPIO_DIR_MODE_HW        0
#define GPIO_DIR_MODE_IN        PIN_MODE_INPUT
#define GPIO_DIR_MODE_OUT       PIN_MODE_OUTPUT


#define GPIO_LOW_LEVEL          0
#define GPIO_HIGH_LEVEL         0
#define GPIO_RISING_EDGE        INT_TYPE_RISING
#define GPIO_FALLING_EDGE       INT_TYPE_FALLING
#define GPIO_BOTH_EDGES         (INT_TYPE_RISING | INT_TYPE_FALLING)
#define GPIO_BOTH_LEVEL         0

