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
void CSerialMonitor::displayText(char toBeDisplayed[])
{
 
 for(int i = 0; i < sizeof(toBeDisplayed); i++)
 {
  
  Serial.print(toBeDisplayed[i]);
  
 } 
}
void CSerialMonitor::displayTextEnter(char toBeDisplayed[])
{
 
 for(int i = 0; i < sizeof(toBeDisplayed); i++)
 {
  
  Serial.print(toBeDisplayed[i]);
  if(sizeof(toBeDisplayed) == i)
  {
    
    Serial.println();
    
  }
  
 } 
}
