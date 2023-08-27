/***************************************************************************************************
 * Include protection
*/
#pragma once
/**************************************************************************************************/

/***************************************************************************************************
 * MAKROS
*/
/*--------------------------------------------------------------------------------------------------
The pin connected to the button used to change the animation.
Triggers the buttonISR.
HAS TO BE ONE OF FOLLOWING PINS ON ARDUINO MEGA 2560!
    > 2
    > 3
    > 18
    > 19
    > 20
    > 21
*/
#define BUTTON_PIN 3 /* ! PLACEHOLDER NUMBER ! */
/**************************************************************************************************/

/***************************************************************************************************
 * CONSTANTS
 */
/*--------------------------------------------------------------------------------------------------
 The numbers of bits used in the pinConfig integer.
*/
const byte PINCONFIG_BITSIZE = 42;
/*--------------------------------------------------------------------------------------------------
 Byte array linking the pin names to the bits of pinConfig
 array[0] is linked to least significant bit (LSB) of pinConfig
 array[41] is linked to most significant bit (MSB) of pinconfig
 pinConfig is a parameter of setPins()-function.
*/
const byte pins[42] = { 1,  2,  3,  4,  5,  6, /* anode row 0 */
                        7,  8,  9, 10, 11, 12, /* anode row 1 */
                       13, 14, 15, 16, 17, 18, /* anode row 2 */
                       19, 20, 21, 22, 33, 24, /* anode row 3 */
                       25, 26, 27, 28, 29, 30, /* anode row 4 */
                       31, 32, 33, 34, 35, 36, /* anode row 5 */
                       37, 38, 39, 40, 41, 42};/* cathode layers */
                       /* ! PLACEHOLDER NUMBERS ! */
/*--------------------------------------------------------------------------------------------------
Time used as delay when letting leds light up parallel without flickering.
*/
const unsigned long PARALLEL_DELAY = 5; /* milliseconds */
/**************************************************************************************************/

/***************************************************************************************************
 * FUNCTION DECLARATIONS
 * Further description of the functions in utility.c file.
*/
void util_setPins (int pinConfig);
void util_wait (unsigned long waitTime);
void util_buttonISR (void);
/**************************************************************************************************/