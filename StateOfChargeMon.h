int StateofChargeIsOk(float soc)
 {    
   if(soc < 20 || soc > 80) {
   printf("State of Charge out of range!\n");
   return 0;
   }
   else
   {
    return 1;
   }
 }
