// Board used      -> Arduino UNO -ATmega328P-28Pin
// EEPROM Capacity -> 1024 bytes
// (c)www.xanthium.in

//Store 1 float value in EEProm using EEPROM.get() and EEPROM.put()

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
{
    Serial.begin(9600); //to send data to serial monitor

    float float_value_1 = 24.56;  // float value to write to EEPROM (2 bytes)
    float read_value = 0.0;       
   
    int EEPROM_address_1 = 4;     // Address of the location
   
   EEPROM.put(EEPROM_address_1, float_value_1); // write the float value to EEPROM
   
   read_value = EEPROM.get(EEPROM_address_1, float_value_1); //retrieve the value EEPROM
   
   Serial.print("Float Value    - ");Serial.print(float_value_1);
   Serial.print(" Stored at addr ");Serial.println(EEPROM_address_1);

   Serial.print("Data read Back - ");
   Serial.println((read_value));
}


void loop() 
{
  // put your main code here, to run repeatedly:

}
