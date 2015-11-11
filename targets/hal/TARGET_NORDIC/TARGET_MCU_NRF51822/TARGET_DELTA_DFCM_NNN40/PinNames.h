/* mbed Microcontroller Library
 * Copyright (c) 2015 Nordic Semiconductor
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

#define PORT_SHIFT  3

typedef enum {
    NC = (int)0xFFFFFFFF,
    p0  = 0,
    p1  = 1,
    p2  = 2,
    p3  = 3,
    p4  = 4,
    p5  = 5,
    p6  = 6,
    p7  = 7,
    p8  = 8,
    p9  = 9,
    p10 = 10,
    p11 = 11,
    p12 = 12,
    p13 = 13,
    p14 = 14,
    p15 = 15,
    p16 = 16,
    p17 = 17,
    p18 = 18,
    p19 = 19,
    p20 = 20,
    p21 = 21,
    p22 = 22,
    p23 = 23,
    p24 = 24,
    p25 = 25,
    p26 = 26,
    p27 = 27,
    p28 = 28,
    p29 = 29,
    p30 = 30,
    p31 = 31,

    LED1    = p4,
    LED2    = p5,
    LED3    = p6,
    LED4    = p13,

    BUTTON0 = p16,
    BUTTON1 = p17,

    RX_PIN_NUMBER  = p23,
    TX_PIN_NUMBER  = p25,

    // mBed interface Pins
    USBTX = TX_PIN_NUMBER,
    USBRX = RX_PIN_NUMBER,

    SPI_PSELMOSI0 = p24,
    SPI_PSELMISO0 = p29,
    SPI_PSELSS0   = p30,
    SPI_PSELSCK0  = p21,

    SPIS_PSELMOSI = p24,
    SPIS_PSELMISO = p29,
    SPIS_PSELSS   = p30,
    SPIS_PSELSCK  = p21,

    I2C_SDA0 = p22,
    I2C_SCL0 = p20,

    A0  = p26,
    A1  = p27,
    A2  = p4,
    A3  = p5,
    A4  = p6,

    SWIO = p19,
    VERF0 = p0,

    // SPI for controlling internal flash, don't use it.
    FLASH_SPIMOSI = 15,
    FLASH_SPIMISO = 9,
    FLASH_SPICS   = 28,
    FLASH_SPICLK  = 11,
    // Not connected
    CTS_PIN_NUMBER= NC,
    RTS_PIN_NUMBER= NC,
    SPI_PSELMOSI1 = NC,
    SPI_PSELMISO1 = NC,
    SPI_PSELSS1   = NC,
    SPI_PSELSCK1  = NC,
    A5  = NC
} PinName;

typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp = 3,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
