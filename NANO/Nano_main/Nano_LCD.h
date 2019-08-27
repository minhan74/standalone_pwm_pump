/*------------------------------------------------------------*-
  LCD - header file
  ARDUINO NANO
  (c) Pham Thanh Tam - An Minh Dao 2019
  version 1.00 - 26/07/2019
---------------------------------------------------------------
 *  PUBLIC FUNCTIONS CONTAIN:
 * 
 *  PRIVATE FUNCTIONS CONTAIN:
 * 
 *  CAUTION: must include config.h
--------------------------------------------------------------*/
#ifndef __NANO_LCD_H
#define __NANO_LCD_H
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include "Nano_UART.h"
//#include "config.h"

// ------ Public constants ------------------------------------

// ------ Public function prototypes --------------------------
/**
Start the LCD
*/
void LCD_init();
/**
LCD display function
*/
void LCD_display();
/**
Change Value temp and flow to display on the LCD
*/
void changeVal(uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t);
/**
Change Set Value: PID parameters, temp and flow to display on the LCD
*/
void changeSetVal(float*,uint16_t*,uint16_t*);
// ------ Public variable -------------------------------------

#endif //_NANO_LCD_H
