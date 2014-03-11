void setup()
{
  pinMode (2, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);

  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
}

void loop()
{

  digitalWrite (2, HIGH);
  digitalWrite (7, HIGH);
  delay(1000);
  
  digitalWrite (2, LOW);
  digitalWrite (7, LOW);
  delay(1000);
}

