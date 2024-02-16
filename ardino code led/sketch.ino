// the setup routine runs once when you press reset:
void setup() {
  int LED =4;
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  //goes for the led
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);
   // print out the value you read:
  Serial.println(knobValue);

  digitalWrite(4,LOW);
  
  if(knobValue >= 400){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }

}
