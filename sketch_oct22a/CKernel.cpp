#include "CKernel.h"

CKernel::CKernel(void)
{

  
}

  
void CKernel::boot()
{
  bootUp();
  startSerial(9600);
  initPins(12,11,10,9,8,7,6,5);
  initDisplay(12,11,10,9,8,7,6,5);         //CSegment::initDisplay(byte A, byte B, byte C, byte D, byte E, byte G, byte F, byte DF)
  
}
void CKernel::startSystem()
{
  ///Wiadomosc powitalna
  setText("Welcome to ArdDOS InDev", 25);
  displayTextOnce(25);
  displayVoltage(m_voltage); 
  displayOne(m_A,m_B,m_C,m_D,m_E,m_G,m_F,m_DF);
}
CKernel::~CKernel(void)
{
  
  
}
