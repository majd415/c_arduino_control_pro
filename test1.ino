
#include <Servo.h>

Servo motor;
int trigpin=8;
int echopin=9;
int led=11;
int light=A7;
int val=0;
long microsecondsToInches(long microseconds) {

  return microseconds / 74 / 2;
}
  long microsecondsToCentimeters(long microseconds) {

  return microseconds / 29 / 2;
}
void setup()  
{ 

Serial.begin(9600);
pinMode(trigpin,OUTPUT);
   pinMode(echopin,INPUT);
   pinMode(10,OUTPUT);
    pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
 pinMode(A1,INPUT);
  pinMode(7,OUTPUT);
motor.attach(13);
  pinMode(led,OUTPUT);
pinMode(light,INPUT);
  
   
} 

void loop()  
{  

  val=analogRead(light);
 if(val<100){
  digitalWrite(led,HIGH);}
else if(val>100){
  digitalWrite(led,LOW);
  
  }
  /////////////////////////
  long duration, inches, distance,distance2,distance3;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
 distance = microsecondsToCentimeters(duration);
   Serial.print(inches);
  Serial.print("in, ");
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  ////////////////////////



  
 if(distance>6){
 
  analogWrite(2,250);
 analogWrite(3,0);
 analogWrite(4,250);
 analogWrite(5,0);
  motor.write(100);
  digitalWrite(10,LOW);
  
  Serial.println(distance);
 

 
  
 }    
 else if (distance<=6){

   digitalWrite(10,HIGH);
  analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
   int  v=analogRead(A1);
    Serial.println("Back Distance = ");
   Serial.println(v);
   
 delay(2000);
 
if(v<100){
  digitalWrite(10,HIGH);
  analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0
 );}
 else if (v>100){
  digitalWrite(10,HIGH);
  analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
 delay(2000);
  analogWrite(2,0);
 analogWrite(3,150);
 analogWrite(4,0);
 analogWrite(5,150);
 ///////////////////
 delay(2000);
 analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
  
  motor.write(180);
     delay(2000);
    digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
  distance2 = microsecondsToCentimeters(duration);
   Serial.print(inches);
  Serial.print("in, ");
  Serial.print(distance2);
  Serial.print("cm");
  Serial.println();
   delay(2000);
   motor.write(50);
   delay(2000);
    digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
  distance3 = microsecondsToCentimeters(duration);
   Serial.print(inches);
  Serial.print("in, ");
  Serial.print(distance3);
  Serial.print("cm");
  Serial.println();
   delay(1000);
   ///??????????
   if(distance2<distance3){
      analogWrite(2,0);
 analogWrite(3,0);
   analogWrite(4,100);
 analogWrite(5,0);
  delay(1000);
 ///////
  analogWrite(2,250);
 analogWrite(3,0);
 analogWrite(4,250);
 analogWrite(5,0);
 delay(2000);//////////////////
 ////////////////
  analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
 ////////
 
   delay(2000);
    motor.write(180);
    delay(2000);
    digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
 int distance4 = microsecondsToCentimeters(duration);
 Serial.print(distance4);
  Serial.print("cm");
  Serial.println();///////
  if(distance4>6){
     delay(1000);
    analogWrite(4,0);
 analogWrite(5,0);
       analogWrite(2,100);
 analogWrite(3,0);
     delay(1000);
    }
    else if(distance4<6){
      
      analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
      
      }
    
    
    }
    else if(distance2>distance3){
      
   analogWrite(4,0);
 analogWrite(5,0);
       analogWrite(2,100);
 analogWrite(3,0);
  delay(1000);
 ///////////////////
  analogWrite(2,250);
 analogWrite(3,0);
 analogWrite(4,250);
 analogWrite(5,0);
 delay(2000);////////////////////////
 ///////
  analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
 ///////
   delay(2000);
    motor.write(30);
    delay(2000);
    digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
 int distance5 = microsecondsToCentimeters(duration);
 Serial.print(distance5);
  Serial.print("cm");
  Serial.println();
   if(distance5>6){
     delay(1000);
   analogWrite(2,0);
 analogWrite(3,0);
   analogWrite(4,100);
 analogWrite(5,0);
  delay(1000);
    
    }
    else if(distance5<6){
      
      analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
      
      }

      }
      else if(distance2==distance3){
 analogWrite(4,0);
 analogWrite(5,0);
       analogWrite(2,250);
 analogWrite(3,0);
  delay(2000);
 ///////////////////
  analogWrite(2,250);
 analogWrite(3,0);
 analogWrite(4,250);
 analogWrite(5,0);
   delay(2000);
    motor.write(50);
    delay(2000);
    digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  digitalWrite(echopin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  digitalWrite(echopin, LOW);
  duration = pulseIn(echopin, HIGH);
  inches = microsecondsToInches(duration);
 int distance5 = microsecondsToCentimeters(duration);
 Serial.print(distance5);
  Serial.print("cm");
  Serial.println();
   if(distance5>6){
     delay(2000);
   analogWrite(2,0);
 analogWrite(3,0);
   analogWrite(4,250);
 analogWrite(5,0);
  delay(2000);
    
    }
    else if(distance5<6){
      
      analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
      
      }
        
        }}
   
  
  
  
  }

}
