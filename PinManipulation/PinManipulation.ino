#include "MyPins.h"
#include "MyNames.h"

PinManipulation MyPins;
Timer Timer1;

using namespace Names::Modes;

void setup() 
{
  Serial.begin(9600);

  Timer1.Activate16BitTimer();
  
  MyPins.MyPinMode(3 , Output);
  MyPins.MyPinMode(4 , InputPullup);
}

void loop() 
{
  MyPins.MyDigitalWrite(3 , Timer1.PWMSignal() && !MyPins.MyDigitalRead(4)); 
}

ISR(TIMER1_OVF_vect)
{
  Timer1.HandleInterrupt();
}
