/***************************************************************************************************
 * DESCRIPTION
 * Main file of the program code. This File is compiled first.
 * Contains setup function which is run once at startup.
 * Contains loop function which is run in an endless loop.
***************************************************************************************************/

/***************************************************************************************************
 * INCLUDES
*/
#include "utility/utility.h"
#include "animation/animation.h"
/**************************************************************************************************/

/***************************************************************************************************
 * FUNCTION NAME
 * setup
 * -------------------------------------------------------------------------------------------------
 * DESCRIPTION
 * This function is run once at startup.
 *  Tasks:
 *     > Set all IO-pins configured in pins[] as output.
 *       Initialize all these pins with LOW value.
 * -------------------------------------------------------------------------------------------------
 * PARAMETERS
 * none
 * -------------------------------------------------------------------------------------------------
 * RETURN
 * void
***************************************************************************************************/
void setup (void)
{
  /* set all pins used for led control as output and low */
  for(int i = 0; i < PINCONFIG_BITSIZE; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

/***************************************************************************************************
 * FUNCTION NAME
 * loop
 * -------------------------------------------------------------------------------------------------
 * DESCRIPTION
 * This function is run in an endless loop.
 * Tasks:
 *     >
 * -------------------------------------------------------------------------------------------------
 * PARAMETERS
 * none
 * -------------------------------------------------------------------------------------------------
 * RETURN
 * void
***************************************************************************************************/
void loop (void)
{
  /* check that the animation variable does not get bigger than the amount of animations */
  if(animation > MAX_ANIMATION)
  {
    animation = 0;
  }
  /* toggle animations */
  switch (animation)
  {
  case 0:
    ani_0_allOff();
    break;
  default:
    /* should not happen */
    break;
  }
}