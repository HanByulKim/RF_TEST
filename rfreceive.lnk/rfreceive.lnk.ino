
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  
  char a;
  a=Serial.read();
  println(a);
  delay(1000);

}
