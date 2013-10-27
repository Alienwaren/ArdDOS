#include "CSerialMonitor.h"

CSerialMonitor::CSerialMonitor(void)
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
  for(int i = 0; i < loopI; i++)
 {
  Serial.print(m_text[i]);
  Serial.print("\n");
  delay(100);
 } 
 
  
}
