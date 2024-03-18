// Sensors.h

#ifndef SENSORS_h
#define SENSORS_h
#include "Constants.h"

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif



void initSensors();
int readMoistureLevel();
void readAndProcessSensors();
void printDataToSerial(int moistureLevel);
void processMoistureData(int moistureLevel);

#endif

