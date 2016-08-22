/**
 * @file pot.h
 *
 * @brief The header file and function prototypes for the potentiometers.
 * @details  Use these functions to read the values from the pots.
 * @author Eric Willcox
 * @date August 17 2013
 */

#ifndef POT_H_
#define POT_H_

/** 
 * @brief Find the angle of the given potentiometer.
 * @param  pot The pot to check.
 * @return angle Angle of the potentiometer.
 *
 * @todo Calculate the angle using the ADC reading.
 */
int potAngle(int pot);

/** 
 * @brief Find the voltage value of the given potentiometer.
 * @param  pot The pot to get the value of.
 * @return volts Voltage of  potentiometer.
 *
 * @todo Convert the ADC value into a voltage in mV (so no floats needed).
 */
int potVolts(int pot);

#endif /* PERIPH_H_ */
