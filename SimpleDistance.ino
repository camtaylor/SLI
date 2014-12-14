
#define echoPin 7
#define trigPin 8

long duration, distance, inches;
int wait;

long microsecondsToInches(long);
long microsecondsToCentimeters(long);

void setup()
{
  // This code will only run once, after each powerup or reset of the board
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  wait = 100;
}

void loop()
{
  // This code will loops consecutively
  // Send out pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  
  delay(20);
  Serial.println(inches);
  delay(wait);
  
}

long microsecondsToInches(long microseconds){
  
  // sounds travels at 1130 feet per second
  // therefore there are 73.746 microseconds in an inch
  // divide by two to get distance
  
  return microseconds / 74 / 2;
  
}

long microsecondsToCentimeters(long microseconds){
  
  //speed of sound is 340 m/s or 29 microseconds per cm
  
  return microseconds / 29 / 2;
}
