#include "TempMon.h"
#include "StateOfChargeMon.h"
#include "ChargeRateMon.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if((TemperatureIsOk(temperature)==0) || (StateofChargeIsOk(soc)==0) || (ChargeRateIsOk(chargeRate)==0))
  {
    return 0;
  }
  
  return 1;
  
}
