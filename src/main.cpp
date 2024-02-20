#include <Arduino.h>
#include "Testbench.h"
#include <Adafruit_ADS1X15.h>

Adafruit_ADS1115 ads;
void setup() {
    Serial.begin(9600);
  
    if (!ads.begin()) {
    while (1);
    }
Serial.println("Time(s),Current(A),Force(N)");
}

void loop() {
    readData(ads);

}