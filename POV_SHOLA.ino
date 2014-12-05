/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);     
pinMode(led2, OUTPUT);     
pinMode(led3, OUTPUT);     
pinMode(led4, OUTPUT);     
pinMode(led5, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
 //S 
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
   
  delay(2);               // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(6);               // wait for a second\
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(8);               // wait for a second
  
  //H
  
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
   
  delay(2);               // wait for a second
  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(6);               // wait for a second\
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);               // wait for a second
  
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(8);               // wait for a second
  
 //O
  
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);               // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(6);               // wait for a second\
  
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);
  
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(8);               // wait for a second\
  
  //L 
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);               // wait for a second
  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(6);               // wait for a second\
  
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(8);               // wait for a second\
  
 
 
 
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(2);               // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(4);               // wait for a second
  
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2);               // wait for a second
 digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, LOW);   // turn the LED on (HIGH is the voltage level)
                 
  delay(130);               // wait for a second
}
