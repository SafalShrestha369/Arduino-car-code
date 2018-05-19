int sensorPin = A0;
int led = 13;
int sensorValue =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 1000)
  {
    digitalWrite(led, LOW);
    digitalWrite(7, LOW);
    
  }
  else
  {
    digitalWrite(led, HIGH);
     digitalWrite(7, HIGH);
  }
}
