#ifndef _H_CVOLTAGEUTILITIES_
#define _H_CVOLTAGEUTILITIES_
#include "Arduino.h"
#include "CVoltage.h"
///
///@class CVoltageUilities odpowiada za maniupulację i pobieranie danych o napięciach
///
class CVoltageUtilities
  :
    public CVoltage
{
  public:
  CVoltageUtilities(void);
  ~CVoltageUtilities(void);
  protected:
    ///
    ///@brief getVoltage pozwala na pobranie napięcia i przypisanie go do zmiennej
    ///
    Voltage getVoltage(Voltage p_voltageCotainer);
};





#endif // _H_CVOLTAGEUTILITIES_
