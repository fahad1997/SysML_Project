/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterDataProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterDataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WaterDataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_WaterDataProcessor_WaterDataProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class WaterDataProcessor
WaterDataProcessor::WaterDataProcessor(void) {
    NOTIFY_CONSTRUCTOR(WaterDataProcessor, WaterDataProcessor(), 0, SMSWTD_SYSTEM_ANALYSIS_WaterDataProcessor_WaterDataProcessor_SERIALIZE);
}

WaterDataProcessor::~WaterDataProcessor(void) {
    NOTIFY_DESTRUCTOR(~WaterDataProcessor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(WaterDataProcessor, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedWaterDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterDataProcessor.cpp
*********************************************************************/
