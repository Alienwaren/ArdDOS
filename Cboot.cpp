#include "CBoot.h"
CBoot::CBoot(void)
  :
    m_redLed(13), m_greenLed(12),
      m_successBoot(false)
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

