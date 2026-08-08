int redPin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  for (int fade = 0; fade <= 255; fade += 10) {
    analogWrite(redPin, fade);
    delay(30);
  }

  delay(1000);
  for (int fade = 255; fade >= 0; fade -= 10) {
    analogWrite(redPin, fade);
    delay(30);
  }

  delay(1000);
}