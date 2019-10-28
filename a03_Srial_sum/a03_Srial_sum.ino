int sum = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  if(Serial.available()){
    int num = Serial.parseInt();
    Srial.print(sum);
    Srial.print(" + ");
    Srial.print(" = ");
    sum += num;
    Srial.println(sum);    
  }
}
