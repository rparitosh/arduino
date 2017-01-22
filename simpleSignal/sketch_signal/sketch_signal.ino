
int carRed = 2;
int carAmber = 4;
int carGreen = 7;

int pedRed = 13;
int pedGreen = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(carRed, OUTPUT);
  pinMode(carAmber, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  digitalWrite(carRed, LOW);
  digitalWrite(carAmber, LOW);
  digitalWrite(carGreen, LOW);
  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  loop1();
}

void loop1(){
  digitalWrite(pedRed, HIGH);
  digitalWrite(carRed, LOW);  
  digitalWrite(carGreen, HIGH);
  delay(9000); 
  digitalWrite(carGreen, LOW);
  digitalWrite(carAmber, HIGH);
  delay(2000); 
  digitalWrite(carAmber, LOW);
  digitalWrite(carRed, HIGH);
  digitalWrite(pedGreen, HIGH);
  digitalWrite(pedRed, LOW);
  delay(5000);
  digitalWrite(pedGreen, LOW);
  blinkPedRed();

 }

void blinkPedRed(){
  for (int i=0;i<3;i++){
    digitalWrite(pedRed,HIGH);
    delay(500);
    digitalWrite(pedRed,LOW);
    delay(500);
    }  
}
