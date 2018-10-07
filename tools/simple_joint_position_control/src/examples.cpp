	/*
    //setting position
	JointAngleSetpoint desiredJointAngle;
    for(int i=0; i<30; i++){
	    desiredJointAngle.angle = 0.05* i * radian + 0.11*radian;
		myYouBotManipulator->getArmJoint(4).setData(desiredJointAngle);
		LOG(info) << "unfold arm";
		SLEEP_MILLISEC(50);
	} */
    
    /*
	//setting velocity
	JointVelocitySetpoint desiredJointVelocity;
	desiredJointVelocity.angularVelocity = 0.3 * radian_per_second;
	myYouBotManipulator->getArmJoint(4).setData(desiredJointVelocity);
    SLEEP_MILLISEC(3000);
	desiredJointVelocity.angularVelocity = 0.00 * radian_per_second;
	myYouBotManipulator->getArmJoint(4).setData(desiredJointVelocity);
	*/    

	//sense actual angle
	/*
	JointSensedAngle sensedAngle;
	myYouBotManipulator->getArmJoint(4).getData(sensedAngle);
	std::cout << sensedAngle.angle.value() << std::endl;
	*/