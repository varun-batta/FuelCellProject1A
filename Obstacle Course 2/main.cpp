

#include "UW_eng.h"

void main (void){
  
  initialize();
  initMotorController();
  
  setMotor(MOTOR_A, -100);
  setMotor(MOTOR_B, 100);
  
  wait1Sec(1);
  
  setMotor(MOTOR_B, 75);
  
  wait1Sec(6);
  
  setMotor(MOTOR_B, 100);
  
  /*wait1Sec(5);
  
  setMotor(MOTOR_A, 0);
  //-100?
  
  wait1Msec(500);
  
  setMotor(MOTOR_A, -100);
  setMotor(MOTOR_B, 0);
  //-100?
  
  wait1Msec(500);
  
  setMotor(MOTOR_B, 100);*/
  
}