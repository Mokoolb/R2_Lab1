/*
This program has the goal of counting
from 0 to 9 on 7-segment using switch case and a function
*/

int pins[7] = {2,3,4,5,6,7,8};//creating a array for all pins used
const int timer=500; //Sets the delay time
int LED0[7]= {8,7,6,4,3,2};//creating a array for all pins used in making 0
int LED1[2]= {2,8};//creating a array for all pins used in making 1
int LED2[5]= {8,7,5,4,3};//creating a array for all pins used in making 2                
int LED3[5]= {7,8,5,2,3};//creating a array for all pins used in making 3                
int LED4[4]= {8,6,2,5}; //creating a array for all pins used in making 4               
int LED5[5]= {7,6,5,2,3};//creating a array for all pins used in making 5                
int LED6[6]= {2,7,6,5,4,3};//creating a array for all pins used in making 6                
int LED7[3]= {2,7,8}; //creating a array for all pins used in making 7               
int LED8[7]= {8,7,6,5,4,3,2};//creating a array for all pins used in making 8
int LED9[7]= {8,7,6,5,3,2};//creating a array for all pins used in making 9
void LED(int x){//this creates a function to be used in the future that chooses the number of the LED
  switch(x){// depending on the value given to the funciton it'll choose a case
    case 0:// if case 0
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 0
    digitalWrite(LED0[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    break;//leaves switch case
    case 1:// if case 1
    for(int i=0; i< 2;i++){//for loop that loops for every pin of 1
    digitalWrite(LED1[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
	break;//leaves switch case
    case 2:// if case 2
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 2
    digitalWrite(LED2[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
	break;//leaves switch case
    case 3:// if case 3
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 3
    digitalWrite(LED3[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
	break;//leaves switch case
    case 4:// if case 4
    for(int i=0; i< 4;i++){//for loop that loops for every pin of 4
    digitalWrite(LED4[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
	break;//leaves switch case
    case 5:// if case 5
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 5
    digitalWrite(LED5[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    break;//leaves switch case
    case 6:// if case 6
    for(int i=0; i< 6;i++){//for loop that loops for every pin of 6
    digitalWrite(LED6[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    break;//leaves switch case
    case 7:// if case 7
    for(int i=0; i< 3;i++){//for loop that loops for every pin of 7
    digitalWrite(LED7[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    break;//leaves switch case
    case 8: // if case 8
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 8
    digitalWrite(LED8[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
  }
	break;//leaves switch case
    case 9:// if case 9
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 9
    digitalWrite(LED9[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
  }
  }
  delay(timer);//delay between the LED being on and off
  for(int i=0; i< 8;i++){//for loop that loops 8 times
  digitalWrite(pins[i],LOW);//Turns off all pins(or a pin for every loop that continues to increase)
  
  }
}   
void setup(){
  for(int Pin=2;Pin<=8;Pin++){//repeats loop 7 times to setup pinmodes from 2-8
  pinMode(Pin,OUTPUT);//set's pinmode of current value of loop
}
}
void loop(){
  for(int i=0; i< 10;i++){//loops 10 times for 0-9
    LED(i);//a function leading to a switch case where i is the amount of times the for looped

    
  }
}