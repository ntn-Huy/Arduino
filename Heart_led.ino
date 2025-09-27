int const led[8]={2,3,4,5,6,7,8,9}; 
void setup() {
  for (int i=0;i<8;i++)
  {
    pinMode(led[i],OUTPUT);  
    digitalWrite(led[i],LOW);  
  }


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<8;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(700);
  }

  for (int i=0;i<8;i++)
  {
    digitalWrite(led[i],LOW);
    delay(200);
  }
  for(int time=0;time<8;time++)
  {
    for (int i=0;i<8;i++)
  {
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for (int i=0;i<8;i++)
  {
    digitalWrite(led[i],LOW);
  }
  delay(500);
  }
}
