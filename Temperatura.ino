

void setup() {

  for(int i = 0 ; i < 12 ; ++i)
  {
    pinMode(i,OUTPUT);
  }
  
}


//fgdfgfdgfdg
void loop() {

  for(int i = 0 ; i < 8 ; ++i)
  {
    digitalWrite(i, HIGH);
  }

  for(int i = 8 ; i < 12 ; ++i)
  {
    digitalWrite(i, LOW);
  }  

}
