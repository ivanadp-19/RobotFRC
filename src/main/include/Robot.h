// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include <frc/XboxController.h>
#include <frc/TimedRobot.h>
#include <frc/motorcontrol/VictorSP.h>
#include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;


  frc::XboxController xbox{0};
  frc::VictorSP leftMotor{0};
  frc::VictorSP rightMotor{1};

  bool leftBump = false;
  bool rightBump = false; 
  bool bA = false;
  bool bB = false;
  bool bX = false; 
  bool bY = false;

  double leftX = 0.0;
  double leftY = 0.0;
  double rightX = 0.0;
  double rightY = 0.0;

};
