#define PORT10  10;
#define PORT8   8;
unsigned int sw = PORT8;
unsigned int led = PORT10;
  
void setup() {
  // put your setup code here, to run once:

  pinMode(sw ,INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, LOW);
  
  if(digitalRead(sw) == LOW){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
}
