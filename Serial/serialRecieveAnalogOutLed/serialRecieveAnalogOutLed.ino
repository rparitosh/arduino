int potPin = 0;
int ledPin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(potPin);

  int ledVal = map(val,500,1023,255,0);
  analogWrite(ledPin,ledVal);
  delay(5);
}
