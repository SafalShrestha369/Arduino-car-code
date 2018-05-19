int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    char data = Serial.read();
    Serial.println(data);
    if (data == '1')
    {
      digitalWrite( led , HIGH);
    }
    else if (data == '0')
    {
      digitalWrite(led, LOW);
    }
     Serial.println(data);
  }
}
