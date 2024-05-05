#include "DataAcquisitionSystem.h"

EnvironmentalData DataAcquisitionSystem::collectData() {
    EnvironmentalData tempData = tempSensor.readData();
    EnvironmentalData humidityData = humiditySensor.readData();
    EnvironmentalData windData = windSensor.readData();

    return {tempData.temperature, humidityData.humidity, windData.windSpeed};
}

