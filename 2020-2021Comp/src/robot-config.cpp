#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor URoller = motor(PORT5, ratio18_1, false);
motor BRoller = motor(PORT6, ratio18_1, true);
motor Intake1 = motor(PORT7, ratio18_1, true);
motor Intake2 = motor(PORT8, ratio18_1, false);
motor FrontL = motor(PORT1, ratio18_1, false);
motor BackL = motor(PORT2, ratio18_1, true);
motor FrontR = motor(PORT3, ratio18_1, false);
motor BackR = motor(PORT4, ratio18_1, true);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}