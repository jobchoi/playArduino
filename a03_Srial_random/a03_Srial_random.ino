#define LED_NG  3
#define LED_OK  2

int setRandom();
void ledOnOff(int flag);

int num1 = 0;
int chknum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //  아날로그 0번을 seed값으로 초기화 한다.
  randomSeed(analogRead(A0));
  
  pinMode(LED_NG, OUTPUT);
  pinMode(LED_OK, OUTPUT);
  
  Serial.println("Making Random Number...");
  Serial.println("Let's Start ");
  setRandom();
  num1 = setRandom();  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int chknum = Serial.parseInt();
    Serial.print("chknum : ");
    Serial.println(chknum);
    Serial.print("num1 : ");
    Serial.println(num1);
    
    if(chknum == num1){
      Serial.println(chknum);
      ledOnOff(1);
      Serial.print("맞았습니다");
    } else{
      Serial.print(chknum);
      ledOnOff(0);
      Serial.println(" : Fail");
    }
  }  
}

int setRandom(){
  Serial.println(" : Sucess");  
  Serial.println("Again Makin Random");
  num1 = random(1,10); 
  return num1; 
}

void ledOnOff(int flag){
  switch(flag){
    case 1:
      Serial.println("LED OK");      
      digitalWrite(LED_OK, HIGH);
      delay(2000);
      digitalWrite(LED_OK, LOW);
    break;
    case 0:
      Serial.println("LED NG");
      digitalWrite(LED_NG, HIGH);
      delay(2000);
      digitalWrite(LED_NG, LOW);      
    break;
    default:
      digitalWrite(LED_NG, LOW);
      digitalWrite(LED_OK, LOW);
      delay(2000);
    break;
  }  
}
