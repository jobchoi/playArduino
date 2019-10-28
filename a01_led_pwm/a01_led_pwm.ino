  int ledGreen = 11;
  int ledRed = 10;

void setup() {
  // put your setup code here, to run once:
  
  
  pinMode(ledRed   , OUTPUT);
  pinMode(ledGreen , OUTPUT);
}

void loop() {  

  
  int j = 255;
  for(int i = 0; i < 256; ){
    analogWrite(ledGreen, j);
    i++;
    
    analogWrite(ledRed, i0);
    j--;
        
    delay(50);
    if(j<=0){
      j = 255;
      i = 0;
    }
  }
}
