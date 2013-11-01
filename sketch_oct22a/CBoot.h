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
  byte m_redLed;
  byte m_greenLed;  
  boolean m_Leds[2]; /// @var Zmienna przechowuje stany podłączenia diód
  float m_voltage; ///@var Składowa przechowuje napięcie z pinu 5V
  float m_normVoltageMax; ///@var Składowa określa normatywne napięcie.(maks)
  float m_normVoltageMin; ///@var Składowa określa normatywne napięcie.(min)
  float m_sensorValue; ///@var Wartość sensora analogowego, posłuży do obliczenia wartości aktualnego napięcia
  boolean m_successBoot; ///@var Ta zmienna pozwala na określenie czy boot się udał
  ///
  ///@brief Sprawdza stan bootu. Parametrem jest aktualny stan m_successBoot;
  ///
  boolean checkBootState(boolean state); 
  ///
  ///@brief Sprawdza stan sprzętu, jego obecność. Zwraca boolean, który powie czy wszystko jest ok.
  ///Jego parametrami jest obecność diód (Leds[]), obecność wyświetlacza(displayI2C), napięcie pinu 5V(actualVoltage), wartość sensora analogowego(actualSensorValue) 
  boolean checkDevices(boolean Leds[] /*boolean displayI2C*/, float actualVoltage, int actualSensorValue);

};




#endif // _H_CBOOT_
