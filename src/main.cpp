/*
 * main.cpp
 * Contains main program code for DSMR P1 port emulator
 * Used to test the correct functioning of P1 readers
 */

#include <Arduino.h>
#include "telegram.h"

unsigned long milliseconds;
uint8_t telegramLines;

void setup() {
  // setup LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  // setup serial port
  Serial.begin(115200);
  Serial.printf("DSMR5 P1 telegram emulator");

  // setup variables
  telegramLines = sizeof telegram50 / sizeof telegram50[0];
  milliseconds = millis();
}

void loop() {
  if (millis() - milliseconds > 1000) { // run every 1000 milliseconds
    milliseconds = millis();
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // toggle LED
    for (uint8_t i = 0; i < telegramLines; i++) {
      Serial.printf("%s", telegram50[i]);
    }
    Serial.printf("\r\n"); // for debugging only
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // toggle LED
  }
}