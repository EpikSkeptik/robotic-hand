#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

/* Pin Allocation */
#define servo1Pin 11
#define servo2Pin 10
#define servo3Pin 9
#define servo4Pin 6
#define servo5Pin 5

#define btn1Pin 8
#define btn2Pin 2
#define btn3Pin 7
#define btn4Pin 12
#define btn5Pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(servo1Pin,OUTPUT);
  pinMode(servo2Pin,OUTPUT);
  pinMode(servo3Pin,OUTPUT);
  pinMode(servo4Pin,OUTPUT);
  pinMode(servo5Pin,OUTPUT);
  
  pinMode(btn1Pin, INPUT);
  pinMode(btn2Pin, INPUT);
  pinMode(btn3Pin, INPUT);
  pinMode(btn4Pin, INPUT);
  pinMode(btn5Pin, INPUT);

  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
  servo5.attach(servo5Pin);
}

int checkBtn(int pin) {
  if (digitalRead(pin)== LOW) return 1;
  else return 0; 
}

void moveServo(int input, Servo servo) {
    if(input) {
      servo.write(90);  
    } else {
      servo.write(0);  
    }
}

void loop() {
  moveServo(checkBtn(btn1Pin), servo1);
  moveServo(checkBtn(btn2Pin), servo2);
  moveServo(checkBtn(btn3Pin), servo3);
  moveServo(checkBtn(btn4Pin), servo4);
  moveServo(checkBtn(btn5Pin), servo5);
  }
