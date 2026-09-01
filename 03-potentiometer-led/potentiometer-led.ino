const int pinLED = 9;
const int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potPin);
  int blinkDelay = map(potValue, 0, 1023, 100, 1000);
  digitalWrite(pinLED, HIGH);
  delay(blinkDelay);
  digitalWrite(pinLED, LOW);
  delay(blinkDelay);
  
}
