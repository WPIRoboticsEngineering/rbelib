/**
 * @file SetServo.h
 *
 * @brief This file allows for using the SerSevo function to move the conveyor and gripper.
 *
 * @author cwrus
 * @date Jun 28, 2012
 * 
 * @author Eric Willcox
 * @date July 9, 2014
 */

#ifndef SETSERVO_H_
#define SETSERVO_H_

#define CLK 18432000


/**
 * @brief Set a servo to a desired value.
 * @param Pin Pin number.
 * @param Value Value to set the pin to.
 */
void setServo(int Pin, int Value);

/**
 * @brief Used to initialize UART0 for communication with the coprocessor. It should never be called manually.
 * 
 * @param baudrate Baud rate of the communication line in bps.
 */
void initAltCom(unsigned long baudrate);

/**
 * @brief Used to put a char on UART0.  It should never be called manually and is used by printf().
 *
 * @param byteToSend Character to send
 */
void setCharDebug(char byteToSend);

/**
 * @brief String to send to the coprocessor via UART0.
 * @param *str String to send.
 */
void coPrintf(char *str);


#endif /* SETSERVO_H_ */
