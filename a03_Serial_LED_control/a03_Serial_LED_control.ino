int count = 0;

#define LED1  2
#define LED2  3
#define LED3  4
void setup() {
  // put your setup code here, to run once:  
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 // while(true){
  //while(Serial.available()){
    

  //  count++;
//    Serial.print(count);
 //   Serial.print(" : ");
    
//    if(c == '1'){
//      digitalWrite(LED1, HIGH);
//      Serial.println(c);
//    } else if(c == '2'){
//      digitalWrite(LED2, HIGH);
//      Serial.println(c);
//    } else if(c == '3'){
//      digitalWrite(LED3, HIGH);
//      Serial.println(c);
//    } else{
//      for(int i = 2; i < 5; i++){
//        digitalWrite(i, LOW);  
//         Serial.println(c);
//      }

//    for(int i = 2; i< 5; i++){
//      digitalWrite(i, HIGH);      
//      delay(1000);
//    }
//    for(int i = 2; i< 5; i++){
//      digitalWrite(i, LOW);      
//      delay(1000);
//    }

    if(Serial.available()){
      char c = Serial.read();
      if(c == '1'){
        Serial.println(c);
        digitalWrite(LED1, HIGH);      
        digitalWrite(LED2, LOW);      
        digitalWrite(LED3, LOW);      
      } 
      if(c == '2'){
        Serial.println(c);
        digitalWrite(LED1, LOW);      
        digitalWrite(LED2, HIGH);      
        digitalWrite(LED3, LOW);      
      }
      if(c == '3'){
        Serial.println(c);
        digitalWrite(LED1, LOW);      
        digitalWrite(LED2, LOW);      
        digitalWrite(LED3, HIGH);      
      }
    }        
  //}
}
