void setup () 
{
  pinMode (8, OUTPUT) ;
}

void loop () 
{
  int i ;
  while (1) 
    {
      i = analogRead (6) ;
      if (i> 200) 
      {
        digitalWrite (18, HIGH) ;
      }
      else 
      {
        digitalWrite (18, LOW) ;
      }
    }
}
