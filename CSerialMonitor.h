#ifndef _H_CSerialMonitor_
#define _H_CSerialMonitor_
#include "Arduino.h"
#include "CText.h"
///@class CSerialMonitor
///@brief Zapewnia obsługę Serial Monitora Arduino
///
class CSerialMonitor
  : public CText
{
 public:
   CSerialMonitor(void);
   ~CSerialMonitor(void);
 protected:
   ///
   ///@brief Uruchamia komunikację do serial monitora [do debugu]
   ///
   void startSerial(int baudSpeed);
   int m_baud; /// @var Przechowuje prędkość transmisji w serial monitorze
   ///
   ///@brief Kończy komunikację z serial monitorem
   ///
   void stopSerial();
   ///
   ///@brief Wyświetlenie tekstu w Serial Monitorze.
   ///Wyświetli podany w parametrze tekst (Tablica char), bez przerwy
   void displayText(char toBeDisplayed[]);
   
   ///
   ///@brief Wyświetla tekst w Serial Monitorze, po wyświetleniu całości daje odstęp
   ///Wyświetla podany w parametrze tekst (tablica charów), po wyświetleniu całości daje odstęp
   void displayTextEnter(char toBeDisplayed[]);
   
   
  
  
  
};

#endif //_H_CSerialMonitor_
