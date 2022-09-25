#include "state_machine_event_handlers.h"

/*
 * IMPORTANT
 * =========
 * 
 * the states enum and events enum, have to
 * be in the same order, if red ist first in states
 * it also has to be first in events and in the
 * states and events combo.
 */

// STATES WITH EVENTS AND THEIR HANDLERS //
sStateMachine asStateMachine1 [] =
{
  {Red_State,    Change_to_RedYellow_Event,  ChangeToRedYellowHandler}, // --> REDYELLOW
  {Yellow_State, Change_to_Red_Event,    ChangeToRedHandler},   // --> RED
  {Green_State,  Change_to_Yellow_Event, ChangeToYellowHandler}, // --> YELLOW
  {RedYellow_State, Change_to_Green_Event, ChangeToGreenHandler}, // --> GREEN
};

sStateMachine asStateMachine2 [] =
{
  {Red_State,    Change_to_RedYellow_Event,  ChangeToRedYellowHandler}, // --> REDYELLOW
  {Yellow_State, Change_to_Red_Event,    ChangeToRedHandler},   // --> RED
  {Green_State,  Change_to_Yellow_Event, ChangeToYellowHandler}, // --> YELLOW
  {RedYellow_State, Change_to_Green_Event, ChangeToGreenHandler}, // --> GREEN
};

void setup() {
  // 1
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

  // 2
  pinMode(RED_PIN_2, OUTPUT);
  pinMode(YELLOW_PIN_2, OUTPUT);
  pinMode(GREEN_PIN_2, OUTPUT);
}


unsigned long current_millis = 0;

eTrafficLightState eNextState1 = Yellow_State; // because at first RED
unsigned long state1_previous_millis = 0;

eTrafficLightState eNextState2 = Red_State; // because at first RedYellow
unsigned long state2_previous_millis = 0;


void loop() {
  current_millis = millis();

  eNextState1 = (*asStateMachine1[eNextState1].pfStateMachineEventHandler)(1, current_millis, &state1_previous_millis);
  eNextState2 = (*asStateMachine2[eNextState2].pfStateMachineEventHandler)(2, current_millis, &state2_previous_millis);
}
