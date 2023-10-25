#include "main.h"

#include <SD.h>

AsyncWebServer server(80);

void setup() {
  SD.begin(5, SPI, 40000000, "/", 5, false);
  // server.serveStatic();
  serveLargeStaticFolder* largeStaticFolder =
      new serveLargeStaticFolder(server, SD, "/www/static/", "max-age=86.400");
}

void loop() {
  // put your main code here, to run repeatedly:
}
