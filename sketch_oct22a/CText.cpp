#include "CText.h"


CText::CText(void)
{
  
}
CText::~CText(void)
{
  
  
}
char CText::setText(char text[], int loopI)
{
   for(int i = 0; i < loopI; i++)
   {
   m_text[i] = text[i];
   
   }  
  
}
