#include "CKernel.h"
CKernel::CKernel(void)
{

  
}

  
void CKernel::boot()
{
  bootUp();
  startSerial(9600); // komunikacja szeregowa
  initPins(13,12,11,10,9,8,7,6); //Inicjacje wyświetlacza segmentowego
  
}
void CKernel::startSystem()
{
  lightA();
  lightB();
}
CKernel::~CKernel(void)
{
  
  
}
