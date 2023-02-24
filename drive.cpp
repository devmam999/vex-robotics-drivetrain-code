#include "main.h"

//Helper Functions
void setDrive(int left, int right) {
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

//Driver Control Functions
void setDriveMotors() {
    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    if (abs(leftJoystick < 5)) 
        leftJoystick = 0;
    if (abs(rightJoystick < 5)) 
        rightJoystick = 0;
    setDrive(leftJoystick, rightJoystick);
}