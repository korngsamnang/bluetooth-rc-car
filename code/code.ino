#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int INP1 = 12;
int INP2 = 11;
int INP3 = 10;
int INP4 = 9;

int f_led = 2;
int b_led = 3;
int buzzer = 4;
int song_ = 8;
char val;


void song(int buzzerPin){   //function for music code
  
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
void setup() {  
pinMode(INP4, OUTPUT);  
pinMode(INP3, OUTPUT);  
pinMode(INP2, OUTPUT);  
pinMode(INP1, OUTPUT);  
pinMode(f_led,OUTPUT);
pinMode(b_led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(song_,OUTPUT);

Serial.begin(9600);
lcd.init();
lcd.backlight();
lcd.clear();
lcd.setCursor(0,0);

//show on LCD
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
      digitalWrite(INP4, HIGH);
      digitalWrite(INP3, LOW);
      digitalWrite(INP2, HIGH);
      digitalWrite(INP1, LOW);  
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(INP4, LOW);
      digitalWrite(INP3, HIGH);
      digitalWrite(INP2, LOW);
      digitalWrite(INP1, HIGH); 
    }
  
    else if(val == 'L') //Left
    {
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, LOW);
    digitalWrite(INP2, HIGH);
    digitalWrite(INP1, LOW);
    }
    else if(val == 'R') //Right
    {
    digitalWrite(INP4, HIGH);
    digitalWrite(INP3, LOW);
    digitalWrite(INP2, LOW);
    digitalWrite(INP1, LOW); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, LOW);
    digitalWrite(INP2, LOW);
    digitalWrite(INP1, LOW); 
    }
  else if(val == 'I') //Forward Right
    {
    digitalWrite(INP4, HIGH);
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, LOW);
    digitalWrite(INP1, LOW);
    }
  else if(val == 'J') //Backward Right
    {
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, HIGH);
    digitalWrite(INP2, LOW);
    digitalWrite(INP1, LOW);
    }
   else if(val == 'G') //Forward Left
    {
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, LOW);
    digitalWrite(INP2, HIGH);
    digitalWrite(INP1, LOW);
    }
  else if(val == 'H') //Backward Left
    {
    digitalWrite(INP4, LOW);
    digitalWrite(INP3, LOW);
    digitalWrite(INP2, LOW);
    digitalWrite(INP1, HIGH); 
    }
   else if(val =='W'){  //Front light
    digitalWrite(f_led,HIGH);
   }
   else if(val =='w'){
    digitalWrite(f_led,LOW);
   }
   else if(val =='U'){  //Back light
    digitalWrite(b_led,HIGH);
   }
   else if(val =='u'){
    digitalWrite(b_led,LOW);
   }
   else if(val == 'V'){   //For trumpet
      //1
      tone(buzzer, 1000);
      delay(100);                
      noTone(buzzer);
      delay(100);
      //2
      tone(buzzer, 1000);
      delay(100);                    
      noTone(buzzer);
      delay(100);
      //3
      tone(buzzer, 1000);
      delay(300);             
      noTone(buzzer);
   }
   else if(val == 'v'){
      //1
      tone(buzzer, 1000);
      delay(100);             
      noTone(buzzer);
      delay(100);
      //2
      tone(buzzer, 1000);
      delay(100);                  
      noTone(buzzer);
      delay(100);
      //3
      tone(buzzer, 1000);
      delay(300);              
      noTone(buzzer);
 
   }
   if(val =='X'){   //For music
       song(song_);
   }
   else if(val =='x'){
      noTone(song_);
   }
   
}
