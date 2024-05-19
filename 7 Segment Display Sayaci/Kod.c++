int i;
void setup()
{
  for (i=2;i<=8;i++) pinMode(i, OUTPUT);
  pinMode(9,INPUT);
}
void loop()
{
  if(digitalRead(9)==1) yukarisay();
  if (digitalRead(9)==0) asagisay();
}

void yukarisay()
{
  sifir(); delay(1000);
  bir(); delay(1000);
  iki(); delay(1000);
  uc(); delay(1000);
  dort(); delay(1000);
  bes(); delay(1000);
  alti(); delay(1000);
  yedi(); delay(1000);
  sekiz(); delay(1000);
  dokuz(); delay(1000);
}

void asagisay()
{
  dokuz(); delay(1000);
  sekiz(); delay(1000);
  yedi(); delay(1000);
  alti(); delay(1000);
  bes(); delay(1000);
  dort(); delay(1000);
  uc(); delay(1000);
  iki(); delay(1000);
  bir(); delay(1000);
  sifir(); delay(1000);
}
void sifir() 
{
  for(i=2; i<=8; i++) digitalWrite(i, 1);
}

void bir() 
{
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  for(i =5; i<=8; i++) digitalWrite(i,0);
}

void iki() 
{
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}

void uc() 
{
  for(int i =2;i<=5;i++) digitalWrite(i, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}

void dort() 
{
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}

void bes()
{
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}

void alti()
{
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  for(i=4; i<=8; i++) digitalWrite(i, 1);
}

void yedi()
{
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  for(i =5; i<=8; i++) digitalWrite(i, 0);
}

void sekiz()
{
  for(i =2; i<=8; i++) digitalWrite(i, 1);
}

void dokuz()
{
  for(i =2;i<=5; i++) digitalWrite(i, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}