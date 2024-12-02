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
}

void a()
{
  for (int i = 0; i<=500; i+=1)
  {
    for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,HIGH);
   }
   delay(1);
   digitalWrite(6,LOW);
   digitalWrite(10,LOW);
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }

   delay(1);
   
   digitalWrite(1,HIGH);
   digitalWrite(3,HIGH);
   
   delay(1);

  }
}

void m()
{
  for (int i = 0; i<=500; i+=1)
  {
    for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,HIGH);
   }
   delay(1);
   digitalWrite(6,LOW);
   digitalWrite(10,LOW);
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(2,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(3,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(2,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(10,HIGH);
   delay(1);
    
  }
}

void e()
{
  for(int i=0; i<=500; i+=1)
  {
    for(int i=1; i<=10; i+=1)
    {
      digitalWrite(i,HIGH);
    }
    delay(1);
    digitalWrite(6,LOW);
    delay(1);

    for(int i=1; i<=10; i+=1)
    {
      digitalWrite(i,LOW);
    }
    delay(1);
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    delay(1);
  }
}

void y()
{
  for(int i=0; i<=500; i+=1)
  {
   for(int i=1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(1,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
  
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(2,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(10,HIGH);
   delay(1);

   for(int i = 1; i<=10; i+=1)
   {
     digitalWrite(i,LOW);
   }
   delay(1);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   delay(1);
   

   }
}
void stop() {
  for(int i=1; i<=10; i+=1)
  {
    digitalWrite(i,LOW);
  }
  delay(200);
  }
  
  void stop1() {
  for(int i=1; i<=10; i+=1)
  {
    digitalWrite(i,LOW);
  }
  delay(2000);
}


void loop() {
  a();
  stop();
  m();
  stop();
  e();
  stop();
  y();
  stop1();
}