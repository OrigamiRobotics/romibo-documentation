int leftPhotoReading;
int rightPhotoReading;
const int PHOTOLEFT = 2;
const int PHOTORIGHT = 3;
const int FWDRT = 7;
const int FWDLEFT = 2;

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

  
  leftPhotoReading = analogRead(PHOTOLEFT);
  rightPhotoReading = analogRead(PHOTORIGHT);

  if(leftPhotoReading < rightPhotoReading - 30)
  {
    digitalWrite(FWDRT, HIGH);
    digitalWrite(FWDLEFT, LOW);
  }
  else if(rightPhotoReading < leftPhotoReading - 30)
  {
    digitalWrite(FWDRT, LOW);
    digitalWrite(FWDLEFT, HIGH);
  }
  else
  {
    digitalWrite(FWDRT, HIGH);
    digitalWrite(FWDLEFT, HIGH);
  }
}

