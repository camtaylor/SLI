
int buttonPin = 2;

int buttonState = 0;
int pushed = HIGH;

void setup(){
  Serial.begin(9600);
  
  pinMode(buttonPin, INPUT);
  
}

void loop(){
 
  buttonState = digitalRead(buttonPin);
  
  //is the button pushed?
  if(buttonState == pushed) {
    //if it is then print a message
    Serial.println("Button pushed!");
  }
  else {
    Serial.println("Button not pushed");
  }
  
  delay(500);
}
