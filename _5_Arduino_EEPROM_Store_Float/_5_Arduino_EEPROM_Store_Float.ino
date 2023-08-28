
// Board used      -> Arduino UNO -ATmega328P-28Pin
// EEPROM Capacity -> 1024 bytes
// (c)www.xanthium.in

//Store 3 float values in EEProm using EEPROM.get() and EEPROM.put()

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
{
  Serial.begin(9600); //to send data to serial monitor

  float float_value_1 = 111.11;
  float float_value_2 = 222.22;
  float float_value_3 = 333.33;

  int EEPROM_address_1 = 0;                 // start address = 0
  int EEPROM_address_2 = sizeof(float);     // start address = 4
  int EEPROM_address_3 = (sizeof(float)*2); // start address = 8
  
  Serial.println(EEPROM_address_1);//start address EEPROM_address_1
  Serial.println(EEPROM_address_2);//start address EEPROM_address_2
  Serial.println(EEPROM_address_3);//start address EEPROM_address_3

  EEPROM.put(EEPROM_address_1, float_value_1);//store the float value 111.11 at address = 0
  EEPROM.put(EEPROM_address_2, float_value_2);//store the float value 222.22 at address = 4
  EEPROM.put(EEPROM_address_3, float_value_3);//store the float value 333.33 at address = 8

  Serial.println(EEPROM.get(EEPROM_address_1, float_value_1));//get the float value and send to output
  Serial.println(EEPROM.get(EEPROM_address_2, float_value_2));//get the float value and send to output
  Serial.println(EEPROM.get(EEPROM_address_3, float_value_3));//get the float value and send to output

 
}

void loop() 
{
  // put your main code here, to run repeatedly:

}
