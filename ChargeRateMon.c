int ChargeRateIsOk(float chargeRate)
 {
   if(chargeRate > 0.8) {
   printf("Charge Rate out of range!\n");
   return 0;
   }
   else
   {
    return 1;
   }
 }
