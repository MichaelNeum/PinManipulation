#include "MyPins.h"
#include "MyNames.h"

PinManipulation MyPins;
Timer Timer1;

using namespace Names::Modes;

bool ReturnValue = 0;

ISR(TIMER1_OVF_vect)
{
  ReturnValue = !ReturnValue;
}

void setup() 
{
  
  Serial.begin(9600);

  Timer1.Activate16BitTimer();
  
  MyPins.MyPinMode(3 , Output);
  MyPins.MyPinMode(4 , InputPullup);
  
}

void loop() 
{
  
  MyPins.MyDigitalWrite(3 , ReturnValue&&!MyPins.MyDigitalRead(4));
  
}
