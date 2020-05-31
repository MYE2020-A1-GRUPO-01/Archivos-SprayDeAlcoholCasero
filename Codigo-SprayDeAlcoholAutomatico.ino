#include <Servo.h>
Servo myservo; 

#define led  2    
#define beep 3
#define sensor  4
 
void setup(){
 pinMode(sensor,INPUT_PULLUP);
 pinMode(beep,OUTPUT);  
 pinMode(led,OUTPUT);
 myservo.attach(13);
 myservo.write(0);
 delay(200);
}
 
void loop(){
if (digitalRead(sensor) == HIGH)
{
  digitalWrite(led,HIGH);
  delay(40);
  digitalWrite(led,LOW);
  delay(40);
  digitalWrite(led,HIGH);
  digitalWrite(beep,HIGH);
  delay(80);
  digitalWrite(beep,LOW);
  
  myservo.write(100);
  delay(700);
  myservo.write(0);
  delay(100);  
 
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(80);
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(80);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(80);
  digitalWrite(beep,LOW);
  delay(2000);
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
  }
}
