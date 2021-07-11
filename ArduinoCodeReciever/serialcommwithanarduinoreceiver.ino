char mystr[100]; //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.readBytes(mystr,100); 
  Serial.println(mystr); 
  delay(60000);
}
