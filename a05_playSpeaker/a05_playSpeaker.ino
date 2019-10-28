#define C 262 // 도
#define D 294 // 레
#define E 330 // 미
//6#define F 349 // 파
#define G 392 // 솔
#define A 440 // 라
#define B 494 // 시

int piezoPin = 11;
int tempo = 200;
int notes[25] = {G, G, A, A, G, G, E, G, G, E,
                  E, D, G, G, A, A, G, G, E, G,
                  E, D, E, C};

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(piezoPin, OUTPUT);
}

void loop() {  
  // put your main code here, to run repeatedly:

  if(Serial.available()){
    int on = 1;
    if(Serial.read() == '1'){
      for(int i = 0; i < 12; i++){
        tone(piezoPin, notes[i], tempo);
        delay(300);    
      }
      delay(100);
    
      for(int i = 12; i < 25; i++){
        tone(piezoPin, notes[i], tempo);
        delay(300);    
      }     
    } else {
      
    }
  }
}
