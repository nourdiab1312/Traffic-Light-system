int pushButton=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  pushButton=digitalRead(7);
  if(pushButton==HIGH)
  {
  digitalWrite(13, HIGH);
  }
    else{
  digitalWrite(13, LOW);
    }
  delay(10); 
}
