
/*
*Your Name and the names of your team members
*Today's Date
*/



int notes = {262,294,330,349}; //Frequency of nots C, D, E and F

/*
Another way to create the notes array would be as follows:

int notes[4];
notes[0] = 262;
notes[1] = 294;
notes[2] = 330;
notes[3] = 349;

*/
void setup()
{
  // This code will only run once, after each powerup or reset of the board
  Serial.begin(9600);
  
}

void loop()
{
  // This code will loops consecutively
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  
  //if and elses check which key was pressed if any
  if (keyVal == 1023){
    tone(8, notes[0]);
  }
  else if (keyVal >= 990 && keyVal <= 1010){
    tone(8, notes[1]); 
  }
  else if () {
    tone(8, notes[2]);
  }
  else if () {
    tone(8, notes[3]);
  }
  else {
    noTone(8); //if no buttons are pressed, play no Tone
  }
  
}
