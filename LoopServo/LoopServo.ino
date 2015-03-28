
//Servo program for loop lessons
#include <Servo.h>

Servo myServo;//name your servo

//variable for servo position
int pos = 0;

//set max degrees to the farthest value
int maxDegrees;

void setup(){
  //using pin 9 to control the servo
  myServo.attach(9);
}

void loop(){
  
  while( pos <= 180 ){
    //write servo code here
  }
  
}
