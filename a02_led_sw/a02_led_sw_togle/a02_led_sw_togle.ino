

#define PORT10  10;
#define PORT9   9;
#define PORT8   8;

unsigned int sw = PORT8;
unsigned int led2 = PORT10;
unsigned int led1 = PORT9;
unsigned int curBtnState;  
unsigned int before;  
int btnCnt = 0;  


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(sw ,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  curBtnState = digitalRead(sw);  
  
  Serial.print(curBtnState); 
  Serial.print(" : ");
  Serial.print(before);
  Serial.print(" : ");
  Serial.println(btnCnt);

  if(curBtnState  == 1){
    if(before == 0){
      btnCnt++;
      before = 1;     
    }    
    if(before == 2)  {
      btnCnt++;
      before = 2;
    }
    if(before == 2)  {
      btnCnt++;
      before = 3;
    }
  }

  if(curBtnState == 0){
     before = 0;
  }

  switch(btnCnt){
    case 0:
      digitalWrite(led1, HIGH);
    break;
    case 1:
      digitalWrite(led2, HIGH);
    break;
    case 3:
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      btnCnt = 0;
    break;
  }
}
