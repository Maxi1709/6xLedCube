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


/*
####################################################################################################
FUNCTION NAME
setup()
----------------------------------------------------------------------------------------------------
DESCRIPTION
This function is run once at startup.
 Tasks:
    > Set all IO-pins configured in pins[] as output.
      Initialize all these pins with LOW value.
----------------------------------------------------------------------------------------------------
PARAMETERS
none
----------------------------------------------------------------------------------------------------
RETURN
void
####################################################################################################
*/

void setup()
{
  for(int i = 0; i < _PINCONFIGBITSIZE_; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop()
{
  
}