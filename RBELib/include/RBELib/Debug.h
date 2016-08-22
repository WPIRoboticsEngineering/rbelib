/**
 * @file Debug.h
 *
 * @brief Allows for the use of printf() on the 3001 board.
 * Simply rebinds stdout to the UART.
 *
 * @author Eric Willcox
 * @date July 9, 2014
 */
#ifndef DEBUG_H_
#define DEBUG_H_

/**
 * @brief Calls the students function 'putCharDebug()' to output the stream to.
 * You should not call this function directly, instead use the standard function printf().
 *
 * @param var Character to output
 * @param *stream Place to put the character (stdout)
 */
int printfRBE(char var, FILE *stream);

/**
 * @brief Rebinds stdout to call printfRBE() and initializes communication with
 * the coprocessor.
 * This function should be called once at the start of your code once
 * you have putCharDebug() written in Lab 1.
 * If you do not call this, printf() and SetServo() will not work.
 */
void initRBELib();

#endif /* DEBUG_H_ */
