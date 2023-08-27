/***************************************************************************************************
 * Includes
*/
#include "utility.h"
/**************************************************************************************************/

/***************************************************************************************************
 * FUNCTION NAME
 * util_setPins
 * -------------------------------------------------------------------------------------------------
 * DESCRIPTION
 * This function sets the pins of the arduino high and low according to the given parameter.
 * -------------------------------------------------------------------------------------------------
 * PARAMETERS
 * int pinConfig
 *     42-bit number:
 *     Bits:
 *     [0   ... 35]    [36 ... 41]
 *     [column values] [layer values]
 *     [anodes]        [cathodes]
 *     
 *     0 ==> pin will be set to low / GND
 *     1 ==> pin will be set to high / +5V
 * -------------------------------------------------------------------------------------------------
 * RETURN
 * void
***************************************************************************************************/
void util_setPins (int pinConfig)
{
    for(byte i = 0; i < PINCONFIG_BITSIZE; i++)
  {
    digitalWrite(pins[i], bitRead(pinConfig, i));
  }
}

/***************************************************************************************************
 * FUNCTION NAME
 * wait
 * -------------------------------------------------------------------------------------------------
 * DESCRIPTION
 * This function waites the given amount of time without shutting down the CPU.
 * -------------------------------------------------------------------------------------------------
 * PARAMETERS
 * unsigned long waitTime
 *     Time to wait in milliseconds.
 * -------------------------------------------------------------------------------------------------
 * RETURN
 * void
***************************************************************************************************/
void wait (unsigned long waitTime)
{
    unsigned long startTime = millis();
    while( (startTime - millis()) < waitTime)
    {
        /* wait */
    }
}

/***************************************************************************************************
 * FUNCTION NAME
 * util_buttonISR
 * -------------------------------------------------------------------------------------------------
 * DESCRIPTION
 * This function is run when the button interrupt in triggered.
 * -------------------------------------------------------------------------------------------------
 * ! WARNING !
 * THIS FUNCTION MUST NOT HAVE ARGUMENTS!
 * THIS FUNCTION HAS TO RETURN VOID!
 * ALL VARIABLES HANDLED BY THIS FUNCTION HAVE TO BE DECLARED AS VOLATILE!
 * THIS FUNCTION HAS TO BE KEPT AS SHORT AS POSSIBLE!
 * -------------------------------------------------------------------------------------------------
 * PARAMETERS
 * none
 * -------------------------------------------------------------------------------------------------
 * RETURN
 * void
***************************************************************************************************/
void util_buttonISR (void)
{

}