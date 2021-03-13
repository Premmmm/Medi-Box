#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

const char *ssid     = "OnePlus 6T P";
const char *password = "........";

const long utcOffsetInSeconds = 19800;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

int a;
int b;
int c;
int d;


void setup(){
  Serial.begin(9600);

  WiFi.begin(ssid, password);

pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }
  Serial.println();
  timeClient.begin();
}

void loop() 
{

  timeClient.update();

  Serial.println(daysOfTheWeek[timeClient.getDay()]);
  //Serial.print(timeClient.getDay());
  Serial.print(", ");
  Serial.print(timeClient.getHours());
  Serial.print(":");
  Serial.println(timeClient.getMinutes());
  //Serial.print(":");
  //Serial.println(timeClient.getSeconds());
//  Serial.println(a);
//  Serial.println(b);
//  Serial.println(c);

  a=timeClient.getDay();
  b=timeClient.getHours();
  c=timeClient.getMinutes();
  d=timeClient.getSeconds();
  delay(1000);




                                                                // SUNDAY 
    

  
  
  if(a==0 && b ==18 && c == 25)
  {
    digitalWrite(D0,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==0 && b == 17 && c==00)
  {
    digitalWrite(D0,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==0 && b ==20 && c==00)
  {
    digitalWrite(D0,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
    
  }
 else
 {
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



 
                                                                             //MONDAY 

 
   
   
   if(a==1 && b ==17 && c == 32)
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==1 && b == 14 && c==00)
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==1 && b ==20 && c==00)
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
  digitalWrite(D7,LOW);
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



                                                            
    
                                                            //TUESDAY 
  
  
  
  if(a==2 && b ==17 && c == 33)
  {
    digitalWrite(D2,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==2 && b == 14 && c==00)
  {
    digitalWrite(D2,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==2 && b ==20 && c==00)
  {
    digitalWrite(D2,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
  
   digitalWrite(D7,LOW);
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



 
                                                            // WEDNESDAY
 
   
   
   
   if(a==3 && b ==17 && c == 34)
  {
    digitalWrite(D3,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==3 && b == 14 && c==00)
  {
    digitalWrite(D3,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==3 && b ==20 && c==00)
  {
    digitalWrite(D3,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
  digitalWrite(D7,LOW);
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



 
                                                                 //THURSDAY
 
  
  
  
  if(a==4 && b ==17 && c == 35)
  {
    digitalWrite(D4,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==4 && b == 14 && c==00)
  {
    digitalWrite(D4,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==4 && b ==20 && c==00)
  {
    digitalWrite(D4,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
   digitalWrite(D7,LOW);
   digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



 
                                                                     //FRIDAY
 
  
  
  
  if(a==5 && b ==17 && c == 36)
  {
    digitalWrite(D5,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==5 && b == 14 && c==00)
  {
    digitalWrite(D5,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==5 && b ==20 && c==00)
  {
    digitalWrite(D5,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
  digitalWrite(D7,LOW);
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  Serial.println('o');
  delay(1000);
 }



  
                                                               //SATURDAY
  
  
  
  
  if(a==6 && b ==18 && c == 16)
  {
    digitalWrite(D6,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  
  else if(a==6 && b == 14 && c==00)
  {
    digitalWrite(D6,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
  else if(a==6 && b ==20 && c==00)
  {
    digitalWrite(D6,HIGH);
    digitalWrite(D7,HIGH);
    Serial.println('h');
    delay(1000);
  }
   else
 {
  digitalWrite(D7,LOW);
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
    Serial.println('o');
  delay(1000);
 }
 }
  
