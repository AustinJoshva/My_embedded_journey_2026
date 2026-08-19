int button1 = 2;
int ledPin = 3;
int button2 = 4;

void setup() {
  pinMode(button1, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(button2, INPUT);
}

void loop() {
  int buttonState1 = digitalRead(button1);
  int buttonState2 = digitalRead(button2);

  if (buttonState1 == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  
  if (buttonState2 == HIGH) {
    digitalWrite(ledPin, LOW);
  }
  
}