/**
 * @file index.h
 *
 *
 * @author Kevin Harrington
 * @date February 21, 2010
 * @brief This is the index file for Doxygen that is used to link
 * to everything.
 *
 * @author Eric Willcox
 * @date July 21, 2014
 */
 
 /**
 * @mainpage 3001 RBELib
 * @section welcome Welcome to RBE 3001
 * <br />
 * Here you will find all the documentation that you need for
 * working with RBELib which will contain function prototypes for
 * everything that you will need throughout the course.  While it is
 * possible to complete the course without using RBELib, using it will
 * make your code easier to maintain as you get closer to the final
 * project as well as follow proper coding practice as outlined in the
 * syllabus.
 * 
 * As you progress through the course, it is encouraged that you keep
 * your own version of RBELib with your SVN repository so that you can
 * add to things such as the To Do list and function descriptions as
 * you go.
 *
 * Please note that all page numbers are for the
 *
 * ATmega164P/V <br />
 * ATmega324P/V <br />
 * ATmega644P/V <br />
 *
 * datasheet.
 * <br /><br /> <br />
 * @section rbelib RBELib Files
 * <br />
 * @link ADC.h ADC @endlink <strong> Page 240 </strong>
 *
 * Here you will find everything relating to the Analog to Digital
 * Converter (ADC) that you should need.  You will have to make your
 * own corresponding functions for these prototypes.
 * <hr>
 * @link ports.h Ports @endlink <strong> Page 72 </strong>
 *
 * Ports contains the code for manipulating the ports on the
 * chip that you can access via the breakouts.  Keep in mind
 * that some of these are also connected to components on the board
 * such as the SPI line, if you have a problem using a pin and
 * on-board components, <b> CHECK THE DATASHEET AND BOARD LAYOUT  </b>
 * to make sure that you are not using the same pin for your buttons
 * that you are for the MOSI while using SPI or etc.
 *
 * If you are not using a port, do not leave wires connected.  After
 * lab 1, instead of running code off buttons (if you decide to do that)
 * instead use the UART to receive data and make a menu.
 * <hr>
 * @link Debug.h Printing @endlink
 *
 * This contains initRBELib() which must be called if you want to use
 * print statements with printf().  Whenever you have a problem and
 * can't find out what it is, first try to print out all of your
 * variables / registers and add delays so that you can see what is
 * happening.
 *
 * You need to have putCharDebug() written before you can use printf().
 * <hr>
 * @link Periph.h Peripherals @endlink <strong> See respective
 * datasheets for each peripheral.</strong>
 *
 * Here is where all code for peripheral devices such as the IR sensor
 * and accelerometer go.
 * <hr>
 * @link PID.h PID @endlink
 *
 * This is where all PID code goes for the calculation.
 * You will need to create your own calculation using the formulas
 * that you used in class and optimize them for running on an
 * embedded system.
 *
 * This also contains a struct you can use for defining your constants.
 * <hr>
 * @link RBELib.h RBELib Macros @endlink
 *
 * Here are all of the includes for RBELib as well as some of the macros
 * that you may find useful to use (such as INPUT/OUTPUT instead of 0/1).
 * <hr>
 * @link reg_structs.h Reg_Structs @endlink
 * @link SlaveSelects.h Slave Selects @endlink
 *
 * Reg_structs are a few useful shorthand notations that you can use in
 * your coding for accessing the pins on ports.  To go with this,
 * SlaveSelects defines some of the SS lines for when using SPI.
 * <hr>
 * @link SetServo.h Servo (Conveyer/Gripper) @endlink
 *
 * This is used for moving the conveyer belt and opening/closing the
 * gripper.  You do not need to create anything additional.
 * <hr>
 * @link SPI.h SPI @endlink <strong> Page 161 </strong>
 *
 * For initializing the SPI and and sending/receiving data through it.
 * <hr>
 * @link timer.h Timers @endlink <strong> Pages 93, 111, 139 </strong>
 *
 * Allows you to initialize any one of the timers and set their
 * comparative values for when they reset if using CTC mode.
 * <hr>
 * @link USARTDebug.h USART @endlink <strong> Page 171 </strong>
 *
 * This should be the very first thing that you work on and is the
 * prelab assignement.
 * This allows you to use serial printing within your code through
 * the use of the USART.
 *
 * Again, if you don't do putCharDebug() first, you can't use print
 * statements and <b>RBELib may not compile unless you at least create
 * a blank function.</b>
 * <hr>
 * @link pot.h Potentiometers @endlink
 *
 * These functions can be used to get the potentiometer values in degrees, voltage, or ADC counts.  You need to make your own functions for
 * the prototypes.
 * <hr>
 * @link motors.h Motors @endlink
 *
 * This contains declarations for controlling the motors on the arm.
 * You need to create a way to drive to an (X,Y) coordinate as well as
 * a way to drive to a desired angle for the links.
 * <hr>
 * @link pot.h Potentiometers @endlink
 *
 * These functions can be used to get the potentiometer values in degrees, voltage, or ADC counts.  You need to make your own functions for
 * the prototypes.
 * @section helpful Other Helpful Links
 * <br>
 * @link bug Bug List @endlink
 *
 * This is a place where any bugs in RBELib and your code should be documented.
 *<hr>
 * @link todo To Do @endlink
 *
 * Things that still need to be done in the RBELib and or your code.
 * <hr>
 * @link datatypes Data Types @endlink
 *
 * This lets you know the number of bytes in any given data type.
 */
