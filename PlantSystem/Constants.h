#ifndef CONSTANTS_H
#define CONSTANTS_H

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

namespace Sensors
{
	constexpr int MOISTURE_SENSOR_PIN = A0;
	constexpr int WATER_LEVEL_SENSOR_PIN = A1;
	constexpr int TEMPERATURE_SENSOR_PIN = A3;

}

namespace Actuators
{
	
}

namespace Globals
{
	unsigned long PREVIOUSMILLIS;
    constexpr long INTERVAL = 1000;
	constexpr float MOISTURE_THRESHOLD = 0.3f;
}

#endif // CONSTANTS_H