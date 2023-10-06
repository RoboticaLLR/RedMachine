# Engineering documentation/ Red Machine Team

This repository contains all the materials required to make "Julian" The self-driven robot created by the team "Red Machine", that will participate in the category of Future Engineers at WRO in Panama on the 2023 season. 


 ![julian mirando derecha 2](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a38632b7-3a61-49c0-ad2c-fa2d83c2da71)

 
# Red Machine Members
-Samuel Jose Galban Franco

-Juan Diego Cano Barros

-Angel Saul Rodriguez Guerra

![red machine team pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/b7eeb760-babc-4338-b1a4-e9a426606d17)

   
# Introduction
We have made our biggest effort to do the best robot we can. This has been a really long road and it helped us a lot to learn programming, mechanicals, and design. After a lot of thinking and analyzing we created out our own strategy based on the electronic components we had, fervently believing that it will have a good performance in this edition of the WRO.

# Mechanical Design
The robot design was one of the biggest problems we have faced in all the competition stages. The acrylic bases we used on the previous competitions did not work, because they had a lot of imperfections, causing the traccion and direction system to be poorly located, as a really bad weight distribution. Despite all this, that chassis gave us an idea of how to design a new one, so after the national competition, we decided to do a laser cut to brand new acrylic bases. After this, the chassis was really good in all aspects. 
Besides that, we changed the robot's wheels for new ones that would hold better to the steering system, which also provided better aesthetics to the robot.

![bases de acrilico pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1ab2bf5b-492d-4d9f-b8cb-7154f9053f9f)

# Strategy
In this part of the process, we started to make the prototype a robot itself, by connecting all the electronic components and started coding to complete the first challenge and start earning our first 30 points. The components we used to complete this challenge were:

 Arduino Mega 2560: an open-source development board built with a microcontroller, and input and output signals, responsible for enabling and disabling certain components.
 
![arduino mega 2560 pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1b59a507-53a0-48d4-b9d8-0b8b94bf1d2d)


H-bridge: It is a type of electrical circuit that allows changing the polarity of a DC motor, forward and reverse. The H-Bridge model used is the L298N which allows us to change the speed depending on the voltage sent by the Arduino.

![puente H pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/264757f2-118f-42c9-9dd8-2a3c91455834)

Ultrasonic sensor: It is a sensor that uses ultrasonic sounds to detect the bounce time of the sound back and forth. Using the Arduino
Mega 2560 we can determine the distance based on the time it takes for the wave to return, performing the function of determining when there is a wall nearby, and thus making the corresponding turn.

![ultrasonido pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/e8f17278-35e8-451b-9eb3-8465666ceec9)

TCS34725 color sensor: it is a sensor responsible for detecting colors in R G B C format, these being Red (R) Green (G) Blue (B) Clear (C) where it allows calculating the intensity of the colors and thus transmitting them to the Arduino Mega in a number from 0 to 65535 to associate them with the corresponding colors, allowing you to determine the colors present on the court, to decide which side to turn to.

![rgb sensor pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/82128139-e35c-4e55-8477-f4b4c398e678)

Rev Robotics servo motor: An electric motor with an integrated position feedback sensor, which allows perfect angled movements to be made, using a signal that ranges from 0V to 5V, where each value that the voltage may have represents an exact angle, fulfilling with excellence the function of making the turns

![servo pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/57aaa91d-b5e5-4360-aef2-06025d15f8b0)

Electric motor: a device that converts electrical energy into mechanical movement, allowing in this case to move a gearbox and mobilize the wheels. The speed and torque it has are determined by the voltage sent by the H-bridge, being moderated by the Arduino.

![motor pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a74aacac-0276-49b0-abc1-485906c2a775)


The Arduino is powered by a 9v battery, which is turned on by a switch, and is responsible for powering and giving respective signals to the servomotor, so it will be able to make the crossings effectively with ease, and also energize and receive the signals. the sensors, such as the ultrasound that sends and receives the signals to calculate the respective time, and with it, the distance to a certain obstacle, are also connected by serial to the color sensor, to receive the exact values ​​in RGBC


Finally, the H bridge is connected and powered by a 3.7 v battery pack and is turned on by the same switch that turns on the Arduino.
The H-bridge receives signals from the Arduino so it receives digital and analog signals, giving it the ability to move the motor in different directions and speeds. It is also responsible for powering the Esp32-cam through the 5v port.
