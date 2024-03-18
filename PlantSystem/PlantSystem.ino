/*
    Name:       PlantSystem.ino
    Created:	18/03/2024 18:10:09
    Author:     MOV\Storm
*/
#include "Constants.h"
#include "Sensors.h"
#include "Actuators.h"

// TODO: Make Functions take Parameter previous millis and refactor out of global

void setup()
{
	
	Serial.begin(9600);

	Globals::PREVIOUSMILLIS = 0;
	initSensors();
}

void loop()
{
	readAndProcessSensors();
}
