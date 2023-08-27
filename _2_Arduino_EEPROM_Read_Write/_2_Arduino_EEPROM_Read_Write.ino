
//Board used      -> Arduino UNO -ATmega328P-28Pin
//EEPROM Capacity -> 1024 bytes
//(c)www.xanthium.in

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
 {
  Serial.begin(9600); //to send data to serial monitor
  
  int EEPROM_location_address = 0;
  int value_to_write = 25;
  int value;

  EEPROM.write(EEPROM_location_address,value_to_write);

  value = EEPROM.read(EEPROM_location_address);

  Serial.println();
  Serial.print("EEPROM location = "); Serial.print(EEPROM_location_address); Serial.print(" Data = "); Serial.print(value);

}

void loop()
 {
  // put your main code here, to run repeatedly:

}
