/*
 * timer.c
 *
 *  Created on: Jul 14, 2014
 *      Author: ewillcox
 */

#include "RBELib/RBELib.h"

void initTimer(int timer, int mode, unsigned int comp){
  //Bits 7 - 0: Normal mode of operation
  TCCR0A = 0x00;

  //Bits 7 - 4: Reserved & always 0 bits
  //Bit 3: Normal mode
  //Bit 2 - 0: Prescaler of 8
  TCCR0B = 0x02; //More normal mode

  //Bits 7 - 3: Reserved
  //Bit 2 - 1: Disable compare A & B
  //Bit 0: Overflow compare enable
  TIMSK0 = 0x01; //enables overflow interrupt
}

