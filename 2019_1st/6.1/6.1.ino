int r=6;
int g=5;
int b=3;
int button=2;
int val=0;
int color=0;
int lastButtonState=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(button,INPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  val=digitalRead(button);

  if(val != lastButtonState){
    if(val==1){
      color=random(1,4);
      Serial.println(color);
    }
  }
  if(color==1){
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(b,LOW);
  }
  else if(color==2){
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(b,LOW);
  }
  else if(color==3){
    digitalWrite(r,LOW);
    digitalWrite(g,LOW);
    digitalWrite(b,HIGH);
  }
  lastButtonState=val;
}
