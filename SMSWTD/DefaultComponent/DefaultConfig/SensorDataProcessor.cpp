/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "SensorDataProcessor.h"
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsGeographicalConfiguration
#include "GeographicalConfiguration.h"
//## link itsSensorConfiguration
#include "SensorConfiguration.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(void) : itsDataPublisher(NULL), itsDataStorage(NULL) {
}

SensorDataProcessor::~SensorDataProcessor(void) {
    cleanUpRelations();
}

const DataPublisher* SensorDataProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void SensorDataProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
}

const DataStorage* SensorDataProcessor::getItsDataStorage(void) const {
    return itsDataStorage;
}

void SensorDataProcessor::setItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage = p_DataStorage;
}

OMIterator<GeographicalConfiguration*> SensorDataProcessor::getItsGeographicalConfiguration(void) const {
    OMIterator<GeographicalConfiguration*> iter(itsGeographicalConfiguration);
    return iter;
}

void SensorDataProcessor::addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.add(p_GeographicalConfiguration);
}

void SensorDataProcessor::removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.remove(p_GeographicalConfiguration);
}

void SensorDataProcessor::clearItsGeographicalConfiguration(void) {
    itsGeographicalConfiguration.removeAll();
}

OMIterator<SensorConfiguration*> SensorDataProcessor::getItsSensorConfiguration(void) const {
    OMIterator<SensorConfiguration*> iter(itsSensorConfiguration);
    return iter;
}

void SensorDataProcessor::addItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration.add(p_SensorConfiguration);
}

void SensorDataProcessor::removeItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration.remove(p_SensorConfiguration);
}

void SensorDataProcessor::clearItsSensorConfiguration(void) {
    itsSensorConfiguration.removeAll();
}

void SensorDataProcessor::cleanUpRelations(void) {
    if(itsDataPublisher != NULL)
        {
            itsDataPublisher = NULL;
        }
    if(itsDataStorage != NULL)
        {
            itsDataStorage = NULL;
        }
    {
        itsGeographicalConfiguration.removeAll();
    }
    {
        itsSensorConfiguration.removeAll();
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
