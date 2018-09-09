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

    //first position
    cout<< "first position" << endl;
    joint1->getConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);
    joint1->getConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
    joint1->getConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);

    PParameterFirstParametersPositionControl_Parameter.getParameter(PParameterFirstParametersPositionControl_actual);
    IParameterFirstParametersPositionControl_Parameter.getParameter(IParameterFirstParametersPositionControl_actual);
    DParameterFirstParametersPositionControl_Parameter.getParameter(DParameterFirstParametersPositionControl_actual);

    string p,i,d;
    PParameterFirstParametersPositionControl_Parameter.toString(p);
    IParameterFirstParametersPositionControl_Parameter.toString(i);
    DParameterFirstParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint2->getConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);
    joint2->getConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
    joint2->getConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);

    PParameterFirstParametersPositionControl_Parameter.getParameter(PParameterFirstParametersPositionControl_actual);
    IParameterFirstParametersPositionControl_Parameter.getParameter(IParameterFirstParametersPositionControl_actual);
    DParameterFirstParametersPositionControl_Parameter.getParameter(DParameterFirstParametersPositionControl_actual);

    //string p,i,d;
    PParameterFirstParametersPositionControl_Parameter.toString(p);
    IParameterFirstParametersPositionControl_Parameter.toString(i);
    DParameterFirstParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint3->getConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);
    joint3->getConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
    joint3->getConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);

    PParameterFirstParametersPositionControl_Parameter.getParameter(PParameterFirstParametersPositionControl_actual);
    IParameterFirstParametersPositionControl_Parameter.getParameter(IParameterFirstParametersPositionControl_actual);
    DParameterFirstParametersPositionControl_Parameter.getParameter(DParameterFirstParametersPositionControl_actual);

   // string p,i,d;
    PParameterFirstParametersPositionControl_Parameter.toString(p);
    IParameterFirstParametersPositionControl_Parameter.toString(i);
    DParameterFirstParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint4->getConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);
    joint4->getConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
    joint4->getConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);

    PParameterFirstParametersPositionControl_Parameter.getParameter(PParameterFirstParametersPositionControl_actual);
    IParameterFirstParametersPositionControl_Parameter.getParameter(IParameterFirstParametersPositionControl_actual);
    DParameterFirstParametersPositionControl_Parameter.getParameter(DParameterFirstParametersPositionControl_actual);

    //string p,i,d;
    PParameterFirstParametersPositionControl_Parameter.toString(p);
    IParameterFirstParametersPositionControl_Parameter.toString(i);
    DParameterFirstParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint5->getConfigurationParameter(PParameterFirstParametersPositionControl_Parameter);
    joint5->getConfigurationParameter(IParameterFirstParametersPositionControl_Parameter);
    joint5->getConfigurationParameter(DParameterFirstParametersPositionControl_Parameter);
    
    PParameterFirstParametersPositionControl_Parameter.getParameter(PParameterFirstParametersPositionControl_actual);
    IParameterFirstParametersPositionControl_Parameter.getParameter(IParameterFirstParametersPositionControl_actual);
    DParameterFirstParametersPositionControl_Parameter.getParameter(DParameterFirstParametersPositionControl_actual);

    //string p,i,d;
    PParameterFirstParametersPositionControl_Parameter.toString(p);
    IParameterFirstParametersPositionControl_Parameter.toString(i);
    DParameterFirstParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    //second position
    cout<< "second position" << endl;
    joint1->getConfigurationParameter(PParameterSecondParametersPositionControl_Parameter);
    joint1->getConfigurationParameter(IParameterSecondParametersPositionControl_Parameter);
    joint1->getConfigurationParameter(DParameterSecondParametersPositionControl_Parameter);

    PParameterSecondParametersPositionControl_Parameter.getParameter(PParameterSecondParametersPositionControl_actual);
    IParameterSecondParametersPositionControl_Parameter.getParameter(IParameterSecondParametersPositionControl_actual);
    DParameterSecondParametersPositionControl_Parameter.getParameter(DParameterSecondParametersPositionControl_actual);

    PParameterSecondParametersPositionControl_Parameter.toString(p);
    IParameterSecondParametersPositionControl_Parameter.toString(i);
    DParameterSecondParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint2->getConfigurationParameter(PParameterSecondParametersPositionControl_Parameter);
    joint2->getConfigurationParameter(IParameterSecondParametersPositionControl_Parameter);
    joint2->getConfigurationParameter(DParameterSecondParametersPositionControl_Parameter);

    PParameterSecondParametersPositionControl_Parameter.getParameter(PParameterSecondParametersPositionControl_actual);
    IParameterSecondParametersPositionControl_Parameter.getParameter(IParameterSecondParametersPositionControl_actual);
    DParameterSecondParametersPositionControl_Parameter.getParameter(DParameterSecondParametersPositionControl_actual);

    //string p,i,d;
    PParameterSecondParametersPositionControl_Parameter.toString(p);
    IParameterSecondParametersPositionControl_Parameter.toString(i);
    DParameterSecondParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint3->getConfigurationParameter(PParameterSecondParametersPositionControl_Parameter);
    joint3->getConfigurationParameter(IParameterSecondParametersPositionControl_Parameter);
    joint3->getConfigurationParameter(DParameterSecondParametersPositionControl_Parameter);

    PParameterSecondParametersPositionControl_Parameter.getParameter(PParameterSecondParametersPositionControl_actual);
    IParameterSecondParametersPositionControl_Parameter.getParameter(IParameterSecondParametersPositionControl_actual);
    DParameterSecondParametersPositionControl_Parameter.getParameter(DParameterSecondParametersPositionControl_actual);

   // string p,i,d;
    PParameterSecondParametersPositionControl_Parameter.toString(p);
    IParameterSecondParametersPositionControl_Parameter.toString(i);
    DParameterSecondParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint4->getConfigurationParameter(PParameterSecondParametersPositionControl_Parameter);
    joint4->getConfigurationParameter(IParameterSecondParametersPositionControl_Parameter);
    joint4->getConfigurationParameter(DParameterSecondParametersPositionControl_Parameter);

    PParameterSecondParametersPositionControl_Parameter.getParameter(PParameterSecondParametersPositionControl_actual);
    IParameterSecondParametersPositionControl_Parameter.getParameter(IParameterSecondParametersPositionControl_actual);
    DParameterSecondParametersPositionControl_Parameter.getParameter(DParameterSecondParametersPositionControl_actual);

    //string p,i,d;
    PParameterSecondParametersPositionControl_Parameter.toString(p);
    IParameterSecondParametersPositionControl_Parameter.toString(i);
    DParameterSecondParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl;

    joint5->getConfigurationParameter(PParameterSecondParametersPositionControl_Parameter);
    joint5->getConfigurationParameter(IParameterSecondParametersPositionControl_Parameter);
    joint5->getConfigurationParameter(DParameterSecondParametersPositionControl_Parameter);
    
    PParameterSecondParametersPositionControl_Parameter.getParameter(PParameterSecondParametersPositionControl_actual);
    IParameterSecondParametersPositionControl_Parameter.getParameter(IParameterSecondParametersPositionControl_actual);
    DParameterSecondParametersPositionControl_Parameter.getParameter(DParameterSecondParametersPositionControl_actual);

    //string p,i,d;
    PParameterSecondParametersPositionControl_Parameter.toString(p);
    IParameterSecondParametersPositionControl_Parameter.toString(i);
    DParameterSecondParametersPositionControl_Parameter.toString(d);
    cout<< p << i << d << endl; 

    
   //first velocity
     cout<< "first velocity" << endl;
    joint1->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint1->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint1->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint2->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint2->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint2->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;


    joint3->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint1->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint3->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint4->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint4->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint4->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint5->getConfigurationParameter(PParameterFirstParametersSpeedControl_Parameter);
    joint5->getConfigurationParameter(IParameterFirstParametersSpeedControl_Parameter);
    joint5->getConfigurationParameter(DParameterFirstParametersSpeedControl_Parameter);

    PParameterFirstParametersSpeedControl_Parameter.toString(p);
    IParameterFirstParametersSpeedControl_Parameter.toString(i);
    DParameterFirstParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    //second velocity
    cout<< "second velocity" << endl;
    joint1->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint1->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint1->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint2->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint2->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint2->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;


    joint3->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint3->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint3->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint4->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint4->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint4->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    joint5->getConfigurationParameter(PParameterSecondParametersSpeedControl_Parameter);
    joint5->getConfigurationParameter(IParameterSecondParametersSpeedControl_Parameter);
    joint5->getConfigurationParameter(DParameterSecondParametersSpeedControl_Parameter);

    PParameterSecondParametersSpeedControl_Parameter.toString(p);
    IParameterSecondParametersSpeedControl_Parameter.toString(i);
    DParameterSecondParametersSpeedControl_Parameter.toString(d);
    cout<< p << " " << i << " " << d << endl;

    string sc;
    //quantity<angular_velocity> SpeedControlSwitchingThreshold_actual;

    joint1->getConfigurationParameter(SpeedControlSwitchingThreshold_Parameter);
    SpeedControlSwitchingThreshold_Parameter.toString(sc);
    cout << sc << endl;
 
    //joint2->getConfigurationParameter(SpeedControlSwitchingThreshold_Parameter);
    //joint3->getConfigurationParameter(SpeedControlSwitchingThreshold_Parameter);
    //joint4->getConfigurationParameter(SpeedControlSwitchingThreshold_Parameter);
    //joint5->getConfigurationParameter(SpeedControlSwitchingThreshold_Parameter);


  return 0;
}
