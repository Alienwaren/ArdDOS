#ifndef _H_CVOLTAGE_
#define _H_CVOLTAGE_
#include "Arduino.h"
///
///@brief Template pozwoli na łatwiejsze tworzenie obiektów reprezentujących napięcia
///
template <typename voltageType>
class CVoltage
{
public:
	CVoltage(void);
	~CVoltage(void);
	voltageType voltageAmount;
}
#endif ///_H_CVOLTAGE_
