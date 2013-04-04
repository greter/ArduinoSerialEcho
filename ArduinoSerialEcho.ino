// Open a serial port and just return every character that is sent to the the port

#include <SoftwareSerial.h>

SoftwareSerial* pSerial = new SoftwareSerial(50, 51); // define the RX and TX ports, refere to chapter limitations on http://arduino.cc/en/Reference/SoftwareSerial for a list of pins that work with your board
void setup()  
{
  pSerial->begin(38400); // set the baudrate, on an Mega 2560 Board 38400 Baud seams to be the max working speed
  pSerial->println("Port initialized");
}

void loop() // run over and over
{
  if(pSerial->available()) // check if new data is available for reading
  {
    pSerial->write(pSerial->read()); // read data and send it imediatly back
  }
}
  
