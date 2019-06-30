void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorReading=analogRead(A0);
  Serial.println(sensorReading);
  int thisPitch=map(sensorReading,500,900,120,1500);
  tone(9,thisPitch,10);
  delay(1);
}
