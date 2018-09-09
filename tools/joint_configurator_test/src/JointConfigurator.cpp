/****************************************************************
 *
 * Copyright (c) 2011
 * All rights reserved.
 *
 * Hochschule Bonn-Rhein-Sieg
 * University of Applied Sciences
 * Computer Science Department
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Author:
 * Jan Paulus, Nico Hochgeschwender, Michael Reckhaus, Azamat Shakhimardanov
 * Supervised by:
 * Gerhard K. Kraetzschmar
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * This sofware is published under a dual-license: GNU Lesser General Public
 * License LGPL 2.1 and BSD license. The dual-license implies that users of this
 * code may choose which terms they prefer.
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Hochschule Bonn-Rhein-Sieg nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License LGPL as
 * published by the Free Software Foundation, either version 2.1 of the
 * License, or (at your option) any later version or the BSD license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License LGPL and the BSD license for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License LGPL and BSD license along with this program.
 *
 ****************************************************************/


#include "JointConfigurator.hpp"

JointConfigurator::JointConfigurator(YouBotJoint* youbotjoint, std::string configpath, std::string configname, std::string configNameProtected) {

  ParameterRead = false;
  ProtectedParameterRead = false;
  configfile = NULL;
  configfilePP = NULL;

  if (configpath.at(configpath.length() - 1) != '/') {
    configpath.append("/");
  }

  if (configname == "") {
    UseParameter = false;
  } else {
    configfile = new ConfigFile(configname, configpath);
    UseParameter = true;
  }

  if (configNameProtected == "") {
    UseProtectedParameter = false;
  } else {
    configfilePP = new ConfigFile(configNameProtected, configpath);
    UseProtectedParameter = true;
  }

  this->joint = youbotjoint;
  FirmwareVersion firmwareVersion;

  joint->getConfigurationParameter(firmwareVersion);
  firmwareVersion.getParameter(controllerType, version);

  JointName jName;
  joint->getConfigurationParameter(jName);
  jName.getParameter(jointName);

  std::cout << std::setprecision(15);


  std::string firmwareVer;
  int controller = 0;
  if (UseParameter) {
    configfile->readInto(firmwareVer, "Joint_Type", "FirmwareVersion");
    configfile->readInto(controller, "Joint_Type", "ControllerType");
    if ((version != firmwareVer) || (controller != controllerType)) {
      UseParameter = false;
      throw std::runtime_error("The configuration file for the joint parameter contain the wrong controller type or firmware version!");
      delete configfile;
    }
  }

  if (UseProtectedParameter) {
    configfilePP->readInto(firmwareVer, "Joint_Type", "FirmwareVersion");
    configfilePP->readInto(controller, "Joint_Type", "ControllerType");
    if (!((version == firmwareVer) && controller == controllerType)) {
      UseProtectedParameter = false;
      throw std::runtime_error("The configuration file for the protected joint parameter contain the wrong controller type or firmware version!");
      delete configfile;
      delete configfilePP;
    }
  }

}

JointConfigurator::~JointConfigurator() {
  delete configfile;
  delete configfilePP;
}

bool JointConfigurator::AreSame(double A, double B) {
  return std::fabs(A - B) < 0.001;
}

void JointConfigurator::readParameters() {
  double dummy;

  if (!UseParameter) {
    std::cout << "There is no configuration file provided for the parameters!" << std::endl;
    return;
  }

 // std::cout << std::endl << "===========================================================" << std::endl;
  //std::cout << "Joint: " << jointName << std::endl;
 // std::cout << "Controller Type: " << controllerType << " Firmware version: " << version << std::endl << std::endl;

  joint->getConfigurationParameter(MaximumPositioningVelocity_Parameter);
  MaximumPositioningVelocity_Parameter.getParameter(MaximumPositioningVelocity_actual);
  configfile->readInto(dummy, "Joint_Parameter", "MaximumPositioningVelocity");
  MaximumPositioningVelocity_file = dummy * radian_per_second;
  if (!AreSame(MaximumPositioningVelocity_actual.value(), MaximumPositioningVelocity_file.value())) {
    //std::cout << "MaximumPositioningVelocity \t\t\t\tactual: " << MaximumPositioningVelocity_actual << " \tNEW VALUE: " << MaximumPositioningVelocity_file << std::endl;
  } else {
    //std::cout << "MaximumPositioningVelocity \t\t\t\tactual: " << MaximumPositioningVelocity_actual << std::endl;
  }

  ParameterRead = true;
}

void JointConfigurator::readPasswordProtectedParameters() {

}

//=======================READ ONLY =============================

void JointConfigurator::readReadOnlyParameters() {

}

void JointConfigurator::setParametersToJoint() {
  if (!ParameterRead) {
   // std::cout << "The Joint Parameters have to been read before hand!" << std::endl;
    return;
  }


  if (!AreSame(MaximumPositioningVelocity_actual.value(), MaximumPositioningVelocity_file.value())) {
    MaximumPositioningVelocity_Parameter.setParameter(MaximumPositioningVelocity_file);
    joint->setConfigurationParameter(MaximumPositioningVelocity_Parameter);
    std::cout << "MaximumPositioningVelocity set to: " << MaximumPositioningVelocity_file << std::endl;
  }

 


}

void JointConfigurator::setProtectedParametersToJoint() {

}

void JointConfigurator::storeParametersToJoint() {

}

void JointConfigurator::storeProtectedParametersToJoint() {


}

void JointConfigurator::getPassword() {



}
