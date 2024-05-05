#include "Sensors.h"

EnvironmentalData TemperatureSensor::readData() {
    return {25.5, 0, 0};
}

EnvironmentalData HumiditySensor::readData() {
    return {0, 40.0, 0};
}

EnvironmentalData WindSpeedSensor::readData() {
    return {0, 0, 5.0};
}
