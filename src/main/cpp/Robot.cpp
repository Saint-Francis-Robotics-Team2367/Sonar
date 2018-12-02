#include "Robot.h"
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Ultrasonic.h>
#include <frc/DigitalOutput.h>
#include <frc/DigitalInput.h>
#include <frc/DriverStation.h>
#include <string>
#include <frc/AnalogInput.h>

using namespace frc;

//Creating objects
  Ultrasonic *ultra;
  AnalogInput * aiPort;

//varables
  double value;
  double valuePerInch;
  std::string rangeString;


void Robot::RobotInit() {
  m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);

}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  //HC-SR04
    ultra = new Ultrasonic(0, 1);
	  ultra->SetAutomaticMode(true);

  //MB1013 HRLV-MaxSonar-EZ1
    aiPort = new AnalogInput(0);
    aiPort->SetOversampleBits(1);
    aiPort->SetAverageBits(0);
    frc::AnalogInput::SetSampleRate(62500);
}

void Robot::AutonomousPeriodic() {
  //HC-SR04
    std::string range = std::to_string(ultra->GetRangeInches()); // reads the range on the ultrasonic sensor and converts it to a string
    DriverStation::ReportError("rangeForHC-SR04: " + range);

  //MB1013 HRLV-MaxSonar-EZ1
    value = aiPort->GetValue();
    valuePerInch = 21;//This is a number that is estimated to be value per inch
    rangeString  = std::to_string(value/ valuePerInch);
    DriverStation::ReportError("rangeForMB1013: " + rangeString);
}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {}
void Robot::TestPeriodic() {}
#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif