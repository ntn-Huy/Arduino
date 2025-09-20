int led=12;
int bottom=3;
bool bat=false;  
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(bottom,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int press=digitalRead(bottom);
  if(press==1&&bat==false)
  {
    digitalWrite(led,HIGH);
    bat=true;
    delay(50);
    // digitalWrite(led,LOW);
    // delay(1000);
  }
  else if(press==1&&bat==true)
  {
    digitalWrite(led,LOW);
    bat=false;
    delay(50);
  }
}
