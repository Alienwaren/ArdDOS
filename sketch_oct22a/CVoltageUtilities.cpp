#include "CVoltageUTilities.h"

CVoltageUtilities::CVoltageUtilities(void)
{
}

Voltage CVoltageUtilities::getVoltage(Voltage p_voltageCotainer)
{
  Voltage f_tempVoltage = analogRead(A0);
  f_tempVoltage = actualSegmentVoltage;
  return actualSegmentVoltage;
}
 
CVoltageUtilities::~CVoltageUtilities(void)
{
  
}
