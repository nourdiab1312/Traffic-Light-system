 int red=11;
int yellow=6;
int green=5;
void setup()
{
 pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
 digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);
  for(int i=0;i<3;i++){
   digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
    delay(1000);}
   digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  
  
}
