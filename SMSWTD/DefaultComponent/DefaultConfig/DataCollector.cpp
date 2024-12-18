/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/

//## auto_generated
#include "DataCollector.h"
//## link itsSensorDataProcessor
#include "SensorDataProcessor.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataCollector
DataCollector::DataCollector(void) : itsSensorDataProcessor(NULL) {
}

DataCollector::~DataCollector(void) {
    cleanUpRelations();
}

const SensorDataProcessor* DataCollector::getItsSensorDataProcessor(void) const {
    return itsSensorDataProcessor;
}

void DataCollector::setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    itsSensorDataProcessor = p_SensorDataProcessor;
}

void DataCollector::cleanUpRelations(void) {
    if(itsSensorDataProcessor != NULL)
        {
            itsSensorDataProcessor = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/
