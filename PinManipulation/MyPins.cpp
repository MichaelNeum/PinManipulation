#include "MyPins.h"
#include "MyNames.h"

using namespace Names::TimerSettings;

void PinManipulation::MyPinMode(int Pin , char Mode)
{
  switch(Mode)
  {
    
    case 'I':                             //I = Input without Pullup 

      DDRD &= ~(1 << Pin);                //writes a zero to the wanted pin to set it to be an Input
      PORTD &= ~(1 << Pin);
      
      break;

    case 'O':                             //O = Output

      DDRD |= 1 << Pin;                   //sets wanted pin to be an output

      break;

    case 'P':                             //P = Input with Pullup

      DDRD &= ~(1 << Pin);                //writes a zero to the wanted pin to set it to be an Input
      PORTD |= 1 << Pin;                  //writes a one on the wanted place to use the integrated pullup

      break;
  }
}

void PinManipulation::MyDigitalWrite(int Pin , bool State)
{
  
  if(DDRD & (1 << Pin))                 //Checks if pin is configured as an output
  {
    
    if(State) PORTD |= 1 << Pin;        //Sets pin high if state high

    else PORTD &= ~(1 << Pin);          //Sets pin low if state low
    
  }
}

bool PinManipulation::MyDigitalRead(int Pin)
{
  
  if(!(DDRD & (1 << Pin)))              //Checks if pin is configured as an Input
  {

    return PIND & (1 << Pin);           //Returns state of pin
    
  }
}

void Timer::Activate16BitTimer()
{
  TCCR1A &= ActivateTimerA;
  TCCR1B &= ActivateTimerB;
  TCCR1B |= Prescaler1;
  TIMSK1 |= ActivateInterrupt;
}

bool Timer::PWMSignal()
{
  
}
