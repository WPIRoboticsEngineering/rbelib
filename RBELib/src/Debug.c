/**
 * @file Debug.c
 *
 * @brief Allows for printf() and setServo() capability.
 *
 * @author Eric Willcox
 * @date July 9, 2014
 */
#include "RBELib/RBELib.h"

static FILE RBEOut = FDEV_SETUP_STREAM(printfRBE, NULL, _FDEV_SETUP_WRITE);


int printfRBE(char var, FILE *stream) {
  //Calls the students written function purCharDebug() from Lab 1.
  putCharDebug(var);
  return 0;
}

void initRBELib(){
  //Rebind stdout to the UART
  stdout = &RBEOut;
  //Start coprocessor communication
  initAltCom(115200);
}
