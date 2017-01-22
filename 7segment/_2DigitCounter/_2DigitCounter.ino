int pin0= 0;
int selectedNumber = 0;

int switchPin = 11;
boolean lastButton = LOW;

int pinOnes = 13;
int pinTens = 12;



  int numbers[][8] = {
    {1,2,4,5,7,0,8,8},  //0
    {8,1,2,8,8,8,8,8},  //1
    {1,4,5,6,0,8,8,8},  //2
    {0,1,6,2,4,8,8,8}, //3
    {1,2,7,6,8,8,8,8}, //4
    {0,7,6,2,4,8,8,8}, //5
    {0,7,6,2,4,5,8,8}, //6
    {0,1,2,8,8,8,8,8}, //7
    {0,1,2,4,5,6,7,8}, //8
    {0,1,6,7,4,2,8,8} //9
 //   {7,5,6,1,2,0,8,8} //.
        };
  

void setup() {
  // put your setup code here, to run once:
   pinMode(8,OUTPUT);
   pinMode(switchPin,INPUT);
      digitalWrite(8,LOW);
    for (int i=0; i<=7; i++){
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);
    }
  pinMode(pinOnes, OUTPUT);
  pinMode(pinTens, OUTPUT);
  digitalWrite(pinOnes, LOW);
  digitalWrite(pinTens, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (isSwitchPressed()){
    selectedNumber++;
    selectedNumber=selectedNumber%100;
   }

  displayNumber(selectedNumber/10,pinTens);
  displayNumber(selectedNumber%10,pinOnes);
}

void displayNumber(int num, int location){
      int* narr = numbers[num];
      int prevLed = narr[7] ;

      digitalWrite(location, HIGH);
      for (int i=0; i<8; i++){
        digitalWrite(prevLed,HIGH);
        digitalWrite(narr[i],LOW);
        prevLed = narr[i];
      }
      digitalWrite(location, LOW);
}

boolean isSwitchPressed(){
  
  boolean currentButton = deBounce(lastButton);
  if (currentButton == HIGH && lastButton == LOW) {
    lastButton = currentButton;
    return true;
  }else{
    lastButton = currentButton;
    return false;
  }
  
}


boolean deBounce(boolean last) {
  boolean current = digitalRead(switchPin);
  if (current != last) {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
  

