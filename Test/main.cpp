
#include "UW_eng.h"

void main( void )
{
  intialize();
  initMotorController();
  
  setMotor(MOTOR_A, 100);
  setMotor(MOTOR_B, 100);
}
