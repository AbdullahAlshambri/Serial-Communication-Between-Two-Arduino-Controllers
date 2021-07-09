char mystr[100] = "https://www.s-m.com.sa/"; //String data

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  Serial.write(mystr,100); 
  delay(60000);
}
