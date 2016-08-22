/**
 * @file SlaveSelects.h
 *
 * @brief Here are all of the SPI line constants such as
 * select lines and direction registers that can be called easily
 * by the user instead of looking up the pins manually.
 *
 * @author cwrus
 * @date Jun 28, 2012
 *
 * @author Eric Willcox
 * @date July 9, 2014
 */

#ifndef SLAVESELECTS_H_
#define SLAVESELECTS_H_

//We need ports.h for using all of the structs
#include "ports.h"

/**
 * @brief  SPI MISO
 */
#define SPI_MISO    PORTBbits._P6
/**
 * @brief  SPI MISO
 */
#define SPI_MISO_DDR  DDRBbits._P6

/**
 * @brief  SPI MOSI
 */
#define SPI_MOSI    PORTBbits._P5
/**
 * @brief  SPI MOSI
 */
#define SPI_MOSI_DDR  DDRBbits._P5

/**
 * @brief  SPI Clock
 */
#define SPI_SCK     PORTBbits._P7
/**
 * @brief  SPI Clock
 */
#define SPI_SCK_DDR   DDRBbits._P7
/**
 * @brief SPI master SS
 */
#define SPI_MASTER_SS DDRBbits._P4
/**
 * @brief  SPI Slave Select Encoder 0
 */
#define ENCODER_SS_0   PORTCbits._P5
/**
 * @brief  SPI Slave Select Encoder 1
 */
#define ENCODER_SS_1   PORTCbits._P4
/**
 * @brief  SPI Slave Select Encoder 2
 */
#define ENCODER_SS_2   PORTCbits._P3
/**
 * @brief  SPI Slave Select Encoder 3
 */
#define ENCODER_SS_3   PORTCbits._P2

/**
 * @brief  SPI Slave Select DAC 1
 */
#define DAC_SS       PORTDbits._P4
/**
 * @brief  SPI Slave Select DAC 2
 */
#define AUX_DAC_SS     PORTCbits._P6

/**
 * @brief  SPI Slave Select Encoder 0
 */
#define ENCODER_SS_0_ddr DDRCbits._P5
/**
 * @brief  SPI Slave Select Encoder 1
 */
#define ENCODER_SS_1_ddr DDRCbits._P4
/**
 * @brief  SPI Slave Select Encoder 2
 */
#define ENCODER_SS_2_ddr DDRCbits._P3
/**
 * @brief  SPI Slave Select Encoder 3
 */
#define ENCODER_SS_3_ddr DDRCbits._P2

/**
 * @brief  SPI Slave Select DAC 1
 */
#define DAC_SS_ddr     DDRDbits._P4
/**
 * @brief  SPI Slave Select DAC 2
 */
#define AUX_DAC_SS_ddr   DDRCbits._P6
/**
 * @brief  SPI Slave Select Unused
 */
#define SPARE_SS_ddr   DDRCbits._P0

/**
 * @brief  Interrupt line for all encoders
 */
#define ENCODER_IRQ   PORTBbitd._P2
/**
 * @brief  Interrupt line for all encoders
 */
#define ENCODER_IRQ_ddr DDRBbitd._P2


#endif /* SLAVESELECTS_H_ */
