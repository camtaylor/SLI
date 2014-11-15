void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100/10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
  
}

//write a function that adds two numbers and returns the sum
int add(){
  
}

//write a function that multiplies two integers and returns the total
int multiply(){
  
}

//write a function that divides the first parameter by the second
int divide(){
  
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(){
  
  String response;
  //complete the if statement
  if(){
    
  }
  else{
    response = "Not my favorite";
  }
  return response;
}





