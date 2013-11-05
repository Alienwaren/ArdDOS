#ifndef _H_CTEXT_
#define _H_CTEXT_
#include "Arduino.h"
/// @class CText
/// @brief Zapewnia obsługę tekstu
///
class CText
{
  public:
  CText(void);
  ~CText(void);
  protected:
  char m_text[100]; ///@var przechowywanie tekstu
  ///
  ///@brief Ustawienie tekstu.
  ///Przydziela dane do m_text
  char setText(char text[], int loopI); 
  
};
            
#endif //_H_CTEXT_
