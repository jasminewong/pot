#include <Servo.h>
Servo jasmine;

void setup() {
jasmine.attach(9);
  
  
}
  

 void loop() {
  int pos;
  pos=map(analogRead(A0),0,1023,0,180);
  jasmine.write(pos);

}
