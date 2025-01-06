/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "SensorDataProcessor.h"
//## auto_generated
#include <omthread.h>
//## link itsCloudClient
#include "CloudClient.h"
//## link itsDataCollector
#include "DataCollector.h"
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsGeographicalConfiguration
#include "GeographicalConfiguration.h"
//## link itsSensorConfiguration
#include "SensorConfiguration.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(IOxfActive* const theActiveContext) : DataProcessor(), itsCloudClient(NULL), itsDataCollector(NULL), itsDataPublisher(NULL), itsGeographicalConfiguration(NULL), itsSensorConfiguration(NULL) {
    setActiveContext(theActiveContext, false);
}

SensorDataProcessor::~SensorDataProcessor(void) {
    cleanUpRelations();
}

bool SensorDataProcessor::startBehavior(void) {
    bool done = false;
    done = DataProcessor::startBehavior();
    return done;
}

const CloudClient* SensorDataProcessor::getItsCloudClient(void) const {
    return itsCloudClient;
}

void SensorDataProcessor::setItsCloudClient(CloudClient* const p_CloudClient) {
    itsCloudClient = p_CloudClient;
}

const DataCollector* SensorDataProcessor::getItsDataCollector(void) const {
    return itsDataCollector;
}

void SensorDataProcessor::setItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector = p_DataCollector;
}

const DataPublisher* SensorDataProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void SensorDataProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
}

const GeographicalConfiguration* SensorDataProcessor::getItsGeographicalConfiguration(void) const {
    return itsGeographicalConfiguration;
}

void SensorDataProcessor::setItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration = p_GeographicalConfiguration;
}

const SensorConfiguration* SensorDataProcessor::getItsSensorConfiguration(void) const {
    return itsSensorConfiguration;
}

void SensorDataProcessor::setItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration = p_SensorConfiguration;
}

void SensorDataProcessor::cleanUpRelations(void) {
    if(itsCloudClient != NULL)
        {
            itsCloudClient = NULL;
        }
    if(itsDataCollector != NULL)
        {
            itsDataCollector = NULL;
        }
    if(itsDataPublisher != NULL)
        {
            itsDataPublisher = NULL;
        }
    if(itsGeographicalConfiguration != NULL)
        {
            itsGeographicalConfiguration = NULL;
        }
    if(itsSensorConfiguration != NULL)
        {
            itsSensorConfiguration = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
