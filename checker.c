#include <stdio.h>
#include <assert.h>

#define RangeCheck(ActualValue,MinRange,MaxRange) (ActualValue<=MinRange || ActualValue>=MaxRange)?0:1

#define TempMinRange 0
#define TempMaxRange 45

#define SocMinRange 20
#define SocMaxRange 80

#define ChargeRateRange 0.8


int Check_ChargeRate(float chargeRate);

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  int batterystate = 1;
  batterystate =  RangeCheck(temperature,TempMinRange , TempMaxRange);
  batterystate &= RangeCheck(soc, SocMinRange, SocMaxRange);
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
