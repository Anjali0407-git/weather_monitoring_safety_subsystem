#ifndef COMMAND_CONTROL_MODULE_H
#define COMMAND_CONTROL_MODULE_H

#include "WeatherTypes.h"
#include <iostream>

class CommandControlModule {
public:
    void processAnalysis(const WeatherAnalysis& analysis);
};

#endif
