const int buttonOn = 2;
const int buttonOff = 3;
const int greenLED = 9;
const int redLED = 10;

void setup() {
  pinMode(buttonOn, INPUT);
  pinMode(buttonOff, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  int onState = digitalRead(buttonOn);
  int offState = digitalRead(buttonOff);
  if (onState == HIGH) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, HIGH);
  }

  if (offState == HIGH) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
  }

  delay(50);
}
