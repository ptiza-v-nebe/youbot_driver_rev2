#include <iostream>
#include "youbot/YouBotManipulator.hpp"

using namespace std;
using namespace youbot;

int main(int argc, char *argv[]) {

 MaximumPositioningVelocity MaximumPositioningVelocity_Parameter;
  quantity<angular_velocity> MaximumPositioningVelocity_actual;
  quantity<angular_velocity> MaximumPositioningVelocity_file;

  MaximumMotorCurrent MaximumMotorCurrent_Parameter;
  quantity<current> MaximumMotorCurrent_actual;
  quantity<current> MaximumMotorCurrent_file;

  MaximumVelocityToSetPosition MaximumVelocityToSetPosition_Parameter;
  quantity<angular_velocity> MaximumVelocityToSetPosition_actual;
  quantity<angular_velocity> MaximumVelocityToSetPosition_file;

  SpeedControlSwitchingThreshold SpeedControlSwitchingThreshold_Parameter;
  quantity<angular_velocity> SpeedControlSwitchingThreshold_actual;
  quantity<angular_velocity> SpeedControlSwitchingThreshold_file;

  PositionTargetReachedDistance PositionTargetReachedDistance_Parameter;
  int PositionTargetReachedDistance_actual;
  int PositionTargetReachedDistance_file;

  MotorAcceleration MotorAcceleration_Parameter;
  quantity<angular_acceleration> MotorAcceleration_actual;
  quantity<angular_acceleration> MotorAcceleration_file;

  PositionControlSwitchingThreshold PositionControlSwitchingThreshold_Parameter;
  quantity<angular_velocity> PositionControlSwitchingThreshold_actual;
  quantity<angular_velocity> PositionControlSwitchingThreshold_file;

  PParameterFirstParametersPositionControl PParameterFirstParametersPositionControl_Parameter;
  int PParameterFirstParametersPositionControl_actual;
  int PParameterFirstParametersPositionControl_file;

  IParameterFirstParametersPositionControl IParameterFirstParametersPositionControl_Parameter;
  int IParameterFirstParametersPositionControl_actual;
  int IParameterFirstParametersPositionControl_file;

  DParameterFirstParametersPositionControl DParameterFirstParametersPositionControl_Parameter;
  int DParameterFirstParametersPositionControl_actual;
  int DParameterFirstParametersPositionControl_file;

  PIDControlTime PIDControlTime_Parameter;
  quantity<si::time> PIDControlTime_actual;
  quantity<si::time> PIDControlTime_file;

  CurrentControlLoopDelay CurrentControlLoopDelay_Parameter;
  quantity<si::time> CurrentControlLoopDelay_actual;
  quantity<si::time> CurrentControlLoopDelay_file;

  IClippingParameterFirstParametersPositionControl IClippingParameterFirstParametersPositionControl_Parameter;
  int IClippingParameterFirstParametersPositionControl_actual;
  int IClippingParameterFirstParametersPositionControl_file;

  PParameterFirstParametersSpeedControl PParameterFirstParametersSpeedControl_Parameter;
  int PParameterFirstParametersSpeedControl_actual;
  int PParameterFirstParametersSpeedControl_file;

  IParameterFirstParametersSpeedControl IParameterFirstParametersSpeedControl_Parameter;
  int IParameterFirstParametersSpeedControl_actual;
  int IParameterFirstParametersSpeedControl_file;

  DParameterFirstParametersSpeedControl DParameterFirstParametersSpeedControl_Parameter;
  int DParameterFirstParametersSpeedControl_actual;
  int DParameterFirstParametersSpeedControl_file;

  IClippingParameterFirstParametersSpeedControl IClippingParameterFirstParametersSpeedControl_Parameter;
  int IClippingParameterFirstParametersSpeedControl_actual;
  int IClippingParameterFirstParametersSpeedControl_file;

  RampGeneratorSpeedAndPositionControl RampGeneratorSpeedAndPositionControl_Parameter;
  bool RampGeneratorSpeedAndPositionControl_actual;
  bool RampGeneratorSpeedAndPositionControl_file;

  SetEncoderCounterZeroAtNextNChannel SetEncoderCounterZeroAtNextNChannel_Parameter;
  bool SetEncoderCounterZeroAtNextNChannel_actual;
  bool SetEncoderCounterZeroAtNextNChannel_file;

  SetEncoderCounterZeroAtNextSwitch SetEncoderCounterZeroAtNextSwitch_Parameter;
  bool SetEncoderCounterZeroAtNextSwitch_actual;
  bool SetEncoderCounterZeroAtNextSwitch_file;

  SetEncoderCounterZeroOnlyOnce SetEncoderCounterZeroOnlyOnce_Parameter;
  bool SetEncoderCounterZeroOnlyOnce_actual;
  bool SetEncoderCounterZeroOnlyOnce_file;

  EncoderStopSwitch EncoderStopSwitch_Parameter;
  unsigned int EncoderStopSwitch_actual;
  unsigned int EncoderStopSwitch_file;

  ActualCommutationOffset ActualCommutationOffset_Parameter;
  int ActualCommutationOffset_actual;
  int ActualCommutationOffset_file;

  StopSwitchPolarity StopSwitchPolarity_Parameter;
  unsigned int StopSwitchPolarity_actual;
  unsigned int StopSwitchPolarity_file;

  PParameterCurrentControl PParameterCurrentControl_Parameter;
  int PParameterCurrentControl_actual;
  int PParameterCurrentControl_file;

  IParameterCurrentControl IParameterCurrentControl_Parameter;
  int IParameterCurrentControl_actual;
  int IParameterCurrentControl_file;

  DParameterCurrentControl DParameterCurrentControl_Parameter;
  int DParameterCurrentControl_actual;
  int DParameterCurrentControl_file;

  IClippingParameterCurrentControl IClippingParameterCurrentControl_Parameter;
  int IClippingParameterCurrentControl_actual;
  int IClippingParameterCurrentControl_file;

  CommutationMotorCurrent CommutationMotorCurrent_Parameter;
  quantity<current> CommutationMotorCurrent_actual;
  quantity<current> CommutationMotorCurrent_file;

  PParameterSecondParametersPositionControl PParameterSecondParametersPositionControl_Parameter;
  int PParameterSecondParametersPositionControl_actual;
  int PParameterSecondParametersPositionControl_file;

  IParameterSecondParametersPositionControl IParameterSecondParametersPositionControl_Parameter;
  int IParameterSecondParametersPositionControl_actual;
  int IParameterSecondParametersPositionControl_file;

  DParameterSecondParametersPositionControl DParameterSecondParametersPositionControl_Parameter;
  int DParameterSecondParametersPositionControl_actual;
  int DParameterSecondParametersPositionControl_file;

  IClippingParameterSecondParametersPositionControl IClippingParameterSecondParametersPositionControl_Parameter;
  int IClippingParameterSecondParametersPositionControl_actual;
  int IClippingParameterSecondParametersPositionControl_file;

  PParameterSecondParametersSpeedControl PParameterSecondParametersSpeedControl_Parameter;
  int PParameterSecondParametersSpeedControl_actual;
  int PParameterSecondParametersSpeedControl_file;

  IParameterSecondParametersSpeedControl IParameterSecondParametersSpeedControl_Parameter;
  int IParameterSecondParametersSpeedControl_actual;
  int IParameterSecondParametersSpeedControl_file;

  DParameterSecondParametersSpeedControl DParameterSecondParametersSpeedControl_Parameter;
  int DParameterSecondParametersSpeedControl_actual;
  int DParameterSecondParametersSpeedControl_file;

  IClippingParameterSecondParametersSpeedControl IClippingParameterSecondParametersSpeedControl_Parameter;
  int IClippingParameterSecondParametersSpeedControl_actual;
  int IClippingParameterSecondParametersSpeedControl_file;

  MassInertiaConstant MassInertiaConstant_Parameter;
  int MassInertiaConstant_actual;
  int MassInertiaConstant_file;

  BEMFConstant BEMFConstant_Parameter;
  int BEMFConstant_actual;
  int BEMFConstant_file;

  SineInitializationVelocity SineInitializationVelocity_Parameter;
  int SineInitializationVelocity_actual;
  int SineInitializationVelocity_file;

  InitSineDelay InitSineDelay_Parameter;
  quantity<si::time> InitSineDelay_actual;
  quantity<si::time> InitSineDelay_file;

  ActivateOvervoltageProtection ActivateOvervoltageProtection_Parameter;
  bool ActivateOvervoltageProtection_actual;
  bool ActivateOvervoltageProtection_file;

  CommutationMode CommutationMode_Parameter;
  unsigned int CommutationMode_actual;
  unsigned int CommutationMode_file;

  EncoderResolution EncoderResolution_Parameter;
  unsigned int EncoderResolution_actual;
  unsigned int EncoderResolution_file;

  HallSensorPolarityReversal HallSensorPolarityReversal_Parameter;
  bool HallSensorPolarityReversal_actual;
  bool HallSensorPolarityReversal_file;

  InitializationMode InitializationMode_Parameter;
  int InitializationMode_actual;
  int InitializationMode_file;

  MotorCoilResistance MotorCoilResistance_Parameter;
  quantity<resistance> MotorCoilResistance_actual;
  quantity<resistance> MotorCoilResistance_file;

  MotorPoles MotorPoles_Parameter;
  unsigned int MotorPoles_actual;
  unsigned int MotorPoles_file;

  ReversingEncoderDirection ReversingEncoderDirection_Parameter;
  bool ReversingEncoderDirection_actual;
  bool ReversingEncoderDirection_file;

  OperationalTime OperationalTime_Parameter;
  quantity<si::time> OperationalTime_actual;
  quantity<si::time> OperationalTime_file;

  ThermalWindingTimeConstant ThermalWindingTimeConstant_Parameter;
  quantity<si::time> ThermalWindingTimeConstant_actual;
  quantity<si::time> ThermalWindingTimeConstant_file;

  I2tLimit I2tLimit_Parameter;
  unsigned int I2tLimit_actual;
  unsigned int I2tLimit_file;

  I2tExceedCounter I2tExceedCounter_Parameter;
  unsigned int I2tExceedCounter_actual;
  unsigned int I2tExceedCounter_file;
  
  MotorHaltedVelocity MotorHaltedVelocity_Parameter;
  int MotorHaltedVelocity_actual;
  int MotorHaltedVelocity_file;

  ActualMotorVoltage ActualMotorVoltage_Parameter;
  quantity<electric_potential> ActualMotorVoltage_actual;
  PositionError PositionError_Parameter;
  quantity<plane_angle> PositionError_actual;
  PositionErrorSum PositionErrorSum_Parameter;
  quantity<plane_angle> PositionErrorSum_actual;
  VelocityError VelocityError_Parameter;
  quantity<si::angular_velocity> VelocityError_actual;
  VelocityErrorSum VelocityErrorSum_Parameter;
  quantity<si::angular_velocity> VelocityErrorSum_actual;
  RampGeneratorSpeed RampGeneratorSpeed_Parameter;
  quantity<si::angular_velocity> RampGeneratorSpeed_actual;
  I2tSum I2tSum_Parameter;
  unsigned int I2tSum_actual;
  ActualMotorDriverTemperature ActualMotorDriverTemperature_Parameter;
  quantity<celsius::temperature> ActualMotorDriverTemperature_actual;
  
  ActualModuleSupplyCurrent ActualModuleSupplyCurrent_Parameter;
  quantity<si::current> ActualModuleSupplyCurrent_actual;
  
  MotorControllerTimeout MotorControllerTimeout_Parameter;
  quantity<si::time> MotorControllerTimeout_actual;
  quantity<si::time> MotorControllerTimeout_file;
  
  CurrentError CurrentError_Parameter;
  quantity<si::current> CurrentError_actual;
          
  CurrentErrorSum CurrentErrorSum_Parameter;
  quantity<si::current> CurrentErrorSum_actual;
  
  quantity<si::angular_velocity> VelocityThresholdForHallFX_actual;
  quantity<si::angular_velocity> VelocityThresholdForHallFX_file;
  VelocityThresholdForHallFX VelocityThresholdForHallFX_Parameter;


//---------------------
    YouBotManipulator myYouBotManipulator("/youbot-manipulator", YOUBOT_CONFIGURATIONS_DIR);
    YouBotJoint* joint1 = &(myYouBotManipulator.getArmJoint(1));
    YouBotJoint* joint2 = &(myYouBotManipulator.getArmJoint(2));
    YouBotJoint* joint3 = &(myYouBotManipulator.getArmJoint(3));
    YouBotJoint* joint4 = &(myYouBotManipulator.getArmJoint(4));
    YouBotJoint* joint5 = &(myYouBotManipulator.getArmJoint(5));


    PParameterFirstParametersPositionControl_Parameter.setParameter(100);
    joint1->setConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);

    IParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint1->setConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
   
    DParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint1->setConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);


    PParameterFirstParametersPositionControl_Parameter.setParameter(100);
    joint2->setConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);

    IParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint2->setConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
   
    DParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint2->setConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);



    PParameterFirstParametersPositionControl_Parameter.setParameter(100);
    joint3->setConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);

    IParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint3->setConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
   
    DParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint3->setConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);



    PParameterFirstParametersPositionControl_Parameter.setParameter(100);
    joint4->setConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);

    IParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint4->setConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
   
    DParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint4->setConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);



    PParameterFirstParametersPositionControl_Parameter.setParameter(100);
    joint5->setConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);

    IParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint5->setConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
   
    DParameterFirstParametersPositionControl_Parameter.setParameter(0);
    joint5->setConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);

    //velocity
    //Control parameters
 
    PParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint1->setConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);

    IParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint1->setConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
   
    DParameterFirstParametersSpeedControl_Parameter.setParameter(0); //0
    joint1->setConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

   
    PParameterSecondParametersSpeedControl_Parameter.setParameter(4000); //4000
    joint1->setConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);

    IParameterSecondParametersSpeedControl_Parameter.setParameter(2000); //2000
    joint1->setConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);

    DParameterSecondParametersSpeedControl_Parameter.setParameter(0); //0
    joint1->setConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);



    PParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint2->setConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);

    IParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint2->setConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
   
    DParameterFirstParametersSpeedControl_Parameter.setParameter(0); //0
    joint2->setConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    
    PParameterSecondParametersSpeedControl_Parameter.setParameter(4000); //2000
    joint2->setConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);

    IParameterSecondParametersSpeedControl_Parameter.setParameter(2000); //6000
    joint2->setConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);

    DParameterSecondParametersSpeedControl_Parameter.setParameter(0); //0
    joint2->setConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    
    PParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint3->setConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);

    IParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint3->setConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
   
    DParameterFirstParametersSpeedControl_Parameter.setParameter(0); //0
    joint3->setConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

   
    PParameterSecondParametersSpeedControl_Parameter.setParameter(2000);//2000
    joint3->setConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);

    IParameterSecondParametersSpeedControl_Parameter.setParameter(4000);//4000
    joint3->setConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);

    DParameterSecondParametersSpeedControl_Parameter.setParameter(0); //0
    joint3->setConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

  


    PParameterFirstParametersSpeedControl_Parameter.setParameter(200); //200
    joint4->setConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);

    IParameterFirstParametersSpeedControl_Parameter.setParameter(200);//200
    joint4->setConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
   
    DParameterFirstParametersSpeedControl_Parameter.setParameter(0); //0
    joint4->setConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

   
    PParameterSecondParametersSpeedControl_Parameter.setParameter(1000);//1000
    joint4->setConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);

    IParameterSecondParametersSpeedControl_Parameter.setParameter(2000);//2000
    joint4->setConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);

    DParameterSecondParametersSpeedControl_Parameter.setParameter(0); //0
    joint4->setConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);





    PParameterFirstParametersSpeedControl_Parameter.setParameter(200);//200
    joint5->setConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);

    IParameterFirstParametersSpeedControl_Parameter.setParameter(200);//200
    joint5->setConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
   
    DParameterFirstParametersSpeedControl_Parameter.setParameter(0);//0
    joint5->setConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

   
    PParameterSecondParametersSpeedControl_Parameter.setParameter(800);//800
    joint5->setConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);

    IParameterSecondParametersSpeedControl_Parameter.setParameter(600);//600
    joint5->setConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);

    DParameterSecondParametersSpeedControl_Parameter.setParameter(0); //0
    joint5->setConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);


  return 0;
}
