int redPin = 2;
int yellowPin = 3;
int GreenPin = 4;
int gaps = 3000;

void setup(){
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(GreenPin,OUTPUT);
 
}

void loop(){
 
  digitalWrite(redPin,HIGH);
  delay(gaps);
  digitalWrite(redPin,LOW);
  
  digitalWrite(yellowPin,HIGH);
  delay(gaps);
  digitalWrite(yellowPin,LOW);
  
  digitalWrite(GreenPin,HIGH);
  delay(gaps);
  digitalWrite(GreenPin,LOW);
  
}