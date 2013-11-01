#include "CKernel.h"

CKernel::CKernel(void)
  :
    m_started(false)
{

  
}

  
void CKernel::boot()
{
  bootUp();
  startSerial(9600);
  
  
}
boolean CKernel::startSystem()
{
  if(m_started == false)
  {
  ///Wiadomosc powitalna
  setText("Welcome to ArdDOS InDev", 25);
  displayTextOnce(25);
  setText("Booting up the System", 21);
  displayTextOnce(21);
  setText("Checking nessesary hardware...", 31);
  displayTextOnce(31); 
  checkDevices(&m_Leds[0], m_voltage, m_sensorValue);
  setText("Actual sensor values: ", 19);
  displayTextOnce(19); 
  displayVoltage(m_voltage); 
  displayLedState(m_Leds[0]);
  displayLedState(m_Leds[1]);
  stopSerial();
  m_started == true;
  return 0;
  }
}
CKernel::~CKernel(void)
{
  
  
}
