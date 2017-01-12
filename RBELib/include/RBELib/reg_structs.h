/**
 * @file reg_structs.h
 *
 * @brief This file redefines some of the registers of the ATmega644p as structs
 * to allow for easy access to individual bit fields in each register. The general
 * syntax is \<register name>bits._\<bitfield name>.
 *
 * @author Peter Alley, Kevin Harrington
 * @date January 26, 2010
 *
 * @author Justin Barrett
 * @date August 23, 2011
 *
 * @author Eric Willcox
 * @date July 21, 2014
 */

#ifndef REG_STRUCTS_H_
#define REG_STRUCTS_H_

/**
 * @brief Generic byte register.
 *
 * Used for controlling the pins on the ports.
 */
typedef struct {
    unsigned _P0:1;
    unsigned _P1:1;
    unsigned _P2:1;
    unsigned _P3:1;
    unsigned _P4:1;
    unsigned _P5:1;
    unsigned _P6:1;
    unsigned _P7:1;
} __8bitreg_t;

/**
 * @brief SPI port.
 *
 * MOSI, MISO and CLK pins.
 */
typedef struct {
    unsigned    :5;
    unsigned _MOSI  :1;
    unsigned _MISO  :1;
    unsigned _SCK :1;
} __SPIPORTbits_t;

//Create the structs and say where they are in memory
extern volatile __8bitreg_t     PINAbits    __asm__ ("0x20") __attribute__((section("sfr")));
extern volatile __8bitreg_t     DDRAbits    __asm__ ("0x21") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PORTAbits   __asm__ ("0x22") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PINBbits    __asm__ ("0x23") __attribute__((section("sfr")));
extern volatile __8bitreg_t     DDRBbits    __asm__ ("0x24") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PORTBbits   __asm__ ("0x25") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PINCbits    __asm__ ("0x26") __attribute__((section("sfr")));
extern volatile __8bitreg_t     DDRCbits    __asm__ ("0x27") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PORTCbits   __asm__ ("0x28") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PINDbits    __asm__ ("0x29") __attribute__((section("sfr")));
extern volatile __8bitreg_t     DDRDbits    __asm__ ("0x2A") __attribute__((section("sfr")));
extern volatile __8bitreg_t     PORTDbits   __asm__ ("0x2B") __attribute__((section("sfr")));
extern volatile __SPIPORTbits_t SPIDDRbits  __asm__ ("0x24") __attribute__((section("sfr")));
extern volatile __SPIPORTbits_t SPIPORTbits __asm__ ("0x25") __attribute__((section("sfr")));

#endif /* REG_STRUCTS_H_ */
