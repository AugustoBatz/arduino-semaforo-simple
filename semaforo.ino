//semaforo
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  delay(4000);
  for(int x=1;x<=9;x++)
  {
    digitalWrite(7,HIGH);
     delay(500);
     digitalWrite(7,LOW);
     delay(250);
  }
  digitalWrite(6,HIGH);
  delay(4000);
  digitalWrite(6,LOW);
  ///////////////////////////
  digitalWrite(5,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(4000);
  for(int x=1;x<=9;x++)
  {
    digitalWrite(4,HIGH);
     delay(500);
     digitalWrite(4,LOW);
     delay(250);
  }
  digitalWrite(3,HIGH);
  delay(4000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
