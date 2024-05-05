#ifndef WEATHER_TYPES_H
#define WEATHER_TYPES_H

#include <string>

struct WeatherAnalysis {
    bool adverseConditions;
    float riskLevel;
    std::string advisoryMessage;
};

#endif
