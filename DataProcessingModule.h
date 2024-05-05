#ifndef DATA_PROCESSING_MODULE_H
#define DATA_PROCESSING_MODULE_H

#include "WeatherTypes.h"
#include "Sensors.h"

class DataProcessingModule {
public:
    WeatherAnalysis analyzeData(const EnvironmentalData& data);
};

#endif