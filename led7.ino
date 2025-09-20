const int segmentPins[8] = {8,9,11,12,13,7,6,10}; // khai bao mang 1 chieu dieu khien led 7 doan (A,B,C,D,E,F,G,DP)
int buttonPin = 3;  // khai bao chan digital ket noi chan nut nhan
int i=0;
const byte  number[10]={
  B00111111,  //0
  B00000110,  //1
  B01011011,  //2
  B01001111,  //3
  B01100110,  //4
  B01101101,  //5
  B01111101,  //6
  B00000111,  //7
  B01111111,  //8
  B01101111,  //9
};
void setup() {
  for (int spot =0 ;spot<8;spot++)
  {
    pinMode(segmentPins[spot], OUTPUT);
    digitalWrite(segmentPins[spot], LOW);
  }
  pinMode(buttonPin, INPUT_PULLUP);
  Hienthiso (0);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(buttonPin)== LOW )
  {
    i=i+1;
    while (digitalRead(buttonPin)== 0);
    delay(200);
    if (i==10)  i=0;
  }
  Hienthiso(i);

  // put your main code here, to run repeatedly:

}
void Hienthiso(int n)
{
  boolean x;
  for (int segment=0;segment<8;segment++)
  {
    x=bitRead(number[n],segment);
    digitalWrite(segmentPins[segment],x);

  }
}
