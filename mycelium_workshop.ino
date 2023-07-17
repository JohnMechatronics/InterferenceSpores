
//This code reads the values of a voltage devider and sends the readings back to the pc via Serial.

int spike = 0;   //variable to hold the reading from the voltage devider

void setup() {
  Serial.begin(9600); 
  analogReference(INTERNAL); //lower arduino voltage ref to 1.1v
}

void loop() {
  spike = analogRead(A0); //read analogue pin 0 and place the results in the variable spike
  Serial.println(spike); // send the readings via serial back to arduino
  delay(50); // delay for 50 miliseconds
}
