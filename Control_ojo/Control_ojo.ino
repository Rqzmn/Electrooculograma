//Se agrega la libreria de servo
#include <Servo.h>

//Se agregan nuestro servos
Servo servo1;
Servo servo2;

//Se define pins joystick (Analog)
int joyX = A1;
int joyY = A0;

// variable para leer los valores anologos de los pins
int joyVal;
int joyValu;
int joyVale;
void setup()
{
  // colocamos nuestros servos en pins PWM 3-5
  Serial.begin(9600);
  
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  // leer las variables de joystick (entre 0-1023)
  joyVal = analogRead(joyX);
  joyValu = analogRead(joyY);
  joyValu = map (joyValu, 0, 1024, 45, 135);
  joyVal = map (joyVal, 0, 1024, 45, 135); //servo volor entre (0-180)
  servo1.write(joyVal); // mueve el servo en la posiscion acordada por el joystick
  servo2.write(joyValu);
 
