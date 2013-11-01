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
   ///Wyświetla tekst bez przerwy, dziedziczy z CText, patrz m_text. Aby zachować stabilność odstęp pomiędzy wyświetleniami to 1/10s.
   void displayText();
   
   ///
   ///@brief Wyświetla podany tekst raz
   ///Parametrem jest wielkość tablicy, potrzebna do pętli for.
   boolean displayTextOnce(boolean p_state);
  
   boolean m_displayed;///@var Zmienna do określenia czy tekst jest wyświetlony
  
  ///
  ///@brief Wyświetli aktualne napięcie pinu 5V
  ///Wyświetla dane pobrane z CBoot::CheckDevices (potem dodam metodę do sprawdzenia napięcia). Odstęp dla stabilności - 1/10s
  float displayVoltage(float actualVoltage);
  ///
  ///@brief Wyświetla stany Ledów
  ///Wyświetli dane pobrane z Cboot i w przyszłości z innych klas.
  int displayLedState(int ledState);
  
  char m_command[25]; ///@var Tablica przechowująca komendy wiersza poleceń
  ///
  ///@brief Metoda do wprowadzania i przetwarzania poleceń wprowadzonych w Serial Monitorze lub za pomocą klawiatury PS/2
  ///
  char commandPrompt(char insetedCommand[]);
  char displayPrompt(char displayPrompt[]);
  char m_prompt; ///@var Zmienna przechowująca znak zachęty
};

#endif //_H_CSerialMonitor_
