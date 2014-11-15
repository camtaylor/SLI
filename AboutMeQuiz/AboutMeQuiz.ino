const int numberOfQuestions = 4;
String questions[numberOfQuestions];
String name;
int currentQuestion;
int score;


int falseButtonState = 0;
int trueButtonState = 0;

const int trueButtonPin = 2;
const int falseButtonPin = 8;
const int pushed = HIGH;

void setup(){

  Serial.begin(9600);
  pinMode(trueButtonPin, INPUT);
  pinMode(falseButtonPin, INPUT);
  currentQuestion = 0;
  score = 0;
  
  //change these to your own questions and name
  name = "Mr. Taylor";
  questions[0] = "Is blue my favorite color?";
  questions[1] = "Do I go to SJSU?";
  questions[2] = "Is my middle name Thomas?";
  questions[3] = "Have I lived in California my whole life?";
  
  Serial.println("Hello this is " + name + "'s about me quiz.");
}

void loop(){
  Serial.println("********************");
  Serial.println(questions[currentQuestion]);
  while(trueButtonState == 0 && falseButtonState == 0){
    trueButtonState = digitalRead(trueButtonPin);
    falseButtonState = digitalRead(falseButtonPin);
  }
  //is the button pushed?
  if(trueButtonState == pushed) {
    //if it is then print a message
    delay(500);
    switch(currentQuestion){
      case 0:
        Serial.println("Wrong Answer, it is actually Red!");
        break;
      case 1:
        Serial.println("You're right! I go to SJSU and study Software Engineering.");
        score = score + 1;
        break;
      case 2:
        Serial.println("Wrong Answer, my middle name is Gregory!");
        break;
      case 3:
        Serial.println("Right! I have lived in CA my whole life!");
        score = score + 1;
        break;
    }
    delay(1000);
  }
  else if(falseButtonState == pushed){
    delay(500);
    switch(currentQuestion){
      case 0:
        Serial.println("You're right! Red is my favorite color.");
        score = score + 1;
        break;
      case 1:
        Serial.println("Wrong Answer, I go to SJSU and study Software.");
        break;
      case 2:
        Serial.println("Right! My middle name is Gregory not Thomas.");
        score = score + 1;
        break;
      case 3:
        Serial.println("Nope! I have lived here my whole life.");
        break;
    }
    delay(2000);
  }
  //reset buttons to zero
  trueButtonState = 0;
  falseButtonState = 0;
  //check to make sure we have another question
  if(currentQuestion < numberOfQuestions - 1){
    currentQuestion = currentQuestion + 1;
  }
  else{
    currentQuestion = 0;
    Serial.println("*********************");
    Serial.print("Your score was: ");
    Serial.print(score);
    Serial.print(" out of ");
    Serial.println(numberOfQuestions);
    Serial.println("*********************");
    score = 0;
    Serial.println("Hello this is " + name + "'s about me quiz.");
    delay(10000);
  }

}
