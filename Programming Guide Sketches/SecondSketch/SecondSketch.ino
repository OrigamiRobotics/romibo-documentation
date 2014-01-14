boolean TurningRight;

void setup() 
{
  TurningRight = true;
  pinMode (2, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  pinMode (28, INPUT);
  pinMode (29, INPUT);
  pinMode (30, INPUT);
  pinMode (31, INPUT);
}

void loop()
{
  
//Once you press a touch switch, the robot will begin turning
//Pressing a touch switch again will make it turn the other way
if (digitalRead(28) == LOW || digitalRead(29) == LOW || digitalRead(30) == LOW || digitalRead(31) == LOW)
  {
    if (TurningRight == true)
    {
      TurningRight = false;
      digitalWrite (2, LOW);
      digitalWrite (7, HIGH);
      delay (250); 			//This delay will keep the button from being checked to quickly
    }
     else 
    {
      TurningRight = true;
      digitalWrite (2, HIGH);
      digitalWrite (7, LOW);
      delay (250);				 //This delay will keep the button from being checked to quickly
     }
  }
}


