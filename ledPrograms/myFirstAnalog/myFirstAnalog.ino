int ledAnalogPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAnalogPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i< 255 ; i ++){
    analogWrite(ledAnalogPin, i);
    delay(10);
    }
  delay(1000);
    for (int i = 255; i>= 0 ; i--){
  analogWrite(ledAnalogPin, i);
  delay(10);
  
  }
  delay(1000);
}
