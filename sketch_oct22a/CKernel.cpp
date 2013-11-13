#include "CKernel.h"
CKernel::CKernel(void)
{

  
}

  
void CKernel::boot()
{
  bootUp();
  startSerial(9600); // komunikacja szeregowa
  initPins(13,12,11,10,9,8,7,6); //Inicjacje wyświetlacza segmentowego/(a,b,c,d,e,f,g,DP)
  
}
void CKernel::startSystem()
{
  lightAll();
  delay(100);
  offAll();
}
CKernel::~CKernel(void)
{
  
  
}
