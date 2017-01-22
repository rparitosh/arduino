int switchPin = 8;
int ledPin = 13;
boolean lastInput = LOW;
boolean lastOutput = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH && lastInput == LOW){
    lastOutput = !lastOutput;
    digitalWrite(ledPin, lastOutput);
    
  }
  lastInput = digitalRead(switchPin);
}
