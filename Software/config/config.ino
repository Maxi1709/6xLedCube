/*##################################################################################################
DESCRIPTION
File for setting global makros and variables.
##################################################################################################*/

/*##################################################################################################
MAKROS
--------------------------------------------------------------------------------------------------*/
/*
The numbers of bits used in the pinConfig integer.
*/
#define _PINCONFIGBITSIZE_ 42
/*------------------------------------------------------------------------------------------------*/
/*
Time used as delay when letting leds light up parallel without flickering.
*/
#define _PARALLELDELAY_ 5 //microseconds
/*################################################################################################*/


/*##################################################################################################
VARIABLES
--------------------------------------------------------------------------------------------------*/
/*
Byte array linking the pin names to the bits of pinConfig
array[0] is linked to least significant bit (LSB) of pinConfig
array[41] is linked to most significant bit (MSB) of pinconfig
pinConfig is a parameter of setPins-function. 
*/
static byte pins[42] = {};
/*################################################################################################*/