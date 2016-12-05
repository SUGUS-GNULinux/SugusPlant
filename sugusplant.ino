#include "TimerOne.h"

void setup() {
  pinMode(9, OUTPUT);
  Timer1.initialize(500000); //us
  Timer1.attachInterrupt(humidity);
}

void loop() {
  
}

void humidity(){
  int sensor = analogRead(A0);
  if(sensor > 400){
    digitalWrite(9, HIGH);
  }else{
    digitalWrite(9, LOW);
  }
}

