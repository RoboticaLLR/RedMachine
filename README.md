# Engineering documentation/ Red Machine Team

This repository is contains all the materials required to make "Julian" The self driven robot created by the team "Red Machine", that will participate in the category of Future Engineers at WRO in Panama in the season of 2023
<p align = "center" >
   <img src="![Presentación sin título](https://github.com/RoboticaLLR/RedMachine/assets/146040398/cc87c9f8-e0f3-4a32-bead-c0493c13b1cd.png)" width="400" height="400" />

# Red Machine Members
-Angel Saul Rodriguez Guerra

-Samuel Jose Galban Franco

-Juan Diego Cano Barros

<p align = "center" >
   <img src="![redvmachine foto](https://github.com/RoboticaLLR/RedMachine/assets/146040398/cfd2db13-9177-4e90-8c5a-41be4fa94e9f)" width="400" height="400" />
   
# Introduction
We have made our biggest effort on doing the best robot we could. This has been really long road and it helped us a lot on things like programation, mechanical and design. After a lot of thinking and analyzing we have created out own stategy based on the electronical components we had, 
fervently believing that it will have a good performance in this edition of the WRO.

# Mechanical Design

The design of the robot is one of the biggest problem we have faced, we didnt have any idea on how to do a chassis, because we didnt have any kit or help, so we reused a acrylic base from a previous competition, and even thought the acrylic base did not work, it gave us a idea on how to make the base of the chassis. This phase was the 
definitely the hardest because we didnt have any help from anyone, and we didnt have any clue about how to start. 

Since this moment we focus on doing the chassis based on the requirements we will need in the future, such as the size and weight because we knew it may be a probblem in the future. so we cut the acrylic to the size using diferent tools, 
however as we did it for ourselves it had lots of imperfections on the holes we made, so it gave us lots of problems in the future, because it required us to be symetric and it wasnt. But because we dont have any better option at the moment and we had a regional competition very soon we leave that like that.




After doing our first base of the chassis, we started looking for a way to add a traction and a direction system because the rules were really specific about it, and we really focus on doing it, also we made all the spaces for the electronical componenetes such as the arduino, bridge H and sensors. At this moment we realized the asymetrical the acrylic was, but we were really in a hurry because of the competition and we aplied some 
momentary fixes to it. But overall the robot was doing a good performance and he started to score some points

# Strategy
In this part of the process we started to make the prototype a robot itself, by connecting all the electronic components and started coding to complete the first challeng and start earning our first 30 points. The components we use to complete this challenge was:

 Arduino Mega 2560: an open-source development board built with a micro controller, input and output signals, responsible for enabling and disabling certain components.

H-bridge: It is a type of electrical circuit that allows changing the polarity of a DC motor, forward and reverse. The H-Bridge model used is the L298N which allows us to change the speed depending on the voltage sent by the arduino.

Ultrasonic sensor: It is a sensor that uses ultrasonic sounds to detect the bounce time of the sound back and forth. Using the Arduino
Mega 2560 we can determine the distance based on the time it takes for the wave to return, performing the function of determining when there is a wall nearby, and thus making the corresponding turn.

TCS34725 color sensor: it is a sensor responsible for detecting colors in R G B C format, these being Red (R) Green (G) Blue (B) Clear (C) where it allows calculating the intensity of the colors and thus transmitting them to the Arduino Mega in a number from 0 to 65535 to associate them with the corresponding colors, allowing you to determine the colors present on the court, to decide which side to turn to.

Rev Robotics servo motor: An electric motor with an integrated position feedback sensor, which allows perfect angled movements to be made, using a signal that ranges from 0V to 5V, where each value that the voltage may have represents an exact angle, fulfilling with excellence the function of making the turns

Electric motor: a device that converts electrical energy into mechanical movement, allowing in this case to move a gearbox and mobilize the wheels. The speed and torque it has are determined by the voltage sent by the H-bridge, being moderated by the arduino.

The Arduino is powered by a 9v battery, which is turned on by a switch, and is responsible for powering and giving respective signals to the servomotor, it will be able to make the crossings effectively with ease, and also energize and receive the signals. the sensors, such as the ultra sound that sends and receives the signals to calculate the respective time, and with it, the distance to a certain obstacle, is also connected by serial to the color sensor, to receive the exact values ​​in RGBC


Moving on to the H bridge, this is connected and powered by a 3.7 v battery pack and is turned on by the same switch that turns on the Arduino.
The H-bridge receives signals from the Arduino so it receives digital and analog signals, giving it the ability to move the motor in different directions and speeds. It is also responsible for powering the Esp 32 cam through the 5v port.
