#include "CBoot.h"
CBoot::CBoot(void)
  :
    m_redLed(13), m_greenLed(12),
      m_successBoot(false), m_voltage(0),
        m_normVoltageMin(4.90f), m_normVoltageMax(5.10f),
          m_sensorValue(0.f)
{
  
  
}
void CBoot::bootUp()
{
  pinMode(m_redLed, OUTPUT);
  
  pinMode(m_greenLed, OUTPUT);
  m_successBoot = true;
  checkBootState(m_successBoot); //podano m_successBoot 
 
}
boolean CBoot::checkBootState(boolean state)
{
   if(state == true)
     {
         
       digitalWrite(m_greenLed, HIGH);
       
     }
     else
     {
       digitalWrite(m_redLed, HIGH);
     }
   return state;
}

boolean CBoot::checkDevices(boolean Leds[], /*boolean displayI2C,*/ float actualVoltage, int actualSensorValue)
{
  ///Pobieramy i liczymy napięcie pinu A0
  actualSensorValue = analogRead(A0);
  actualVoltage = actualSensorValue * (5.0 / 1023.0);
  m_voltage = actualVoltage; ///Przypisanie wartości actualVoltage do m_voltage, przez co CKernel z danych skorzysta
  Leds[0] = digitalRead(13); //Odczytanie stanu 13 pinu. (zawsze obecna)
  Leds[1] = digitalRead(12); //Jw.
  
  
  
}
