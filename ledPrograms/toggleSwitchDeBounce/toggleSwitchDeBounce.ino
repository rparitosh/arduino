int switchPin = 8;
int ledPin = 13;
boolean lastButton = LOW;
boolean ledOn = LOW;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  boolean currentButton = deBounce(lastButton);
  if (currentButton == HIGH && lastButton == LOW) {
    ledOn  = !ledOn;
    digitalWrite(ledPin, ledOn);
  }
  lastButton = currentButton;
}

boolean deBounce(boolean last) {
  boolean current = digitalRead(switchPin);
  if (current != last) {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
