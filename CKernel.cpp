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
  setText("Welcome to ArdDOS InDev", 25);
  displayTextOnce(25);
  
}
CKernel::~CKernel(void)
{
  
  
}
