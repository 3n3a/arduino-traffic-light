// STATES
typedef enum
{
  Red_State,
  Yellow_State,
  Green_State,
  RedYellow_State,
} eTrafficLightState;

// EVENTS
typedef enum
{
  Change_to_Red_Event,
  Change_to_Yellow_Event,
  Change_to_Green_Event,
  Change_to_RedYellow_Event,
} eTrafficLightEvent;

// FUNCTION POINTER --> CURRENT STATE
typedef eTrafficLightState (*pfEventHandler)(int, unsigned long, unsigned long*);

// STATE MCAHINE
typedef struct
{
  eTrafficLightState eStateMachine;
  eTrafficLightEvent eStateMachineEvent;
  pfEventHandler pfStateMachineEventHandler;
} sStateMachine;
