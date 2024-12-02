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


void s()
{
  for (int i = 0; i<=50; i+=1)
 {
   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }

    delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(8,HIGH);

   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
    delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   delay(10);

 } 



}


void a()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,HIGH);
   }
   delay(10);
   digitalWrite(1,LOW);
   digitalWrite(10,LOW);
   digitalWrite(12,LOW);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }

   delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

  }
}

void n()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,HIGH);
   }
   delay(10);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(9,LOW);
   digitalWrite(12,LOW);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(5,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(7,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(13,HIGH);
   delay(10);
    
  }

}

void k()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,HIGH);
   }
   delay(10);
   digitalWrite(1,LOW);
   digitalWrite(9,LOW);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   
   delay(10);
   digitalWrite(5,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   
   delay(10);
   digitalWrite(4,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   
   delay(10);
   digitalWrite(3,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   
   delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   delay(10);

  }

}

void e()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,HIGH);
   }

   delay(10);
   digitalWrite(1,LOW);
   digitalWrite(9,LOW);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(8,HIGH);
   delay(10);

  }
}

void t()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,HIGH);
   }

   delay(10);
   digitalWrite(1,LOW);
   digitalWrite(11,LOW);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }

   delay(10);
   digitalWrite(2,HIGH);
   delay(10);


  }
}

void a5()
{
  for (int i = 0; i<=50; i+=1)
  {
    for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(8,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(10);

   for(int i = 1; i<=13; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(10);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   delay(10);

  }

}





void loop() {
 
s();
a();
n();
k();
e();
t();
a5();



}
