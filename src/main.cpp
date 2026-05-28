#include "HardwareSerial.h"
#include "esp32-hal-gpio.h"
#include "esp32-hal.h"
#include <Arduino.h>

#define LED_PIN 2

void setup() { pinMode(LED_BUILTIN, OUTPUT); }

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("LED on");
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("LED off");
    delay(1000);
}
