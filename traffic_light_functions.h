#include "global_defines.h"
#include "led_functions.h"

void red_light(int set_of_pins) {
  int red, yellow, green;
  if (set_of_pins == 1) {
    red = RED_PIN;
    yellow = YELLOW_PIN;
    green = GREEN_PIN;
  } else {
    red = RED_PIN_2;
    yellow = YELLOW_PIN_2;
    green = GREEN_PIN_2;
  }

  led_on(red);      // [O]
  led_off(yellow);  // [ ]
  led_off(green);   // [ ]
}

void yellow_light(int set_of_pins) {
  int red, yellow, green;
  if (set_of_pins == 1) {
    red = RED_PIN;
    yellow = YELLOW_PIN;
    green = GREEN_PIN;
  } else {
    red = RED_PIN_2;
    yellow = YELLOW_PIN_2;
    green = GREEN_PIN_2;
  }

  led_off(red);     // [ ]
  led_on(yellow);   // [O]
  led_off(green);   // [ ]
}

void green_light(int set_of_pins) {
  int red, yellow, green;
  if (set_of_pins == 1) {
    red = RED_PIN;
    yellow = YELLOW_PIN;
    green = GREEN_PIN;
  } else {
    red = RED_PIN_2;
    yellow = YELLOW_PIN_2;
    green = GREEN_PIN_2;
  }

  led_off(red);     // [ ]
  led_off(yellow);  // [ ]
  led_on(green);    // [O]
}