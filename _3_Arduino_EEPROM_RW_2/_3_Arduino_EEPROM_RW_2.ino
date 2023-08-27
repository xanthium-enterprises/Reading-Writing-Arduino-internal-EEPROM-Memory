
//Board used      -> Arduino UNO -ATmega328P-28Pin
//EEPROM Capacity -> 1024 bytes
//(c)www.xanthium.in

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
 {
  Serial.begin(9600); //to send data to serial monitor

 // Storing a Mix of characters and numbers on the EEPROM
 //Eg AT16
  EEPROM.write(0,'A'); // Store char A (8bit ASCII) on location 0
  EEPROM.write(1,'T'); // Store char T (8bit ASCII) on location 1
  EEPROM.write(2,1);   // Store  1 (8bit) on location 2
  EEPROM.write(3,6);   // Store  6 (8bit) on location 3
  
  Serial.println();
  Serial.print(char(EEPROM.read(0))); //read data from location 0,convert to char 
  Serial.print(char(EEPROM.read(1))); //read data from location 1,convert to char 
  Serial.print(EEPROM.read(2));
  Serial.print(EEPROM.read(3));

  //Store Number more than 255 
  Serial.println();

  EEPROM.write(4,255);   // Store  255 (8bit)(1111 1111) on Address 4
  Serial.println(EEPROM.read(4));
  
  EEPROM.write(5,256);   // Store  256 (16bit) (0001 0000 0000) on Address 5
  Serial.println(EEPROM.read(5)); // 0

  EEPROM.write(5,341);   // Store  341 (16bit) (0001 01010101) on Address 6
  Serial.println(EEPROM.read(5)); //85


 }

void loop()
{
  // put your main code here, to run repeatedly:

}