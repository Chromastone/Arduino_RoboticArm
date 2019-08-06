#include<Servo.h>
#include<SoftwareSerial.h>

Servo base, shoulder, elbow, gripper;

int base_pot, shoulder_pot, elbow_pot, gripper_pot;

void setup() {

  pinMode(A0, OUTPUT);
  base.attach(3);
  
  pinMode(A1, OUTPUT);
  shoulder.attach(5);
  
  pinMode(A2, OUTPUT);
  elbow.attach(6);
  
  pinMode(A3, OUTPUT);
  gripper.attach(9);
    
}

void loop() {

  base_pot = analogRead(A0);
  base_pot = map(base_pot, 0, 1024, 0, 170);
  base.write(base_pot);
  delay(50);

  shoulder_pot = analogRead(A1);
  shoulder_pot = map(shoulder_pot, 0, 1024, 0, 170);
  shoulder.write(shoulder_pot);
  delay(50);

  elbow_pot = analogRead(A2);
  elbow_pot = map(elbow_pot, 0, 1024, 0, 170);
  elbow.write(elbow_pot);
  delay(50);

  gripper_pot = analogRead(A3);
  gripper_pot = map(gripper_pot, 0, 1024, 0, 170);
  gripper.write(gripper_pot);
  delay(50);
}
