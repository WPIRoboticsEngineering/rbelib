/**
 * @file SetServo.c
 *
 * @brief Sending setServo() command to the coprocessor.
 *
 * @author Eric Willcox
 * @date July 9, 2014
 */
#include "RBELib/RBELib.h"

/*
 * This function takes the student's input, and sends the correct command via serial to the coprocessor.
 *
 * The command must be one-line, contain delimiters, and value must always be 3 chars.
 * this is taken care of automatically, the user simply need call this function with the appropriate pin number and value.
 */
void setServo(int pin, int value) {
  //Send out the command to the coprocessor with formatting
  char command[20];
  sprintf(command, "Setservo(%d,%03d)\n\r", pin, value);
  coPrintf(command);
}

/*
 * This function will Initialize the UART0 for communication with the
 * CoProcessor. This function is called automatically by initRBELib().
 */
void initAltCom(unsigned long baudrate) {
  //Calculation given in table 16-1 on page 174
  //Sets the baudrate to whatever is desired
  UBRR0 = (CLK / (16 * baudrate)) - 1;

  //Control and status register B
  //Bits 7 - 5: Diables interrupts
  //Bit 4: enable Rx
  //Bit 3: enable Tx
  //Bit 2: Part of setting char size to 8 as per table 16-7 on 192
  //Bits 1 - 0: Not used with 8 bit mode
  UCSR0B = 0x18;

  //Control and status register C
  //Bits 7 - 6: Async mode
  //Bits 5 - 4: No parity
  //Bit 3: 1 stop bit
  //Bits 2 - 1: 8 data bits
  //Bit 0: Needs to be set to 0 when in async
  UCSR0C = 0x06;
}

/*
 * This is an alternate function needed to send data to UART1.
 * this should never be called by a student programmer.
 *
 * setCharDebug is identical to putCharDebug except it operates on
 * UART0 instead of 1.
 */
void setCharDebug(char byteToSend) {
  //Wait on UDRE0 bit
  while(!(UCSR0A & 0x20));
  //Fill the buffer
  UDR0 = byteToSend;
}

/*
 * This is an alternate print function to send a string to UART0
 * this should never be called by a student programmer.
 *
 * This works identical to the normal _NNL function, except it calls
 * the print statement to UART0 instead of 1.
 */
void coPrintf(char *str) {
  int x;
  x = 0;
  while (str[x] != '\0') {
    setCharDebug(str[x++]);
  }
}
