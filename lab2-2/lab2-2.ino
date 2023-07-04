int SW = A0;
int SWread = 0;

void setup() {
  pinMode(SW,INPUT);
  Serial.begin(9600);
}

void loop() {
  SWread = digitalRead(SW);
  if (SWread == HIGH) {
    Serial.println("Hello World");
  }
  else {
    Serial.println("Good Bye");
  }
}
