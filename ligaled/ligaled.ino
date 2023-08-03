void setup() {
  for(int i=4;i<=13;i++){
    pinMode(i, 0);
  }
  
}

double tempo = 500;

void loop() {
  
  for(int i=13;i>=4;i--){

    digitalWrite(i, 1);
    delay(tempo);
      
    if(i==4){
      for(int i=4;i<=13;i++){

      digitalWrite(i, 0);
        delay(tempo);
      }
      
    }
  }
}
