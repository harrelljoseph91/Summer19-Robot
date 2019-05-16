#include <Servo.h>
#include <math.h>

Servo myservo; //Create servo object
const int servoPin = 9; //Servo pin
const int irPin = A5; //Ir sensor pin
const float adj = 0.3; //Distance from sensor to cannon(m)
float opp; //Variable for sensor distance(m)
float sensor; //Variable for initial sensor reading
float pos = 0; //store servo position

void setup() 
{
  myservo.attach(servoPin);
}

void loop() 
{
  sensor = analogRead(irPin);
  opp = (10650.08 * pow(sensor, -0.935) - 10) / 100;
  pos = atan2(opp, adj);
  pos = convert(pos);
  myservo.write(pos);
}

//Converts angle to degrees
float convert(float pos)
{
  pos = (pos * 180) / M_PI;
  return pos;
}
