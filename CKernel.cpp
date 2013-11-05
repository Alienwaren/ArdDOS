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
  ///Wiadomosc powitalna
  setText("Welcome to ArdDOS InDev", 25);
  displayTextOnce(25);
  displayVoltage(m_voltage); 
}
CKernel::~CKernel(void)
{
  
  
}
