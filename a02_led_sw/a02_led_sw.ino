#define PORT10  10;
#define PORT8   8;
unsigned int sw = PORT8;
unsigned int led = PORT10;
unsigned int curent;  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(sw ,INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   
   curent = digitalRead(sw);
  
  Serial.println(curent);
  
  if(digitalRead(sw) == HIGH){
    digitalWrite(led, LOW);
  } else{
    digitalWrite(led, HIGH);
  }
}
