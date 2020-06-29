int CW=13;
int CCW=7;

void setup()
{
  pinMode(CW, OUTPUT);
  pinMode(CCW, OUTPUT);
}

void loop()
{
 digitalWrite(CW,HIGH);
  digitalWrite(CCW,LOW);
  delay(1000); 
  digitalWrite(CW, LOW);
  digitalWrite(CCW, HIGH);
  delay(1000); 

}
