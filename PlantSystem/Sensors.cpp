#include "Sensors.h"

void initSensors()
{
	pinMode(Sensors::MOISTURE_SENSOR_PIN, INPUT);
	
}

int readMoistureLevel()
{
	const int moistureValue = analogRead(Sensors::MOISTURE_SENSOR_PIN);

	return moistureValue;
}

void readAndProcessSensors()
{
    if (millis() - Globals::PREVIOUSMILLIS >= Globals::INTERVAL) 
    {
        Globals::PREVIOUSMILLIS = millis(); 
        const int moistureLevel = readMoistureLevel();
        processMoistureData(moistureLevel);
    }
}

void printDataToSerial(const int moistureLevel)
{
    char output[50];
    const int len = sprintf(output, "Time: %lu, Moisture: %d", millis(), moistureLevel);

    if (len > 0 && Serial.availableForWrite()) 
    {
        Serial.println(output);
    }
}

void processMoistureData(int moistureLevel)
{
    printDataToSerial(moistureLevel);
}


