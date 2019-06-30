int analogPin = A0;
int ledCount = 6;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading=analogRead(analogPin);
  Serial.println(sensorReading);
  delay(1);
  
}
