#include "youbot/YouBotManipulator.hpp"
#include "youbot/DataTrace.hpp"
#include <cstdio>
#include <signal.h>

using namespace youbot;
bool running = true;

void sigintHandler(int signal) {
  running = false;
  std::cout << std::endl << " Interrupt!" << std::endl;
}

void toHome(YouBotManipulator* myYouBotManipulator){
	JointAngleSetpoint desiredJointAngle(0.11*radian);
    myYouBotManipulator->getArmJoint(4).setData(desiredJointAngle);
    SLEEP_MILLISEC(4000);
}

int main() {
	signal(SIGINT, sigintHandler);
	//init manipulator
	YouBotManipulator* myYouBotManipulator = new YouBotManipulator("youbot-manipulator", YOUBOT_CONFIGURATIONS_DIR);
	myYouBotManipulator->doJointCommutation();
	myYouBotManipulator->calibrateManipulator();
	DataTrace myTrace(myYouBotManipulator->getArmJoint(4), "manipulatorJoint4", true);

	//move to home position
    toHome(myYouBotManipulator);

    //set control loop variables
    float e = 0;
	float cmd = 0;
	char c= 0;
	JointVelocitySetpoint desiredJointVelocity;
    JointAngleSetpoint desiredJointAngle(0.80*radian);
	JointSensedAngle sensedAngle;
    SLEEP_MILLISEC(2000);
	
    //starting datatrace
	myTrace.startTrace();

	//control loop
	while (running) {
		myYouBotManipulator->getArmJoint(4).getData(sensedAngle);
		e = desiredJointAngle.angle.value() - sensedAngle.angle.value();
		cmd = e*10;
		std::cout << e << std::endl;
		desiredJointVelocity.angularVelocity = cmd*radian_per_second;
		myYouBotManipulator->getArmJoint(4).setData(desiredJointVelocity);
		myTrace.updateTrace(desiredJointVelocity);
		SLEEP_MILLISEC(1);
	}

	//stop and plot datatrace
    myTrace.stopTrace();
    myTrace.plotTrace();

	//move to home position
    toHome(myYouBotManipulator);

	//clean up
    delete myYouBotManipulator;
    myYouBotManipulator = 0;
	LOG(info) << "Done.";

	return 0;
}
