int BASE = 2;
int NUM = 6;

void setup () 
{
for (int i = BASE; i <= BASE*NUM; i+=2) 
  {
    pinMode (i, OUTPUT);
  }
}

void loop() 
{
  for (int i = BASE; i <= BASE*NUM; i+=2) 
  {
    digitalWrite (i, LOW);
    delay (250);
  }

  for (int i = BASE; i <= BASE * NUM; i+=2) 
  {
    digitalWrite (i, HIGH);
  }
}
