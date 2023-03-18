/*
This program has the goal of counting
from 0 to 9 on 7-segment using for loop for pinmode
*/


void setup(){
  for(int Pin=2;Pin<=8;Pin++){//repeats loop 7 times to setup pinmodes from 2-8
  pinMode(Pin,OUTPUT);//set's pinmode of current value of loop
}
}


void loop(){
  //Turns on all outputs for zero
  digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(4, HIGH);//turn on pin 4
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500); //programs stops for 0.5 seconds
//Turns off all outputs
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  
  //Turns on all outputs for one
  digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  delay(500);//programs stops for 0.5 seconds
  //Turns off all outputs  
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for two
  digitalWrite(8, HIGH); //turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(5, HIGH);//turn on pin 5
  digitalWrite(4, HIGH);//turn on pin 4
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500);//programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for three
  digitalWrite(8, HIGH); //turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(5, HIGH);//turn on pin 5
  digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500);//programs stops for 0.5 seconds
  //Turns off all outputs
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for four
  digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(5, HIGH);//turn on pin 5

  delay(500); //programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for 5
    digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(5, HIGH);//turn on pin 5
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500); //programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  
  //Turns on all outputs for 6
   digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(5, HIGH);//turn on pin 5
  digitalWrite(4, HIGH);//turn on pin 4
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500); //programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  
  //Turns on all outputs for 7
   digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  delay(500); //programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for eight
  digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(5, HIGH);//turn on pin 5
  digitalWrite(4, HIGH);//turn on pin 4
  digitalWrite(3, HIGH);//turn on pin 3
  delay(500); //programs stops for 0.5 seconds
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  //Turns on all outputs for 9
    digitalWrite(2, HIGH);//turn on pin 2
  digitalWrite(8, HIGH);//turn on pin 8
  digitalWrite(7, HIGH);//turn on pin 7
  digitalWrite(6, HIGH);//turn on pin 6
  digitalWrite(5, HIGH);//turn on pin 5
  delay(500);//programs stops for 0.5 seconds 
  //Turns off all outputs 
  digitalWrite(8,LOW);//turn off pin 8
digitalWrite(7,LOW);//turn off pin 7
digitalWrite(6,LOW);//turn off pin 6
digitalWrite(5,LOW);//turn off pin 5
digitalWrite(4,LOW);//turn off pin 4
digitalWrite(3,LOW);//turn off pin 3
digitalWrite(2,LOW);//turn off pin 2
  delay(500);//programs stops for 0.5 seconds
  
}