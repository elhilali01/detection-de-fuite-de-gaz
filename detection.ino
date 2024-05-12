#include <LiquidCrystal.h>

#include <Servo.h>

Servo myservo;

LiquidCrystal lcd (12,11,5,4,3,2);

int gas=A5;

//int fan=10;

int redled=12;

int greenled = 11;

int buzzer=10;

int pos=07;

void setup() {

pinMode (gas ,INPUT); 
myservo.attach(10);
}

void loop(){

if (digitalRead (gas) ==HIGH){ 
  
lcd.begin(16,2);

lcd.setCursor (0,0);

lcd.print(" GAZ >=350 ppm "); 
lcd.setCursor (0, 1);

lcd.print (" gas is detected ");

digitalWrite (11, LOW);

digitalWrite(12, HIGH);
tone (buzzer, 450);

digitalWrite(10, HIGH);
delay (1000);

noTone (buzzer);

for (pos=0;pos<=90;pos++) {
  myservo.write(pos);

delay(3);}
}
else{

lcd.begin(16,2);

lcd.setCursor (0, 0); 
lcd.print (" GAZ < 350 ppm ");

lcd.setCursor (0,1); 
lcd.print (" gas no detected");
digitalWrite(11,LOW);
digitalWrite(12,LOW);}
}
