# Engineering documentation/ Red Machine Team

This repository contains all the materials required to make "Julian" The self-driven robot created by the team "Red Machine", that will participate in the category of Future Engineers at WRO in Panama in the season of 2023
<p align = "center" >
![julian mirando derecha 2](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a38632b7-3a61-49c0-ad2c-fa2d83c2da71)
 
# Red Machine Members
-Angel Saul Rodriguez Guerra

-Samuel Jose Galban Franco

-Juan Diego Cano Barros

<p align = "center" >
   <img src="![redvmachine foto](https://github.com/RoboticaLLR/RedMachine/assets/146040398/cfd2db13-9177-4e90-8c5a-41be4fa94e9f)" width="400" height="400" />
   
# Introduction
We have made our biggest effort to do the best robot we can. This has been really long road and it helped us a lot in things like programming, mechanicals, and design. After a lot of thinking and analyzing we created out own strategy based on the electronic components we had, 
fervently believing that it will have a good performance in this edition of the WRO.

# Mechanical Design

The design of the robot is one of the biggest problems we have faced, we didn't have any idea on how to do a chassis, because we didn't have any kit or help, so we reused an acrylic base from a previous competition, and even though the acrylic base did not work, it gave us an idea on how to make the base of the chassis. This phase was the 
definitely, the hardest because we didn't have any help from anyone, and we didn´t have any clue about how to start. 

Since that moment we have focused on doing the chassis based on the requirements we will need in the future, such as the size and weight because we knew it may be a problem in the future. so we cut the acrylic to the size using different tools, 
however as we did it for ourselves it had lots of imperfections in the holes we made, so it gave us lots of problems in the future because it required us to be symmetric and it wasn't. But because we don't have any better option at the moment and we have a regional competition very soon we leave that like that.

<p align = "center" >
   <img src="![Presentación sin título](https://github.com/RoboticaLLR/RedMachine/assets/146040398/5e0a29d8-d2a3-401f-85e7-1cde14bf6e51)" width="200" height="200" />


After doing our first base of the chassis, we started looking for a way to add traction and a direction system because the rules were really specific about it, and we really focused on doing it, also we made all the spaces for the electronic components such as the Arduino, bridge H and sensors. At this moment we realized the asymmetrical the acrylic was, but we were really in a hurry because of the competition and we applied some 
momentary fixes to it. But overall the robot was doing a good performance and he started to score some points

# Strategy
In this part of the process, we started to make the prototype a robot itself, by connecting all the electronic components and started coding to complete the first challenge and start earning our first 30 points. The components we used to complete this challenge were:

 Arduino Mega 2560: an open-source development board built with a microcontroller, and input and output signals, responsible for enabling and disabling certain components.
 <p align = "center" >
   <img src="![arduino mega](https://github.com/RoboticaLLR/RedMachine/assets/146040533/8b7f3519-9a16-42fe-908f-1c893ebd7c44)
" width="200" height="200" />

H-bridge: It is a type of electrical circuit that allows changing the polarity of a DC motor, forward and reverse. The H-Bridge model used is the L298N which allows us to change the speed depending on the voltage sent by the Arduino.
<p align = "center" >
   <img src="![puente H](https://github.com/RoboticaLLR/RedMachine/assets/146040533/877064c5-50a9-49cd-a4f7-e0c17d9782a3)" width="200" height="200" />

Ultrasonic sensor: It is a sensor that uses ultrasonic sounds to detect the bounce time of the sound back and forth. Using the Arduino
Mega 2560 we can determine the distance based on the time it takes for the wave to return, performing the function of determining when there is a wall nearby, and thus making the corresponding turn.
<p align = "center" >
   <img src="![Presentación sin título](https://github.com/RoboticaLLR/RedMachine/assets/146040398/5343f0f9-0859-45bf-b75e-fe573f4b4473) " width="200" height="200" />

TCS34725 color sensor: it is a sensor responsible for detecting colors in R G B C format, these being Red (R) Green (G) Blue (B) Clear (C) where it allows calculating the intensity of the colors and thus transmitting them to the Arduino Mega in a number from 0 to 65535 to associate them with the corresponding colors, allowing you to determine the colors present on the court, to decide which side to turn to.
<p align = "center" >
   <img src="![rgb sensor](https://github.com/RoboticaLLR/RedMachine/assets/146040533/e38bddea-d411-4ba1-a98a-8904d23f571b)" width="200" height="200" />

Rev Robotics servo motor: An electric motor with an integrated position feedback sensor, which allows perfect angled movements to be made, using a signal that ranges from 0V to 5V, where each value that the voltage may have represents an exact angle, fulfilling with excellence the function of making the turns
<p align = "center" >
   <img src="![servo](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a7145cfb-a3f8-41a6-a8c5-6c2951a2739b)" width="200" height="200" />

Electric motor: a device that converts electrical energy into mechanical movement, allowing in this case to move a gearbox and mobilize the wheels. The speed and torque it has are determined by the voltage sent by the H-bridge, being moderated by the Arduino.
<p align = "center" >
   <img src="![motor](https://github.com/RoboticaLLR/RedMachine/assets/146040533/25cdd9e8-1a60-463b-9196-becf5f72caca)" width="200" height="200" />

The Arduino is powered by a 9v battery, which is turned on by a switch, and is responsible for powering and giving respective signals to the servomotor, it will be able to make the crossings effectively with ease, and also energize and receive the signals. the sensors, such as the ultrasound that sends and receives the signals to calculate the respective time, and with it, the distance to a certain obstacle, are also connected by serial to the color sensor, to receive the exact values ​​in RGBC


Moving on to the H bridge, this is connected and powered by a 3.7 v battery pack and is turned on by the same switch that turns on the Arduino.
The H-bridge receives signals from the Arduino so it receives digital and analog signals, giving it the ability to move the motor in different directions and speeds. It is also responsible for powering the Esp 32 cam through the 5v port.
