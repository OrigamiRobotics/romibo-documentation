int leftPhotoReading;
int rightPhotoReading;
const int PHOTOLEFT = 2;
const int PHOTORIGHT = 3;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  leftPhotoReading = analogRead(PHOTOLEFT);
  rightPhotoReading = analogRead(PHOTORIGHT);
  
  Serial.print("leftPhotoReading ");
  Serial.println(leftPhotoReading);
  
  Serial.print("rightPhotoReading ");
  Serial.println(rightPhotoReading);
  
  delay(300);
}

