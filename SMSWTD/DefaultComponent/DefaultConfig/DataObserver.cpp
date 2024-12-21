/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataObserver
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataObserver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataObserver.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_DataObserver_DataObserver_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataObserver
DataObserver::DataObserver(void) {
    NOTIFY_CONSTRUCTOR(DataObserver, DataObserver(), 0, SMSWTD_SYSTEM_ANALYSIS_DataObserver_DataObserver_SERIALIZE);
}

DataObserver::~DataObserver(void) {
    NOTIFY_DESTRUCTOR(~DataObserver, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(DataObserver, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedDataObserver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataObserver.cpp
*********************************************************************/
