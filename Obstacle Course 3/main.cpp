
#include "UW_eng.h"

void main(void){
  
  initialize();
  initMotorController();
  
  setMotor(MOTOR_A, -50);
  setMotor(MOTOR_B, 100);
  
  wait1Sec(10);
  
  setMotor(MOTOR_A, -100);
  setMotor(MOTOR_B, 0);
  //-100?
  
  wait1Msec(1000);
  
  setMotor(MOTOR_A, -100);
  setMotor(MOTOR_B, 100);
}
