int arpin = A0;
int redLed = 10;

int threeLED1 = 3;
int threeLED2 = 5;
int threeLED3 = 6;

int sw1 = A0;
int sw2 = A1;
int sw3 = A2;
  
void setup() {
  // put your setup code here, to run once:
  //  Pin Mode init

  
  pinMode(arpin, INPUT);  
  pinMode(redLed,OUTPUT);

  pinMode(sw1, INPUT);  
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);

  pinMode(threeLED1, OUTPUT);
  pinMode(threeLED2, OUTPUT);
  pinMode(threeLED3, OUTPUT);
  
  // BaudRate init
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(arpin);
  int val = (int)map(value, 0, 1023 , 255, 0);
  
int swVal1 = digitalRead(sw1);
int swVal2 = digitalRead(sw2);
int swVal3 = digitalRead(sw3);
  
  analogWrite(redLed, val);    

//  if(swVal1 == HIGH){
//    digitalWrite(threeLED1, 50);
//    digitalWrite(threeLED2, 255);
//    digitalWrite(threeLED3, LOW);
//  }else if(swVal2 == HIGH){
//    digitalWrite(threeLED1, LOW);
//    digitalWrite(threeLED2, 50);
//    digitalWrite(threeLED3, LOW);
//  }else if(swVal3 == HIGH){
//    digitalWrite(threeLED1, 50);
//    digitalWrite(threeLED2, LOW);
//    digitalWrite(threeLED3, HIGH);
//  }

  if(digitalRead(swVal1) == 1 && digitalRead(swVal2)==1){
    for(int i = 0; i < 256; i++){
      for(int j = 0; j < 256; j++){
        for(int k = 0; k < 256; k++){
          analogWrite(threeLED1,i);
          analogWrite(threeLED2,j);
          analogWrite(threeLED3,k);

 Serial.print(swVal1);  
  Serial.print(" : ");  
  Serial.print(swVal2);  
  Serial.print(" : ");  
  Serial.println(swVal3);   
          delay(10);
        }
      }
    }
  }
}
