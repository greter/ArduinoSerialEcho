// Open a serial port ad simply return every character

#include <SoftwareSerial.h>

SoftwareSerial* pSerial = new SoftwareSerial(50, 51);
//SoftwareSerial mySerial(50, 51); // RX, TX

void setup()  
{
  pSerial->begin(38400);
  pSerial->println("Port initialized");
}

void loop() // run over and over
{
  if(pSerial->available())
  {
    pSerial->write(pSerial->read());
  }
}
  
