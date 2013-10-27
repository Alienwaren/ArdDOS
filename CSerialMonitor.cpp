#include "CSerialMonitor.h"

CSerialMonitor::CSerialMonitor(void)
  : 
    displayed(false)
{
  
  
}
void CSerialMonitor::startSerial(int baudSpeed)
{
  Serial.begin(baudSpeed);
  
}
CSerialMonitor::~CSerialMonitor(void)
{
  
  
}
void CSerialMonitor::displayText(int loopI)
{
  for(int i = 0; i <= loopI; i++)
 {
  Serial.print(m_text[i]);
  if(i == loopI)
    Serial.print(" ");
  delay(100);
 } 
 
  
}

boolean CSerialMonitor::displayTextOnce(int loopI)
{
  
  if(displayed == false)
  {
   for(int i = 0; i <= loopI; i++)
   {
      Serial.print(m_text[i]);
        if(i == loopI)
        {
          Serial.print(" ");
          return displayed = true;
        }
      delay(100);
      
 } 
  }
  else
   return 1; 
}
