/**
 * @file SPI.h
 *
 * @brief The header file and function prototypes for the SPI.
 *
 * @bug While not a bug, some students have problems with some of the
 * SPI devices where their code will not work after they send a command.
 * To fix this, you may have to toggle the SS line once after sending your
 * command and then disable it once more.  This is because some of the
 * devices need the toggle to load the registers and then execute the command.
 *
 * @bug While not a bug, the DAC SS may need to be toggled at startup.
 * This is only something that matters during a soft reset but should
 * be done anyway during your initialization for SPI.
 *
 * @author kamiro87
 * @date August 31, 2010
 *
 * @author Justin Barrett
 * @date August 23, 2011 
 *
 * @author Eric Willcox
 * @date August 20, 2013
 */

#ifndef SPI_H_
#define SPI_H_

/**
 * @brief Initializes the SPI bus for communication with all of your
 * SPI devices.
 *
 * @todo Create the function that will allow you to initialize the SPI
 * in a mode compatible with all devices.  Do not forget to deassert all
 * of your SS lines!
 */
void initSPI();

/**
 * @brief Send and receive a byte out of the MOSI line.
 *
 * Please note that even if you do not want to receive any data back
 * from a SPI device, the SPI standard requires you still receive something
 * back even if it is junk data.
 *
 * @param data The byte to send down the SPI bus.
 * @return value The byte shifted in during transmit
 *
 * @todo Make a function that will send a byte of data through the SPI
 * and return whatever was sent back.
 */
unsigned char spiTransceive(BYTE data);

#endif /* SPI_H_ */
