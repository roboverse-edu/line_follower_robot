// Arduino Line Follower Robot Code


#define en1 5//Enable1 L293 Pin enA 

#define in1 7 //Motor1  L293 Pin in1 

#define in2 8 //Motor1  L293 Pin in2

#define in3 9 //Motor2  L293 Pin in3

#define in4 10 //Motor2  L293 Pin in4

#define en2 6 //Enable2 L293 Pin enB 

#define R_S 4//ir sensor Right

#define L_S 2 //ir sensor Left


void setup(){ 

pinMode(R_S, INPUT); //setting right sensor as input

pinMode(L_S, INPUT); //setting left sensor as input

pinMode(en1, OUTPUT); //setting enable as input

pinMode(in1, OUTPUT); //setting input1 as output

pinMode(in2, OUTPUT); //setting input2 as output

pinMode(in3, OUTPUT); //setting input3 as output

pinMode(in4, OUTPUT); //setting input4 as output

pinMode(en2, OUTPUT); //setting enable as input

analogWrite(en1, 255); //setting enable pin as high

analogWrite(en2, 255); //setting enable pin as high   

//pinMode(12, OUTPUT);

}

void loop(){

analogWrite(en1, 190); //setting enable pin as 190

analogWrite(en2, 190); //setting enable pin as 190   


if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)){forward();}   //if Right Sensor and Left Sensor are at White color then it will call forword function

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)){turnRight();} //if Right Sensor is Black and Left Sensor is White then it will call turn Right function  

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)){turnLeft();}  //if Right Sensor is White and Left Sensor is Black then it will call turn Left function

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)){Stop();} //if Right Sensor and Left Sensor are at Black color then it will call Stop function
// digitalWrite(12, HIGH);
//delay(50);
// digitalWrite(12, LOW);
//delay(50);
}


void forward(){  //forword

digitalWrite(in1, LOW); //Right Motor forword Pin 

digitalWrite(in2, HIGH);  //Right Motor backword Pin 

digitalWrite(in3, LOW);  //Left Motor backword Pin 

digitalWrite(in4, HIGH); //Left Motor forword Pin 

//digitalWrite(12, HIGH);

}


void turnRight(){ //turnRight

digitalWrite(in1, LOW);  //Right Motor forword Pin 

digitalWrite(in2, HIGH); //Right Motor backword Pin  

digitalWrite(in3, HIGH);  //Left Motor backword Pin 

 digitalWrite(in4, LOW); //Left Motor forword Pin 
// digitalWrite(12, HIGH);
//delay(50);
// digitalWrite(12, LOW);
//delay(50);
}


void turnLeft(){ //turnLeft

digitalWrite(in1, HIGH); //Right Motor forword Pin 

digitalWrite(in2, LOW);  //Right Motor backword Pin 

digitalWrite(in3, LOW); //Left Motor backword Pin 

digitalWrite(in4, HIGH);  //Left Motor forword Pin 
// digitalWrite(12, HIGH);
//delay(50);
// digitalWrite(12, LOW);
//delay(50);
}


void Stop(){ //stop

digitalWrite(in1, LOW); //Right Motor stop Pin 

digitalWrite(in2, LOW); //Right Motor stop Pin 

digitalWrite(in3, LOW); //Left Motor stop Pin 

digitalWrite(in4, LOW); //Left Motor stop Pin 
//
//digitalWrite(12, HIGH);
//delay(150);
//digitalWrite(12, LOW);
//delay(500);
}
