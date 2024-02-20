
#include "Testbench.h"
#include <Adafruit_ADS1X15.h>

void readData(Adafruit_ADS1115 ads) {
  int16_t results_LC;
  int16_t results_CS;
  
  float multiplier = 0.1875F; 

  results_CS = ads.readADC_Differential_0_1();
  results_LC = ads.readADC_Differential_2_3();
  
  float AMPS = ((results_CS*multiplier)/12.5);
  float Newtons = ((results_LC*multiplier));
  displayInfo(AMPS, Newtons);
  Serial.println("Hello World!");
}



void displayInfo(float Current, float Force){
   unsigned long Time = millis();
   Serial.print(Time); Serial.print(",");
   Serial.print(Current); Serial.print(",");
   Serial.println(Force); 
   delay(SENSITIVITY);
  
}
