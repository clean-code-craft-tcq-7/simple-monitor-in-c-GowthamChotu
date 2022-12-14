#include <stdio.h>
#include <assert.h>

#define RangeCheck(ActlVal,MinVal,MaxVal) (ActVal<=MinRange || ActVal>=MaxVal)?0:1

#define TempMinVal 0
#define TempMaxVal 45

#define SocMinVal 20
#define SocMaxVal 80

#define ChargeRateRange 0.8


int Check_ChargeRate(float chargeRate);

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  int batterystate = 1;
  batterystate =  RangeCheck(temperature,TempMinVal , TempMaxVal);
  batterystate &= RangeCheck(soc, SocMinVal, SocMaxVal);
  batterystate &= Check_ChargeRate(chargeRate);
  return batterystate;
}

int Check_ChargeRate(float chargeRate)
{
   if(chargeRate>ChargeRateRange)
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
