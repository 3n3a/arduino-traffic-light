#include "state_machine_types.h"
#include "traffic_light_functions.h"

// EVENT HANDLERS //

// to Green Transistion
eTrafficLightState ChangeToGreenHandler(int set, unsigned long current_millis, unsigned long* previous_millis)
{
  green_light(set);
  if (current_millis - *previous_millis >= GREEN_TIMEOUT) {
    *previous_millis += GREEN_TIMEOUT;
    return Green_State;
  } else {
    return Red_State;
  }
}

// to Yellow Transition
eTrafficLightState ChangeToYellowHandler(int set, unsigned long current_millis, unsigned long* previous_millis)
{
  yellow_light(set);
  if (current_millis - *previous_millis >= YELLOW_TIMEOUT) {
    *previous_millis += YELLOW_TIMEOUT;
    return Yellow_State;
  } else {
    return Green_State;
  }
}

// to Red Transition
eTrafficLightState ChangeToRedHandler(int set, unsigned long current_millis, unsigned long* previous_millis)
{
  red_light(set);
  if (current_millis - *previous_millis >= RED_TIMEOUT) {
    *previous_millis += RED_TIMEOUT;
    return Red_State;
  } else {
    return Yellow_State;
  }
}