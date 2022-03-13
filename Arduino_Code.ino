
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLTTvJohfL"
#define BLYNK_DEVICE_NAME "Automation"

#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); // parameter as int 
  if(s0 == HIGH)
  {    
    digitalWrite(D1,HIGH);
    Serial.println("D1 High");
    delay(10);
    }  
    if(s0 == LOW)
  {
    digitalWrite(D1,LOW);
    Serial.println("D1 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); // parameter as int 
  if(s1 == HIGH)
  {    
    digitalWrite(D2,HIGH);
    Serial.println("D2 High");
    delay(10);
    }  
    if(s1 == LOW)
  {
    digitalWrite(D2,LOW);
    Serial.println("D2 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); // parameter as int 
  if(s2 == HIGH)
  {    
    digitalWrite(D5,HIGH);
    Serial.println("D5 High");
    delay(10);
    }  
    if(s2 == LOW)
  {
    digitalWrite(D5,LOW);
    Serial.println("D5 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); // parameter as int 
  if(s3 == HIGH)
  {    
    digitalWrite(D6,HIGH);
    Serial.println("D6 High");
    delay(10);
    }  
    if(s3 == LOW)
  {
    digitalWrite(D6,LOW);
    Serial.println("D6 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V4)
{
  int s4 = param.asInt(); // parameter as int 
  if(s4 == HIGH)
  {    
    digitalWrite(D7,HIGH);
    Serial.println("D7 High");
    delay(10);
    }  
    if(s4 == LOW)
  {
    digitalWrite(D7,LOW);
    Serial.println("D7 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V5)
{
  int s5 = param.asInt(); // parameter as int 
  if(s5 == HIGH)
  {    
    digitalWrite(D8,HIGH);
    Serial.println("D8 High");
    delay(10);
    }  
    if(s5 == LOW)
  {
    digitalWrite(D8,LOW);
    Serial.println("D8 Low");
    delay(10);
    }  
}

void setup()
{
  Serial.begin(9600);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
  
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);

  BlynkEdgent.begin();
}

void loop() {
    BlynkEdgent.run();
}
