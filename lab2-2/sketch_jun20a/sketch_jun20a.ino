#define led1 2
#define led2 3
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(300);
digitalWrite(led1,LOW);
delay(300);

digitalWrite(led2,HIGH);
delay(300);
digitalWrite(led2,LOW);
delay(300);
}
