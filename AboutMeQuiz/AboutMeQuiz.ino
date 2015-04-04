
const int testLength = 4;
String questions[testLength];
String answers[testLength];
int score;
String name;

void setup(){
 
  Serial.begin(9600);
  score = 0;
  //change these to your own questions and name
  name = "Arav Chheda";
  questions[0] = "What is my favorite color?";
  questions[1] = "What phone do I have right now?";
  questions[2] = "How old am I?";
  questions[3] = "What is the name of my second period teacher?";

  answers[0] = "blue";
  answers[1] = "iphone";
  answers[2] = "13";
  answers[3] = "mrs. wirth";
  
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
    //print question
    Serial.println(questions[index]);
    //wait for user input
    while(!Serial.available());
    //read input
    while(Serial.available()) {
      character = Serial.read();
      userAnswer.concat(character);
      delay(100);
    }
    if( userAnswer == answers[index] ){
      Serial.println("Correct!");
      score = score + 1;
      Serial.println("Your score is ");
      Serial.println(score);
    }
    else {
      Serial.println("You must not know me very well!");
      Serial.println("The answer was...");
      Serial.println(answers[index]);
    }
    index = index + 1;
  }

}
