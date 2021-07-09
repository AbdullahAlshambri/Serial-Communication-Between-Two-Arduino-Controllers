
#include <Servo.h>
#define trigPin 13
#define echoPin 12
// defining parts

Servo Shoulder1;

Servo forearm1;

Servo Arm1;

Servo Arm2;

Servo forearm2;

Servo Shoulder2;

long duration;

int distance;

int period;

char mystr[100] = "https://www.s-m.com.sa/";

int seconds;
int distance1;
int distance2;
int distance3;


void setup()
{
Shoulder1.attach(9, 500, 2500);

forearm1.attach(10, 500, 2500);

Arm1.attach(11, 500, 2500);

Arm2.attach(3, 500, 2500);

forearm2.attach(5, 500, 2500);

Shoulder2.attach(6, 500, 2500);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);
 
Serial.begin(9600);
  
 
}

void loop()
{
  { seconds=0;
  while (seconds < 4){
   
   digitalWrite(trigPin, LOW);
   delayMicroseconds(5);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration * 0.034 / 2;
   Serial.print("Distance = ");
   Serial.print(distance);
   Serial.println(" cm");

    if(seconds==1){ distance1=distance;
                  }
     if(seconds==2){ distance2=distance;
                   }
     if(seconds==3){ distance3=distance;
                   }
    seconds=seconds+1;
    delay(1000);
    
  }
  }   

  
if (70 >= distance1 && 70 >= distance2 && 70 >= distance3) {
    
    // Hands Down
    Shoulder1.write(0);
    Shoulder2.write(0);
    forearm1.write(0);
    forearm2.write(0);
    Arm1.write(0);
    Arm2.write(0);
    Serial.write(mystr,100);
    delay(80);
    
    

} else {
  
// initial position
  Shoulder1.write(90);
  Shoulder2.write(90);
  forearm1.write(45);
  forearm2.write(45);
  Arm1.write(45);
  Arm2.write(45);
  
  }
  delay(10);

}
