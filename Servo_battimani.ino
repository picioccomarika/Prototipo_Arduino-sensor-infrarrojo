#include <Servo.h>
Servo S1;
Servo S2;
int estado1;


void setup() {
  // put your setup code here, to run once:
  S1.attach(13);
  S2.attach(12);
  estado1 = 0;
}

void loop() {
  accelerate(60);
  
  //S1.write(135);
  //estado1;
  //S2.write(135);
 // estado1 = (estado1 * -1) +1;
 // delay (1000);
  
  //S1.write(45);
  //estado1 = (estado1 * -1) +1;
  //S2.write(45);
  //estado1;
  //delay (1000);

  
}

  int accelerate(int vel){
    S1.write(vel +120);
   // delay (500);
    S1.write(vel -60);
    S2.write(vel +60);
    //delay(500);
    S2.write(vel -120);
   // return 180;
  }

