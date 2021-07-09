# Serial Communication Between two Arduinos Triggered by an Ultrasonic Sensor

Here are two Arduino codes to send data from one Arduino to another. the data is sent by the primary Arduino only when someone is half a meter close to an ultrasonic for 3 seconds. Along with sending the data, three pairs of servo motors will move according to specified coordinates. The coordinates of the servo motors are specified to be compatible with a robot designed by Smart Methods Est.

## Repository Content
* Arduino code for the transmitter Arduino.
* Arduino code for the receiver Arduino.
* Circuit Diagram.


## More Infomation

![Reception Robot](https://github.com/AbdullahAlshambri/MovingRobotHands/blob/main/Pictures/Reception%20Robot.jpeg?raw=true)

The two codes were written to program the illustrated robot's ultrasonic sensor to send a signal to another Arduino via a primary Arduino. When a person stands in front of the robot, three readings are committed by the ultrasonic sensor(1 reading= a second). If all three reading are less than half a meter, then the robot moves its hands in a certain way and a signal is transmitted to another Arduino that can be programmed to do any task. 
