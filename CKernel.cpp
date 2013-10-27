#include "CKernel.h"

CKernel::CKernel(void)
{

  
}

  
void CKernel::boot()
{
  bootUp();
  startSerial(9600);
  
  
}
void CKernel::startSystem()
{
  setText("Damian", 5);
  displayText(5);
  
}
CKernel::~CKernel(void)
{
  
  
}
