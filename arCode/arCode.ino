
#include <NewPing.h>

#define trig 11
#define echo 12
#define max_distance 70


NewPing sonar(trig,echo,max_distance);

void setup(){
   Serial.begin(9600);
   
}
void loop(){
 int s = sonar.ping_cm(); 
 if(s>5){
 Serial.println(s);
 delay(500);
 }
}
