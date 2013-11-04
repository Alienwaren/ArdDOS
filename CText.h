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
  char m_welcomeMessage[];
  
};
            
#endif //_H_CTEXT_
