int led1=9;
int led2=10;
int led3=11;
int led4=12;
int switchpin1 =4;
int switchpin2 =7;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(switchpin1,INPUT);
  pinMode(switchpin2,INPUT);
}
void loop(){
  if(digitalRead(switchpin1)){
    digitalWrite(led1,HIGH);
    analogWrite(led2,127);}
    else{
      digitalWrite(led1,LOW);
      analogWrite(led2,0);}

if(digitalRead(switchpin2)){
    digitalWrite(led4,HIGH);
    analogWrite(led3,127);}
    else{
      digitalWrite(led4,LOW);
      analogWrite(led3,0);}
  }