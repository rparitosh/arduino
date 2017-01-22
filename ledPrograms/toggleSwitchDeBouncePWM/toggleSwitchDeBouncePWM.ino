int switchPin = 8;
int ledPin = 3;
boolean lastButton = LOW;
int ledValue = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  boolean currentButton = deBounce(lastButton);
  if (currentButton == HIGH && lastButton == LOW) {
    ledValue = (ledValue + 51)%255;
    analogWrite(ledPin, ledValue);
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
