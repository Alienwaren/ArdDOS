#include "CSerialMonitor.h"

CSerialMonitor::CSerialMonitor(void)
<<<<<<< HEAD
=======
  : 
    displayed(false)
>>>>>>> bf6fd8c36f6ed427a40a117202768bd708f4cf96
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
  
<<<<<<< HEAD
=======
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
      
>>>>>>> bf6fd8c36f6ed427a40a117202768bd708f4cf96
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
  
<<<<<<< HEAD
 } 
=======
>>>>>>> bf6fd8c36f6ed427a40a117202768bd708f4cf96
}
