#include <Arduino.h>
#include <SPI.h>
#include <SD.h>
#include "test_iinq_rewrite.h"

void
setup(
) {
	SPI.begin();
	SD.begin(SD_CS_PIN);
	Serial.begin(BAUD_RATE);
	SD_File_Delete_All();
	run_all_tests_iinq_rewrite();
}

void
loop(
) {}