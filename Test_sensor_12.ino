int sensor;
int led;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(12);
  digitalWrite(13, sensor);

}
