int sensorPin =A0; //input pins for LDR
int sensorValue =0; // variable for storing value
int led = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //sets serial ports for communication
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(1000);
  if(sensorValue< 241)
  {
    digitalWrite(led, HIGH);
    }
    else
{digitalWrite(led, LOW);
}
}
