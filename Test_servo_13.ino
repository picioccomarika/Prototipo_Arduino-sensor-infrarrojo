#include <Servo.h>
Servo S1;



void setup() {
  // put your setup code here, to run once:
  S1.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
  S1.write(180);
}
