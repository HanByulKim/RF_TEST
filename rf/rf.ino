int b=0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  Serial.write("a");
  delay(1000);
  
  if(Serial.available()>0){
    b = Serial.read();
    Serial.println(b,DEC);
    delay(1000);
  }
  
}
