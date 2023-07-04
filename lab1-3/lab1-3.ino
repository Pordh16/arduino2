int R = 9;
int G = 10;
int B = 11;
int POT1 = 0;
int POT2 = 1;
int POT3 = 2;
int RV, GV, BV;
void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(POT1, INPUT);
  pinMode(POT2, INPUT);
  pinMode(POT3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  RV = map(analogRead(POT1),0,255,0,1023);
  GV = map(analogRead(POT2),0,255,0,1023);
  BV = map(analogRead(POT3),0,255,0,1023);
  analogWrite(R, RV);
  analogWrite(G, GV);
  analogWrite(B, BV);
}
  
