int arpin = A0;
int redLed = 10;
  
void setup() {
  // put your setup code here, to run once:
  //  Pin Mode init
  pinMode(arpin, INPUT);
  pinMode(redLed,OUTPUT);
  // BaudRate init
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(arpin);
  int val = (int)map(value, 0, 1023 , 255, 0);
  analogWrite(redLed, val);  
  Serial.println(value);  
}
