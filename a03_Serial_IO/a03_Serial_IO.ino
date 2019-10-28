int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available()){
    char c = Serial.read();

    count++;
    Serial.print(count);
    Serial.print(" : ");
    
    if(c != '/'){
      Serial.print(c);
    } else {
      Serial.println();      
    }
  }
}
