/*==============================================================
DIGITAL OUTPUT LED
================================================================

Description:
  This program allows the execution of different modes
  (blinking, alternating, and running) for a set of LED
  lights connected to the GPIO32, GPIO33, GPIO25, GPIO26,
  GPIO27, GPIO14 pins with a 1-second interval per cycle.

Programmer:
  Mark P. Garcia

Date:
  6 September 2026
----------------------------------------------------------------*/

// GPIOS
uint8_t const LED[] = {32, 33, 25, 26, 27, 14};
uint8_t const numb_pins = sizeof(LED)/sizeof(LED[0]);
// int count = 0;

const uint8_t SW1 = 18;
const uint8_t SW2 = 19;
bool SW1_state = 0;
bool SW2_state = 0;

void setup() {

  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);

  for(int i=0; i < 6; i++)  {
    pinMode(LED[i], OUTPUT);
  }
}

#include "LED_Modes.h"

void loop() {

  SW1_state = digitalRead(SW1);
  SW2_state = digitalRead(SW2);

  if (SW1_state == 0 && SW2_state == 1) {
    blink();
  }
  else if (SW1_state == 1 && SW2_state == 0)  {
    alt();
  }
  else if (SW1_state == 1 && SW2_state == 1)  {
    run();
  }
  else  {
    off();
  }
}