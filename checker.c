#include <stdio.h>
#include <assert.h>

#include "TempMon.c"
#include "StateOfChargeMon.c"
#include "ChargeRateMon.c"

    
int batteryIsOk(float temperature, float soc, float chargeRate) {
  if((TemperatureIsOk(temperature)==0) || (StateofChargeIsOk(soc)==0) || (ChargeRateIsOk(chargeRate)==0))
  {
    return 0;
  }
  else
  {
    return 1;
  }
  
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
