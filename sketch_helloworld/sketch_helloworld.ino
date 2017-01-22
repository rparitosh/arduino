
int lightLed = 1;

void setup() {

  pinMode(lightLed, OUTPUT);

}

void loop() {
  digitalWrite(lightLed,HIGH);
  delay(300);
  digitalWrite(lightLed,LOW);
  delay(300); 
}


