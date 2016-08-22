/**
 * @file ADC.h
 *
 * @brief The header file and function prototypes for the ADC.
 * @details For single ended conversion, the ADC value an be found from the voltage using:
 * @f[ \frac {V_{in} * 1024}{V_{ref}} @f]
 * @author Kevin Harrington
 * @date February 11, 2010
 *
 * @author Justin Barrett
 * @date August 23, 2011
 *
 * @author Eric Willcox
 * @date August 19, 2013
 */

#ifndef ADC_H_
#define ADC_H_

/**
 * @brief Initializes the ADC and make one channel active.
 * You can choose to use either interrupts or polling to read
 * the desired channel.
 *
 * @param channel The ADC channel to initialize.
 *
 * @todo Create the corresponding function to initialize the ADC
 * using the channel parameter.
 */
void initADC(int channel);

/**
 * @brief Disables ADC functionality and clears any saved values (globals).
 *
 * @param channel  The ADC channel to disable.
 *
 * @todo Create the corresponding function to clear the last ADC
 * calculation register and disconnect the input to the ADC if desired.
 */
void clearADC(int channel);

/**
 * @brief Run a conversion on and get the analog value from one ADC
 * channel if using polling.
 *
 * @param channel  The ADC channel to run a conversion on.
 * @return adcVal The 8-10 bit value returned by the ADC
 * conversion.  The precision depends on your settings and
 * how much accuracy you desire.
 *
 * @todo Create the corresponding function to obtain the value of the
 * last calculation if you are using polling.
 */
unsigned short getADC(int channel);

/**
 * @brief Change the channel the ADC is sampling if using interrupts.
 *
 * @param channel  The ADC channel to switch to.
 *
 * @todo Create a way to switch ADC channels if you are using interrupts.
 */
void changeADC(int channel);

#endif /* ADC_H_ */
