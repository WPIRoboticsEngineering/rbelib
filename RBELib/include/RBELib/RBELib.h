/**
 * @file RBELib.h
 *
 * @brief This is a meta-header. It includes all the other header files
 * that are needed for RBELib as well as some macros.
 *
 * @author Kevin Harrington
 * @date February 21, 2010
 *
 * @author Justin Barrett
 * @date August 23, 2011
 *
 * @author Eric Willcox
 * @date August 19, 2013
 */

#ifndef RBELIB_H_
#define RBELIB_H_

//AVR + standard headers
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <avr/iom644p.h>
//Macros for I/O
#define OUTPUT	1
#define INPUT	  0
#define ON		  1
#define OFF		  0
#define HIGH    1
#define LOW     0
#define TRUE    1
#define FALSE   0

//Some datatypes which some people like to use
#define BOOL unsigned char
#define BYTE unsigned char
#define UINT32 unsigned long
#define INT32  long
#define UINT16 unsigned short int
#define WORD unsigned short int

//RBELib headers
#include "ADC.h"
#include "DAC.h"
#include "Debug.h"
#include "motors.h"
#include "USARTDebug.h"
#include "timer.h"
#include "Periph.h"
#include "pot.h"
#include "PID.h"
#include "reg_structs.h"
#include "ports.h"
#include "SPI.h"
#include "SetServo.h"
#include "SlaveSelects.h"


#endif /* RBELIB_H_ */
