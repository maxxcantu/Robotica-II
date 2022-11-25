/*
 * File:          my_controll_oruga.c
 * Date:
 * Description:
 * Author:
 * Modifications:
 */


#include <webots/motor.h>
#include <webots/robot.h>

int main(int argc, char **argv) {
  wb_robot_init();

  WbDeviceTag leftMotor = wb_robot_get_device("left motor");
  WbDeviceTag rightMotor = wb_robot_get_device("right motor");
  wb_motor_set_position(leftMotor, INFINITY);
  wb_motor_set_position(rightMotor, INFINITY);
  int timeStep = wb_robot_get_basic_time_step();

  // go straight
  wb_motor_set_velocity(leftMotor, -0.4);
  wb_motor_set_velocity(rightMotor, 0.4);

  int i = 1240;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };

  // turn left
  wb_motor_set_velocity(leftMotor, -0.1);
  wb_motor_set_velocity(rightMotor, -0.1);

  i = 270;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };

  // go straight
  wb_motor_set_velocity(leftMotor, -0.4);
  wb_motor_set_velocity(rightMotor, 0.4);
  
  i = 180;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };
  
  // turn left
  wb_motor_set_velocity(leftMotor, -0.1);
  wb_motor_set_velocity(rightMotor, -0.1);
  
  i = 270;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };
  
  // go straight
  wb_motor_set_velocity(leftMotor, -0.4);
  wb_motor_set_velocity(rightMotor, 0.4);

  i = 1232;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };
  
  // turn right
  wb_motor_set_velocity(leftMotor, 0.1);
  wb_motor_set_velocity(rightMotor, 0.1);
  
  i = 540;
  while (wb_robot_step(timeStep) != -1 && i > 0) {
    --i;
  };

  // stop
  wb_motor_set_velocity(leftMotor, 0.0);
  wb_motor_set_velocity(rightMotor, 0.0);
  
  //while (wb_robot_step(timeStep) != -1) {
  //};

  wb_robot_cleanup();

  return 0;
}
