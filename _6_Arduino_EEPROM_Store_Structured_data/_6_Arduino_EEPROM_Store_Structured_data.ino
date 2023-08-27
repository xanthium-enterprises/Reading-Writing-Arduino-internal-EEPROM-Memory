
// Board used      -> Arduino UNO -ATmega328P-28Pin
// EEPROM Capacity -> 1024 bytes
// (c)www.xanthium.in

// Store struct values in EEProm using EEPROM.get() and EEPROM.put()

#include <EEPROM.h> // Library for accessing internal EEPROM

struct mystruct
{
  float f;
  byte  b;     // 8-bit unsigned number, from 0 to 255
  char text[10];
};

void setup()
{
  Serial.begin(9600); //to send data to serial monitor

  int EEPROM_address  = 0;
  int EEPROM_address2 = 0;

  mystruct MySt = {12.56,8,"Hello"};
  //mystruct MySt = {0,0,"-"};

  mystruct MySt2 = {34.56,6,"World"};
  //mystruct MySt2 = {0,0,"="};

  EEPROM.put(EEPROM_address, MySt);//store the structure MySt
  
  EEPROM_address2 = sizeof(MySt);

  
  EEPROM.put(EEPROM_address2, MySt2);//store the structure MySt2

  EEPROM.get(EEPROM_address, MySt);
  EEPROM.get(EEPROM_address2, MySt2);

  Serial.println();

  Serial.println(MySt.f);
  Serial.println(MySt.b);
  Serial.println(MySt.text);

  Serial.println(MySt2.f);
  Serial.println(MySt2.b);
  Serial.println(MySt2.text);



}

void loop() {
  // put your main code here, to run repeatedly:

}
