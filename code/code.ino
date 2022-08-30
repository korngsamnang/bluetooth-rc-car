// Starting of Program
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int m1a = 9;
int m1b = 10;
int m2a = 11;
int m2b = 12;
int f_led = 2;
int b_led = 3;
int buzzer = 4;
int extra_on = 8;
char val;


void song(int buzzerPin){
  
  tone(buzzerPin, 262);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(115);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(115);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(692);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(346);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(115);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(346);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(115);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(692);
  noTone(buzzerPin);
}


//
void setup() 
{  
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 13 set as output Pin
pinMode(f_led,OUTPUT);
pinMode(b_led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(extra_on,OUTPUT);
Serial.begin(9600);
lcd.init();
lcd.backlight();
lcd.clear();
lcd.setCursor(0,0);
lcd.print("      RUPP");
lcd.setCursor(0,1);
lcd.print(" Car Project A7");
}

void loop()
{
  
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'F') // Forward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);  
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH); 
    }
  
    else if(val == 'L') //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
    else if(val == 'R') //Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
  else if(val == 'I') //Forward Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
  else if(val == 'J') //Backward Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
   else if(val == 'G') //Forward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
  else if(val == 'H') //Backward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH); 
    }
   else if(val =='W'){
    digitalWrite(f_led,HIGH);
   }
   else if(val =='w'){
    digitalWrite(f_led,LOW);
   }
   else if(val =='U'){
    digitalWrite(b_led,HIGH);
   }
   else if(val =='u'){
    digitalWrite(b_led,LOW);
   }
   else if(val == 'V'){
//    tone(buzzer, 1000);
//    delay(100);
//    noTone(buzzer); 

      //1
      tone(buzzer, 1000);
      delay(100);                       // wait for a second
      noTone(buzzer);
      delay(100);
      //2
      tone(buzzer, 1000);
      delay(100);                       // wait for a second
      noTone(buzzer);
      delay(100);
      //3
      tone(buzzer, 1000);
      delay(300);                       // wait for a second
      noTone(buzzer);
      //delay(300);
    
   }
   else if(val == 'v'){
      //1
      tone(buzzer, 1000);
      delay(100);                       // wait for a second
      noTone(buzzer);
      delay(100);
      //2
      tone(buzzer, 1000);
      delay(100);                       // wait for a second
      noTone(buzzer);
      delay(100);
      //3
      tone(buzzer, 1000);
      delay(300);                       // wait for a second
      noTone(buzzer);
      //delay(300);
   }
   if(val =='X'){
    
       song(extra_on);
   }
   else if(val =='x'){
      noTone(extra_on);
   }
   
}
