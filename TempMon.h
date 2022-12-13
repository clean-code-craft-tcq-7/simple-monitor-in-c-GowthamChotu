int TemperatureIsOk(float temperature)
 {
   if(temperature < 0 || temperature > 45) {
   printf("Temperature out of range!\n");
   return 0;
   }
   else
   {
    return 1;
   }
 }
