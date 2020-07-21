using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor URoller;
extern motor BRoller;
extern motor Intake1;
extern motor Intake2;
extern motor FrontL;
extern motor BackL;
extern motor FrontR;
extern motor BackR;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );