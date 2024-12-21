/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorConfiguration
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorConfiguration.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SensorConfiguration_SensorConfiguration_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class SensorConfiguration
SensorConfiguration::SensorConfiguration(void) {
    NOTIFY_CONSTRUCTOR(SensorConfiguration, SensorConfiguration(), 0, SMSWTD_SYSTEM_ANALYSIS_SensorConfiguration_SensorConfiguration_SERIALIZE);
}

SensorConfiguration::~SensorConfiguration(void) {
    NOTIFY_DESTRUCTOR(~SensorConfiguration, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SensorConfiguration, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedSensorConfiguration)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.cpp
*********************************************************************/
