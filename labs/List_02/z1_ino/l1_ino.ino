/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int blue = 6; //In3
int green = 5; //In4
int grey = 4; //In1
int purple = 3; //In2
int yellow = 11;
int white = 10;
// the setup routine runs once when you press reset:
void setup() {                
  pinMode(grey,OUTPUT);
  pinMode(purple,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(white,OUTPUT); 
  
  
  
  
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(yellow,80);
  analogWrite(white,120);
  digitalWrite(grey, HIGH);   // turn the LED on (HIGH is the voltage level)              // wait for a second
  digitalWrite(purple, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  

}
