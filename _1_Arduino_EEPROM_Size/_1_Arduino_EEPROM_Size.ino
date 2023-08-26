
//Board used      -> Arduino UNO -ATmega328P-28Pin
//EEPROM Capacity -> 1024 bytes
//(c)www.xanthium.in

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup() 
{
  
  Serial.begin(9600); //to send data to serial monitor
 
  unsigned int EEPROM_Size = 0;  // Variable to get the number of eeprom locations

  EEPROM_Size = EEPROM.length(); //Get the total number of bytes on the eeprom 
  
  Serial.println();
  Serial.print("EEPROM Size = ");
  Serial.print(EEPROM_Size);
  Serial.print(" 8bit locations");
  
  
}

void loop() 
{
  

}
