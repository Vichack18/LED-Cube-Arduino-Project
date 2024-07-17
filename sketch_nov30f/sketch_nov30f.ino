int led[10]={13, 12, 11, 10, 9, 8, 7, 6, 5, 4};

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<10;i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
    for( int i=0;i<4;i++){
      for (int j=0;j<10;j++){
        digitalWrite(led[j], HIGH);
        delay(50);
      }
      for (int j=0;j<10;j++){
        digitalWrite(led[j], LOW);
        delay(50);
    }
  }
  for( int i=0;i<4;i++){
      for (int j=9;j>=0;j--){
        digitalWrite(led[j], HIGH);
        delay(50);
      }
      for (int j=9;j>=0;j--){
        digitalWrite(led[j], LOW);
        delay(50);
    }
  }
}