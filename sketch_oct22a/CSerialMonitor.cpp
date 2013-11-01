#include "CSerialMonitor.h"

CSerialMonitor::CSerialMonitor(void)
  : 
    m_displayed(false)
{
  
  
}
void CSerialMonitor::startSerial(int baudSpeed)
{
  Serial.begin(baudSpeed);
  
}
void CSerialMonitor::stopSerial()
{
  Serial.end();
  
}
CSerialMonitor::~CSerialMonitor(void)
{
  
  
}
void CSerialMonitor::displayText()
{
  for(int i = 0; i <= sizeof(m_text); i++)
 {
  Serial.print(m_text[i]);
  if(i == sizeof(m_text))
    Serial.print(" ");
  delay(100);
 } 
 
  
}

boolean CSerialMonitor::displayTextOnce(boolean p_state)
{
  
  if(m_displayed == false)
  {
   for(int i = 0; i <= sizeof(m_text); i++)
   {
      Serial.print(m_text[i]);
        if(i == sizeof(m_text))
        {
          Serial.print(" ");
          return m_displayed = true;
        }
      delay(100);
      
 } 
  }
  else
   return 1; 
}
float CSerialMonitor::displayVoltage(float actualVoltage)
{
 Serial.println(actualVoltage);
 delay(100);
  
  
}

int CSerialMonitor::displayLedState(int ledState)
{
  Serial.println(ledState);
  delay(100);  
}
