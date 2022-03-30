int Red = 12;
int green = 10;
int yellow = 8;
  
void setup()
{
  pinMode(Red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
}

void loop()
{
  digitalWrite(Red,HIGH); 
  digitalWrite(Red,LOW);
  delay(9000); 
  
  digitalWrite(green,HIGH);
  digitalWrite(green,LOW); 
  delay(5000);
  
  digitalWrite(yellow,HIGH);
  digitalWrite(yellow,LOW);
  delay(9000);
}