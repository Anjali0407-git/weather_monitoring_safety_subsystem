#ifndef DATA_ACQUISITION_SYSTEM_H
#define DATA_ACQUISITION_SYSTEM_H

#include "Sensors.h"

class DataAcquisitionSystem {
private:
    TemperatureSensor tempSensor;
    HumiditySensor humiditySensor;
    WindSpeedSensor windSensor;

public:
    EnvironmentalData collectData();
};

#endif
