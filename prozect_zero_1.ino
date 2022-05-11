int en1 = 10;
int en2 = 11;
void setup() {
  //sensor pin
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(12,INPUT);
//motor pin
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
//enable pin 
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
bool sr=digitalRead(7);
bool sm=digitalRead(8);
bool sl=digitalRead(12);

  if(sr==0&&sm==1&&sl==0){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  analogWrite(en1, 255);
  analogWrite(en2, 255);
  }
 
  else if(sr==0&&sm==1&&sl==1){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  analogWrite(en1, 200);
  analogWrite(en2, 200);
  }
  else if(sr==1&&sm==1&&sl==0){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
  analogWrite(en1, 200);
  analogWrite(en2, 200);
}

  else if(sr==0&&sm==0&&sl==1){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  analogWrite(en1, 0);
  analogWrite(en2, 200);
  }

  else if(sr==1&&sm==0&&sl==0){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  analogWrite(en1, 200);
  analogWrite(en2, 0);
  }
}
