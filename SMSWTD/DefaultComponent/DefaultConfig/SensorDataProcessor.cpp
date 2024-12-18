/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "SensorDataProcessor.h"
//## link itsCloudStorageInterface
#include "CloudStorageInterface.h"
//## link itsDashboardPublisher
#include "DashboardPublisher.h"
//## link itsGeographicalConfiguration
#include "GeographicalConfiguration.h"
//## link itsPredictionModelPublisher
#include "PredictionModelPublisher.h"
//## link itsSensorConfiguration
#include "SensorConfiguration.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(void) : itsCloudStorageInterface(NULL), itsDashboardPublisher(NULL), itsPredictionModelPublisher(NULL) {
}

SensorDataProcessor::~SensorDataProcessor(void) {
    cleanUpRelations();
}

const CloudStorageInterface* SensorDataProcessor::getItsCloudStorageInterface(void) const {
    return itsCloudStorageInterface;
}

void SensorDataProcessor::setItsCloudStorageInterface(CloudStorageInterface* const p_CloudStorageInterface) {
    itsCloudStorageInterface = p_CloudStorageInterface;
}

const DashboardPublisher* SensorDataProcessor::getItsDashboardPublisher(void) const {
    return itsDashboardPublisher;
}

void SensorDataProcessor::setItsDashboardPublisher(DashboardPublisher* const p_DashboardPublisher) {
    itsDashboardPublisher = p_DashboardPublisher;
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

const PredictionModelPublisher* SensorDataProcessor::getItsPredictionModelPublisher(void) const {
    return itsPredictionModelPublisher;
}

void SensorDataProcessor::setItsPredictionModelPublisher(PredictionModelPublisher* const p_PredictionModelPublisher) {
    itsPredictionModelPublisher = p_PredictionModelPublisher;
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
    if(itsCloudStorageInterface != NULL)
        {
            itsCloudStorageInterface = NULL;
        }
    if(itsDashboardPublisher != NULL)
        {
            itsDashboardPublisher = NULL;
        }
    {
        itsGeographicalConfiguration.removeAll();
    }
    if(itsPredictionModelPublisher != NULL)
        {
            itsPredictionModelPublisher = NULL;
        }
    {
        itsSensorConfiguration.removeAll();
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
