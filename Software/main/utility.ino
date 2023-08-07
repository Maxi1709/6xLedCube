/*##################################################################################################
DESCRIPTION
Contains different functions to control the LEDs and Arduino board.
  > setPins()
  > wait()
##################################################################################################*/

/*##################################################################################################
FUNCTION NAME
setPins()
----------------------------------------------------------------------------------------------------
DESCRIPTION
This function sets the pins of the arduino high and low according to the given parameters.
----------------------------------------------------------------------------------------------------
PARAMETERS
int pinConfig
    42-bit number:
    Bits:
    [0   ... 35]    [36 ... 41]
    [column values] [layer values]
    [anodes]        [cathodes]
    
    0 ==> low, pin will be set to low / GND
    1 ==> high, pin will be set to high / +5V
----------------------------------------------------------------------------------------------------
RETURN
void
##################################################################################################*/
void setPins(int pinConfig)
{
    for(int i = 0; i < _PINCONFIGBITSIZE_; i++)
  {
    digitalWrite(pins[i], bitRead(pinConfig, i));
  }
}