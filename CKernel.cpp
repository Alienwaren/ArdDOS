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
<<<<<<< HEAD
 
  
=======
  ///Wiadomosc powitalna
  setText("Welcome to ArdDOS InDev", 25);
  displayTextOnce(25);
  displayVoltage(m_voltage); 
>>>>>>> bf6fd8c36f6ed427a40a117202768bd708f4cf96
}
CKernel::~CKernel(void)
{
  
  
}
