/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataCollector.h"
//## link itsSensorDataProcessor
#include "SensorDataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_DataCollector_DataCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataCollector
DataCollector::DataCollector(void) : itsSensorDataProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(DataCollector, DataCollector(), 0, SMSWTD_SYSTEM_ANALYSIS_DataCollector_DataCollector_SERIALIZE);
}

DataCollector::~DataCollector(void) {
    NOTIFY_DESTRUCTOR(~DataCollector, true);
    cleanUpRelations();
}

const SensorDataProcessor* DataCollector::getItsSensorDataProcessor(void) const {
    return itsSensorDataProcessor;
}

void DataCollector::setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    itsSensorDataProcessor = p_SensorDataProcessor;
    if(p_SensorDataProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorDataProcessor", p_SensorDataProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorDataProcessor");
        }
}

void DataCollector::cleanUpRelations(void) {
    if(itsSensorDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorDataProcessor");
            itsSensorDataProcessor = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataCollector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensorDataProcessor", false, true);
    if(myReal->itsSensorDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorDataProcessor);
        }
}
//#]

IMPLEMENT_META_P(DataCollector, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedDataCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/
