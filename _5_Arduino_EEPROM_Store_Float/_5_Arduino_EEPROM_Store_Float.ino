
// Board used      -> Arduino UNO -ATmega328P-28Pin
// EEPROM Capacity -> 1024 bytes
// (c)www.xanthium.in
//Store float values in EEProm using EEPROM.get() and EEPROM.put()

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
{
  Serial.begin(9600); //to send data to serial monitor

  float float_value_1 = 111.11;
  float float_value_2 = 222.22;
  float float_value_3 = 333.33;

  int EEPROM_address_1 = 0;
  int EEPROM_address_2 = sizeof(float);
  int EEPROM_address_3 = (sizeof(float)*2);

  EEPROM.put(EEPROM_address_1, float_value_1);//store the float value 
  EEPROM.put(EEPROM_address_2, float_value_2);//store the float value 
  EEPROM.put(EEPROM_address_3, float_value_3);//store the float value 

  Serial.println(EEPROM.get(EEPROM_address_1, float_value_1));//get the float value and send to output
  Serial.println(EEPROM.get(EEPROM_address_2, float_value_2));//get the float value and send to output
  Serial.println(EEPROM.get(EEPROM_address_3, float_value_3));//get the float value and send to output

 
}

void loop() 
{
  // put your main code here, to run repeatedly:

}
