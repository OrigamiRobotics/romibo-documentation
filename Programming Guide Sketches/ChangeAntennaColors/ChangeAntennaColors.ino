int timer = 0;
const int RED = 4;
const int BLUE = 10;
const int GRN = 9;

void setup() 
{
  pinMode (RED, OUTPUT);
  pinMode (GRN, OUTPUT);
  pinMode (BLUE, OUTPUT);
}

void loop()
{
  timer = 0;
  while (timer < 254)
  {
    analogWrite(RED, timer);
    timer++;
    delay (4);
  }
  for (int i = 0; i < 254; i++)
  {
    analogWrite(RED, timer - i);
    analogWrite(BLUE, i);
    delay (4);
  }
  timer = 0;
  do 
  {
   analogWrite(BLUE, 254 - timer);
   analogWrite(GRN, timer); 
   timer++;
   delay(4);
  }while (timer < 253);
  while (timer > 0)
  {
    analogWrite(GRN, timer);
    timer--;
    delay(3);
  }
} 

