#ifndef _H_CKERNEL_
#define _H_CKERNEL_
#include "CBoot.h"
#include "CSerialMonitor.h"
#include "CText.h"
///@class CKernel
///@brief Klasa odpowiada za jądro systemu, dziedziczy wszystkie elementy i zapewni przez to obsługę sprzętu
///Zapewnia obsługę zdarzeń, sprzętu po bootupie
class CKernel
  : public CBoot, public CSerialMonitor
  {
public:
///
///Konstruktor domyślny
///
CKernel(void);
///
///Desktruktor domyślny
///
~CKernel(void);
///
///@brief Boot inicjuje bootup systemu, dziedziczy z CBoot
///Dziedziczy z CBoot, wszystkie metody pobiera z ojca.
void boot();
void startSystem();

};


#endif //_H_CKERNEL_
