/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorDataProcessor.h"
//## link itsDataCollector
#include "DataCollector.h"
//## link itsDataProcessor
#include "DataProcessor.h"
//## event reqDataFromSensors()
#include "DESIGN.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorDataProcessor_SensorDataProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(IOxfActive* const theActiveContext) : OMReactive(), itsDataCollector(NULL), itsDataProcessor(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SensorDataProcessor, SensorDataProcessor(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorDataProcessor_SensorDataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

SensorDataProcessor::~SensorDataProcessor(void) {
    NOTIFY_DESTRUCTOR(~SensorDataProcessor, true);
    cleanUpRelations();
}

bool SensorDataProcessor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

const DataCollector* SensorDataProcessor::getItsDataCollector(void) const {
    return itsDataCollector;
}

void SensorDataProcessor::setItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector = p_DataCollector;
    if(p_DataCollector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataCollector", p_DataCollector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
        }
}

void SensorDataProcessor::cleanUpRelations(void) {
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            itsDataCollector = NULL;
        }
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const SensorDataProcessor* p_SensorDataProcessor = itsDataProcessor->getItsSensorDataProcessor();
            if(p_SensorDataProcessor != NULL)
                {
                    itsDataProcessor->__setItsSensorDataProcessor(NULL);
                }
            itsDataProcessor = NULL;
        }
}

const DataProcessor* SensorDataProcessor::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void SensorDataProcessor::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsSensorDataProcessor(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void SensorDataProcessor::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    itsDataProcessor = p_DataProcessor;
    if(p_DataProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataProcessor", p_DataProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
        }
}

void SensorDataProcessor::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsSensorDataProcessor(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void SensorDataProcessor::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorDataProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataCollector", false, true);
    if(myReal->itsDataCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataCollector);
        }
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(SensorDataProcessor, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedSensorDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
