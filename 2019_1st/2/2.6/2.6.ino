
const int analogInPin=A0;
const int analogOutPin=9;
const int analogOutPin2=10;

int sensorValue=0;
int outputValue=0;
int outputValue2=0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(analogInPin);
  outputValue=map(sensorValue,0,1023,0,255);
  outputValue2=map(sensorValue,0,1023,225,0);
  analogWrite(analogOutPin,outputValue);
  analogWrite(analogOutPin2,outputValue2);
}
