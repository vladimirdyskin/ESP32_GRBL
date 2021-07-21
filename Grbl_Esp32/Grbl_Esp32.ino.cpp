# 1 "/var/folders/99/mgg7nqh97tq1qdcgdk2kkwtm0000gn/T/tmpqs6vpb8h"
#include <Arduino.h>
# 1 "/Users/vladimirdyskin/Documents/GitHub/ESP32_GRBL/Grbl_Esp32/Grbl_Esp32.ino"
# 21 "/Users/vladimirdyskin/Documents/GitHub/ESP32_GRBL/Grbl_Esp32/Grbl_Esp32.ino"
#include "src/Grbl.h"
void setup();
void loop();
#line 23 "/Users/vladimirdyskin/Documents/GitHub/ESP32_GRBL/Grbl_Esp32/Grbl_Esp32.ino"
void setup() {
    grbl_init();
}

void loop() {
    run_once();
}