void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  //写一个1
  digitalWrite(9, LOW);
  delay(10);
  digitalWrite(2,HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(9, HIGH);
  
  
  //写一个3
  digitalWrite(8, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(8, HIGH);
  
  
  //写一个1
  digitalWrite(7, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(7,HIGH);
  
  
  //写一个4
  digitalWrite(6, LOW);
  delay(10);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(6, HIGH);
  
  delay(100000);
}