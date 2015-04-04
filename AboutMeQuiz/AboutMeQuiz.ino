
const int testLength = 4;
String questions[testLength];
String answers[testLength];
int score;
String name;

void setup(){
 
  Serial.begin(9600);
  score = 0;
  //change these to your own questions and name
  name = "Mr. Taylor";
  questions[0] = "Is blue my favorite color?";
  questions[1] = "Yes or No, do I go to SJSU?";
  questions[2] = "What is my middle name?";
  questions[3] = "rue or False, I have lived in California my whole life?";

  answers[0] = "red";
  answers[1] = "yes";
  answers[2] = "gregory";
  answers[3] = "yes";
  
  Serial.println("Hello this is " + name + "'s about me quiz.");
}

void loop(){
  Serial.println("********************");
  int index = 0;
  char character;
  String userAnswer;
  
  //while we have questions left
  while(index < testLength){
    userAnswer = "";
    Serial.flush();
    Serial.println(questions[index]);
    //wait for user input
    while(!Serial.available());
    //read input
    while(Serial.available()) {
      character = Serial.read();
      userAnswer.concat(character);
      delay(1000);
    }
    if( userAnswer == answers[index] ){
      Serial.println("Correct!");
    }
    index = index + 1;
  }

}
