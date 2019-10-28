
int num1;
int num2;
int num3;

bool flag = 1;

int* numChk(int arr[], int arrSize);

void setup() {
  // put your setup code here, to run once:
  // 보레이트 설정 - 아두이노는 R 설정을 따로 하지 않아도 
  // 보레이만 설정하면 시리얼 통신 가능
  Serial.begin(9600);
  randomSeed(analogRead(A0)); 
  
  num1 = random(1, 10);
  num2 = random(1, 15);
  num3 = random(1, 15);  
  flag = true;

  Serial.println("Start..");
}

void loop() {
  // put your main code here, to run repeatedly:
  char getDataUser[3];
  int arr[3] = {0,}; 
  int i = 0;
  
  if(flag){
    numChk(arr, sizeof(arr)/sizeof(int));
    //flag = true;
  }   

  if(Serial.available()){
    char c = Serial.read();
    int i = 0;
    if(c != '/'){
      getDataUser[i] = c;
      Serial.print(c);
    } else {
      Serial.print(getDataUser[i]);      
      Serial.println();      
      i++;
    }    
  }   
}


int* numChk(int arr[], int arrSize){  
  int buf = 0;
  Serial.println("============ numChk ============ ");

  for(int i = 0; i < arrSize; i++){
    Serial.print("i : ");
    Serial.print(i);  
    buf = random(1,15);
    arr[i] = buf;
    
    if(i >= 0){
      while(arr[i] == arr[i-1]){
        arr[i] = random(1,15);        
        Serial.print(" arr[i] : ");
        Serial.print(arr[i]);
        Serial.print(" arr[i-1] : ");
        Serial.println(arr[i-1]);
      }
    }        
    Serial.print(" arr[i] : ");
    Serial.println(arr[i]);
  }
  
  flag = false;
}
