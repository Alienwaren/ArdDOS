#ifndef _H_CVOLTAGE_
#define _H_CVOLTAGE_
#include "Arduino.h"
typedef float Voltage;
///
///@class CVoltage zapewnia opakopanie napięć i ich sptawdzanie
///
class CVoltage
{
public:
	CVoltage(void);
	~CVoltage(void);
        protected:
	Voltage actualSegmentVoltage; ///@var wartość napięcia
  
};
#endif ///_H_CVOLTAGE_
