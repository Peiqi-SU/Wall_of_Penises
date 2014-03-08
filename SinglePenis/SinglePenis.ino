#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 
// a maximum of eight servo objects can be created 

int pos = 90;    // variable to store the servo position 

int penisState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated
long interval = 3000; 

void setup() 
{ 
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object 
  pinMode(13, OUTPUT); 
} 


void loop() 
{ 
  if (penisState) pos=15;
  else pos=180;
  myservo.write(pos);
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;   
    penisState = !penisState;
    digitalWrite(13, penisState);
  }
}
