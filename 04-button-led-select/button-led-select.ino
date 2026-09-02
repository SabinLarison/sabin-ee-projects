const int pinLED = 9;
const int pinLED2 = 8;
const int potPin = A0;
const int buttonPin = 2;

int lastButtonState = LOW;
int activeLED = pinLED;

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int currentButtonState = digitalRead(buttonPin);

  if (currentButtonState == HIGH && lastButtonState == LOW) {
    if (activeLED == pinLED) {
      activeLED = pinLED2;
    } else {
      activeLED = pinLED;
    }
  }

  lastButtonState = currentButtonState;

  int potValue = analogRead(potPin);
  int blinkDelay = map(potValue, 0, 1023, 100, 1000);

  digitalWrite(activeLED, HIGH);
  delay(blinkDelay);
  digitalWrite(activeLED, LOW);
  delay(blinkDelay);
}
