#ifndef SENSORS_H
#define SENSORS_H

#include <string>

struct EnvironmentalData {
    double temperature;
    double humidity;
    double windSpeed;
};

class SensorInterface {
public:
    virtual ~SensorInterface() {}
    virtual EnvironmentalData readData() = 0;
};

class TemperatureSensor : public SensorInterface {
public:
    EnvironmentalData readData() override;
};

class HumiditySensor : public SensorInterface {
public:
    EnvironmentalData readData() override;
};

class WindSpeedSensor : public SensorInterface {
public:
    EnvironmentalData readData() override;
};

#endif
