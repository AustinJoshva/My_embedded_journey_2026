int potPin= A5;
int redPin = 3;

void setup(){
  pinMode(redPin,OUTPUT);
  pinMode(potPin,INPUT);
  
}

void loop(){
  int potVal= map(analogRead(potPin),0,1023,0,255);
  analogWrite(redPin,potVal);
  
}