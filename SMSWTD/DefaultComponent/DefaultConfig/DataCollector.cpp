/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataCollector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_DataCollector_DataCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class DataCollector
DataCollector::DataCollector(void) {
    NOTIFY_CONSTRUCTOR(DataCollector, DataCollector(), 0, SMSWTD_SYSTEM_DESIGN_DataCollector_DataCollector_SERIALIZE);
}

DataCollector::~DataCollector(void) {
    NOTIFY_DESTRUCTOR(~DataCollector, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(DataCollector, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDataCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/
