#include "DataProcessingModule.h"
#include "Sensors.h"

WeatherAnalysis DataProcessingModule::analyzeData(const EnvironmentalData& data) {
    WeatherAnalysis analysis;
    analysis.adverseConditions = (data.windSpeed > 4.0);
    analysis.riskLevel = analysis.adverseConditions ? 0.7f : 0.1f;
    analysis.advisoryMessage = analysis.adverseConditions ? "High wind speed detected!" : "All clear";
    return analysis;
}
