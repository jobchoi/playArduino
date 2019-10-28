int maxVal = 0;
int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud rate
  pinMode(A0, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photoResistor = analogRead(A0);
//  int ledVal = map(photoResistor, 250, 870, 2, 0);
//  
//  if(maxVal <= photoResistor){
//    maxVal = photoResistor;
//  }


  int ledVal = map(photoResistor, 250, 870, 3, 0);

  if(photoResistor >= 0  && photoResistor <= 30) {
    ledVal = 0;
  } else if(photoResistor >= 31  && photoResistor <= 160){
    ledVal = 1;
  } else{
    ledVal = 2;
  }
  Serial.print(ledVal);
  Serial.print(" : ");
  Serial.println(photoResistor);  
  
  switch(ledVal){
    case 0:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
    break;
    case 1:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
    break;
    case 2:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
    break;
  }
  
  //analogWrite(ledPin,ledVal);
  
}
