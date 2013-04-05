// Open a serial port and just return every character that is sent to the the port

#include <SoftwareSerial.h>

// use on of the following lines to either run the code with a HW- or SW-Serial port

//SoftwareSerial* pSerial = new SoftwareSerial(50, 51); // define the RX and TX ports, refere to chapter limitations on http://arduino.cc/en/Reference/SoftwareSerial for a list of pins that work with your board
HardwareSerial* pSerial = &Serial1; // assign the decired HW-Serial port

void setup()  
{
  pSerial->begin(115200); // set the baudrate, on an Mega 2560 Board 38400 Baud seams to be the max working speed for SoftwareSerial
  pSerial->println("Port initialized");
}

void loop() // run over and over
{
  if(pSerial->available()) // check if new data is available for reading
  {
    pSerial->write(pSerial->read()); // read data and send it imediatly back
  }
}
  
