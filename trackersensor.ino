// connect the sensors to digital pins
#define LEFT_SENSORPIN 4
#define CENTER_SENSORPIN 5
#define RIGHT_SENSORPIN 6
 int buz = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(LEFT_SENSORPIN,INPUT);
  pinMode(CENTER_SENSORPIN,INPUT);
  pinMode(RIGHT_SENSORPIN,INPUT);
  pinMode(buz, OUTPUT);
}
 
void loop()
{
  // read input from sensors
  byte leftSensor=digitalRead(LEFT_SENSORPIN);
  byte centerSensor=digitalRead(CENTER_SENSORPIN);
  byte rightSensor=digitalRead(RIGHT_SENSORPIN);
 
  Serial.print(" Left : ");
  Serial.print(leftSensor);
  Serial.print(" Centre : ");
  Serial.print(centerSensor);
  Serial.print(" Right : ");
  Serial.print(rightSensor);
  Serial.println();
  delay(100);
  if(leftSensor == 1 && rightSensor ==1 )
  {
    digitalWrite(buz, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(buz, LOW);
    delay(100);
  }
}
