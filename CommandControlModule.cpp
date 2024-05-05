#include "CommandControlModule.h"

void CommandControlModule::processAnalysis(const WeatherAnalysis& analysis) {
    if (analysis.adverseConditions) {
        std::cout << "Risk Level: " << analysis.riskLevel << " - " << analysis.advisoryMessage << std::endl;
        // Implement flight adjustment commands here
    } else {
        std::cout << "Weather is clear, continue with the current course." << std::endl;
    }
}
