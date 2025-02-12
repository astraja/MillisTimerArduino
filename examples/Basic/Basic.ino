#include <MillisTimer.h>

MillisTimer timer1(100);
MillisTimer timer2(1000);
int counter = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(timer1.canExecute()){
    Serial.print(".");
  }
  if(timer2.canExecute()){
    Serial.println(counter);
    counter++;
  }
}