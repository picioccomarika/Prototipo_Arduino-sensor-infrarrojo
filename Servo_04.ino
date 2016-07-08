
#include <Servo.h>
 Servo S1;
 Servo S2;
 
 String s1;
 String s2;
 int estado1;
 int val = 0;
 int led2 = 2;
 int res = A1;
 int izq;
 int der;
 int estado2;
 int vel=45;
 int corrector;
 
void setup() {
    S1.attach (10);
    S2.attach (9);
    pinMode(2, OUTPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(A1, INPUT);
    s1 = "se enciende ";
    s2 = "se enciende ";
    estado1 = 0;
    estado2 = 1;
    corrector = 0;
    Serial.begin(9600);
}

void loop() {
  izq = digitalRead(5);
  der = digitalRead(6);
  Serial.println (izq);
  Serial.println (der);
  
  if (izq == 1){

    
      digitalWrite(led2, estado1);
      S2.write( ( 90 + corrector ) + vel);
  }
  else {
      digitalWrite(led2, estado2);
      S2.write( 90 - vel);
  }
   if (der == 1){
      digitalWrite(led2, estado1);
      S1.write(( 90 + corrector ) - vel);
  }
  else {
      digitalWrite(led2, estado2);
      //Serial.println (der);
      S1.write(90 + vel);
  }
      
}
