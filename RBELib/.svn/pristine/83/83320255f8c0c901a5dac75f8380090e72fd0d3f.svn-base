/**
 * @file ports.h
 *
 * @brief Controls ports A - D to be able to set direction,
 * read a value and set a value for any pins desired.
 * 
 * @details All functions here can take in a variable number of pins
 * to set/read from.  The way this is accomplished in C is by using the
 * functions provided by stdarg.h and is the way that printf() works
 * in the standard library.
 *
 * While an array could be used just as well, a variable number of
 * arguments is used to give exposure to variable arguments.
 *
 * An example of how to call a function with variable arguments can look
 * like this for calling setPinsDir().
 *
 * @code setPinsDir('A', INPUT, 2, 0, 5) @endcode
 *
 * which sets 2 pins on Port A as inputs: 0 and 5.
 *
 * An example has been created on the RBE wiki and can be found
 * <a href="http://wiki.wpi.edu/robotics/Programming_Background#Taking_in_a_Variable_Number_of_Arguments">
 * here.</a>
 *
 * @author Eric Willcox
 * @date July 18, 2014
 */

#ifndef PORTS_H_
#define PORTS_H_

/**
 * @brief Sets the direction (Input/Output) of the specified pins.
 *
 * @param port Port to set (A/B/C/D).
 * @param dir The pin on PORTA to set the direction of.
 * @param numPins The number of pins that you are setting the
 * direction of.
 * @param ... Pins one after another
 *
 * @todo Create a way to set a port's pins to inputs or outputs.
 */
void setPinsDir(char port, int dir, char numPins, ...);

/**
 * @brief Gets the value on the specified pins of a port.
 *
 * @param port Port to read (A/B/C/D).
 * @param numPins The number of pins that you are reading.
 * @param ... The pins one after another.
 *
 * @return value The value of the specified pins on the port.
 *
 * @todo Create a way to read all given pins on a port.
 */
unsigned char getPinsVal(char port, int numPins, ...);

/**
 * @brief Sets the value on the specified pins of a port.
 *
 * @param port Port to set (A/B/C/D).
 * @param numPins The number of pins that you are setting.
 * @param val The value (high/low) to set the pin to.
 * @param ... The pins one after another.
 *
 * @todo Create a way to set all given pins on a port.
 */
void setPinsVal(char port, int val, int numPins, ...);

#endif /* PORTS_H_ */
