// Open a serial port ad simply return every character

#include <SoftwareSerial.h>

SoftwareSerial mySerial(50, 51); // RX, TX

void setup()  
{
  mySerial.begin(38400);
  mySerial.println("Port initialized");
}

void loop() // run over and over
{
  if(mySerial.available())
  {
    mySerial.write(mySerial.read());
  }
}

