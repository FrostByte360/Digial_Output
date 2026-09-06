/*========================================================================
DIGITAL OUTPUT LED
==========================================================================

Description:
  This program allows the blinking of an LED connected to the GPIO32 pin
  with a 1-second interval.

Programmer:
  Hans Noe D. Baldomer

Date:
  2 September 2026
--------------------------------------------------------------------------*/

// GPIOS
uint8_t const LED[] = {32,33,25,26,27,14};
uint8_t const numb_pins = sizeof(LED)/sizeof(LED[0]);
int count = 0;
void setup() {

  for(int i=0; i < 6; i++)  {
    pinMode(LED[i], OUTPUT);
  }

}

#include "LED_Modes.h"

void loop() {
  blink();
  alt();
  count = 0;
  run();
  count = 0;


}


















