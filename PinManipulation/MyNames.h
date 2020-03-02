namespace Names
{
  namespace Modes
  {
    constexpr char Output = 'O';
    constexpr char Input = 'I';
    constexpr char InputPullup = 'P'; 
  }
  namespace TimerSettings
  {
    constexpr unsigned short ActivateTimerA = 0b11111100;
    constexpr unsigned short ActivateTimerB = 0b11100111;
    constexpr unsigned short Prescaler1 = 0b00000001;
    constexpr unsigned short ActivateInterrupt = 0b00000001;
  }
}
