#include "main.h"

#include <SD.h>

AsyncWebServer server(80);

void setup() {
  SD.begin(5, SPI, 40000000, "/", 5, false);
  serveLargeStatic(server, "/static/", SD, "/www/static/", "max-age=86.400");
}

void loop() {
  // put your main code here, to run repeatedly:
}
