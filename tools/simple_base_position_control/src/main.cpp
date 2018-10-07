#include "youbot/YouBotBase.hpp"
#include "youbot/DataTrace.hpp"
#include <cstdio>
#include <signal.h>
#include <math.h>

using namespace youbot;
bool running = true;

//this function called after ctrl-c
void sigintHandler(int signal) {
  running = false;
  std::cout << std::endl << " Interrupt!" << std::endl;
}

int main() {
	signal(SIGINT, sigintHandler);

	//init youbot base
	YouBotBase* myYouBotBase = 0;
	myYouBotBase = new YouBotBase("youbot-base", "/usr/local/config");
	myYouBotBase->doJointCommutation();

    quantity<si::length> x;
    quantity<si::length> y;
    quantity<plane_angle> theta;

    //desired setpoint
	float setx = 0.2;
	float sety = 0.2;
	float settheta = 1.57;

    quantity<si::velocity> xRC = 0 * meter_per_second;
	quantity<si::velocity> yRC = 0 * meter_per_second;
	quantity<si::angular_velocity> thetaRC = 0.0 * radian_per_second;

    while(running){
		//get actual position
        myYouBotBase->getBasePosition(x, y, theta);
		std::cout << "x: " << x.value() << ", y: " << y.value()  << ", theta: "<< theta.value() << std::endl;

		//control difference
		float eX = setx - x.value();
		float eY = sety - y.value();
		float eTheta = settheta - theta.value();
        
		//controller
        float xWC = eX*1.0;
        float yWC = eY*1.0;
		float thetaWC = eTheta*0.7;
        
		//coordinate transform from world to youbot local
		xRC = (cos(theta.value())*xWC + sin(theta.value())*yWC) * meter_per_second;
	    yRC = (-sin(theta.value())*xWC + cos(theta.value())*yWC) * meter_per_second;
	    thetaRC = thetaWC * radian_per_second;
        
		//command youbot base with actual calculated value from controller
	    myYouBotBase->setBaseVelocity(xRC, yRC, thetaRC);
		SLEEP_MILLISEC(1);
	}

	//clean up
    delete myYouBotBase;
    myYouBotBase = 0;
	LOG(info) << "Done.";

	return 0;
}
