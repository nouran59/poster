// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin =1; 
// Create a servo object 
Servo Servo2; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo2.attach(servoPin); 
}
void loop(){ 
     // Make servo go to 0 degrees 
   Servo2.write(0); 
   delay(1000); 
   // Make servo go to 90 degrees 
   Servo2.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo2.write(180); 
   delay(1000); 
}
