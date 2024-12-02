int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;
int ledPin10 = 10;
int ledPin11 = 11;
int ledPin12 = 12;
int ledPin13 = 13;

void setup() {
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

}

void fead(){

  

    for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5)
    {
    
      analogWrite(ledPin1, fadeValue);
      analogWrite(ledPin2, fadeValue);
      analogWrite(ledPin3, fadeValue);
      analogWrite(ledPin4, fadeValue);
      analogWrite(ledPin5, fadeValue);
      analogWrite(ledPin6, fadeValue);
      analogWrite(ledPin7, fadeValue);
      analogWrite(ledPin8, fadeValue);
      analogWrite(ledPin9, fadeValue);
      analogWrite(ledPin10, fadeValue);
      analogWrite(ledPin11, fadeValue);
      analogWrite(ledPin12, fadeValue);
      analogWrite(ledPin13, fadeValue);
      delay(50);
    }

    for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5)
    {
      analogWrite(ledPin1, fadeValue);
      analogWrite(ledPin2, fadeValue);
      analogWrite(ledPin3, fadeValue);
      analogWrite(ledPin4, fadeValue);
      analogWrite(ledPin5, fadeValue);
      analogWrite(ledPin6, fadeValue);
      analogWrite(ledPin7, fadeValue);
      analogWrite(ledPin8, fadeValue);
      analogWrite(ledPin9, fadeValue);
      analogWrite(ledPin10, fadeValue);
      analogWrite(ledPin11, fadeValue);
      analogWrite(ledPin12, fadeValue);
      analogWrite(ledPin13, fadeValue);
      delay(50);
    }
  }


void run()
{


    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
      delay(100);
    }

    for(int i=13; i>=1; i -=1)
    {
      digitalWrite(i,LOW);
      delay(100);
    }

  }



void cheas()
{

    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
      delay(100);
    }

    for(int i=1; i<=13; i += 1)
    {
      digitalWrite(i,LOW);
      delay(100);
    }
  

}
void fast()
{

  for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
      delay(100);
      int j=i-1;
      digitalWrite(j,LOW);
    }
}


void rfast()
{
  
    for(int i=13; i>=1; i -=1 )
    {
      digitalWrite(i,HIGH);
      delay(100);
      int j=i+1;
      digitalWrite(j,LOW);
    }
  }


void off()
{
  
    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
    }
    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,LOW);
      delay(100);
      int j=i-1;
      digitalWrite(j,HIGH);
    }
    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
    }
    for(int i=13; i>=1; i -=1 )
    {
      digitalWrite(i,LOW);
      delay(100);
      int j=i+1;
      digitalWrite(j,HIGH);
    }
  }


void midle()
{
 
    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,LOW);
    }
    int k[8]={0,1,2,3,4,5,6,7};
    for (int i=7; i>=1; i -=1)
    {
      digitalWrite(i,HIGH);
      int j= 14-k[i];
      digitalWrite(j,HIGH);
      delay(100);
    }
    for (int i=1; i<=7; i +=1)
    {
      digitalWrite(i,LOW);
      int j= 14-k[i];
      digitalWrite(j,LOW);
      delay(100);
    }
    
  
}

void blink()
{

    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,HIGH);
    }
    delay(100);
  
    for(int i=1; i<=13; i +=1 )
    {
      digitalWrite(i,LOW);
    }
    delay(100);
  
}

void loop() {

  for(int i=0; i<=5; i += 1){
  fead();
  }
for(int i=0; i<=4; i += 1){
  run();
}
for(int i=0; i<=4; i += 1){
  cheas();
 }
for(int i=0; i<=4; i += 1){
  fast();
 }
for(int i=0; i<=4; i += 1){
  rfast();
 }
for(int i=0; i<=20; i += 1){
  off();
 }
for(int i=0; i<=20; i += 1){
  midle();
 }
for(int i=0; i<=100; i += 1){
  blink();
}


}
