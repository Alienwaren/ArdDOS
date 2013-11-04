#ifndef _H_CBOOT_
#define _H_CBOOT_
#include "Arduino.h"
///@class CBoot
///@brief Ta klasa inicjuje i przeprowadza proces rozruchu
///
class CBoot
{
public:
  CBoot(void);

  ///
  ///@brief Inicjacja bootu systemu, tutaj ustawiana jest zmienna checkBootState
  ///
  ///Jest to bootloader systemu, jego dziedzicem jest jądro, będzie sprawdzał czy potrzebny sprzęt jest załadowany
  void bootUp();
protected:
  ///
  ///@var m_redLed i _redGreen służą do oznaczenia czy boot sie udal
  ///
  int m_redLed;
  int m_greenLed;  
  int Leds[2]; /// @var Zmienna przechowuje stany podłączenia diód
 
  boolean m_successBoot; ///@var Ta zmienna pozwala na określenie czy boot się udał
  ///
  ///@brief Sprawdza stan bootu. Parametrem jest aktualny stan m_successBoot;
  ///
  boolean checkBootState(boolean state); 

};




#endif // _H_CBOOT_
