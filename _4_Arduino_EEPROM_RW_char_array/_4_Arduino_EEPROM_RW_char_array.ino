
//Board used      -> Arduino UNO -ATmega328P-28Pin
//EEPROM Capacity -> 1024 bytes
//(c)www.xanthium.in

//code to store a String Array to Arduino EEPROM

#include <EEPROM.h> // Library for accessing internal EEPROM

void setup()
 {

  //char Text[] = {"ATmega328P is a good Micro !@#$%^&*()"};//String Array terminated by \0 null
  char Text[] = {"Arduino-1234-!@#$%^&*()"};
  //char Text[] = {'ATmega328P'}; //Char array,not terminated by \0 null

  int array_length = sizeof(Text)/sizeof(char); //Calculate the Number of elements in the Array
  int i = 0;
   
  Serial.begin(9600); //to send data to serial monitor

 
  Serial.print("\nText to Store -> ");
  Serial.print(Text);
  Serial.print("\nNumber of Elements in Array (characters + Null) -> ");
  Serial.println(array_length);

  Serial.println("\nWriting to EEPROM");
  while (Text[i] !='\0' )
  {
    EEPROM.write(i,Text[i]);//write the array to EEPROM except /0 null terminator
    Serial.print(i);
    Serial.print(" - ");
    Serial.print(Text[i]);
    Serial.println();
    i++;
  }

  Serial.println("\nReading from EEPROM");

  for(i=0;i<(array_length-1);i++) //array_length-1 because we are not storing null
  {
    Serial.print(char(EEPROM.read(i)));
  }


  }

void loop() {
  // put your main code here, to run repeatedly:

}
