/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "DataProcessor.h"
//## classInstance itsImageProcessor
#include "ImageProcessor.h"
//## classInstance itsSensorDataProcessor
#include "SensorDataProcessor.h"
//## link itsCloudStorageClient
#include "CloudStorageClient.h"
//## classInstance itsDataCollector
#include "DataCollector.h"
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsGeographicalConfiguration
#include "GeographicalConfiguration.h"
//## classInstance itsImageCollector
#include "ImageCollector.h"
//## link itsSensorConfiguration
#include "SensorConfiguration.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
DataProcessor::DataProcessor(void) : itsCloudStorageClient(NULL) {
}

DataProcessor::~DataProcessor(void) {
    cleanUpRelations();
}

OMIterator<ImageProcessor*> DataProcessor::getItsImageProcessor(void) const {
    OMIterator<ImageProcessor*> iter(itsImageProcessor);
    return iter;
}

ImageProcessor* DataProcessor::newItsImageProcessor(void) {
    ImageProcessor* newImageProcessor = new ImageProcessor;
    itsImageProcessor.add(newImageProcessor);
    return newImageProcessor;
}

void DataProcessor::deleteItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    itsImageProcessor.remove(p_ImageProcessor);
    delete p_ImageProcessor;
}

OMIterator<SensorDataProcessor*> DataProcessor::getItsSensorDataProcessor(void) const {
    OMIterator<SensorDataProcessor*> iter(itsSensorDataProcessor);
    return iter;
}

SensorDataProcessor* DataProcessor::newItsSensorDataProcessor(void) {
    SensorDataProcessor* newSensorDataProcessor = new SensorDataProcessor;
    itsSensorDataProcessor.add(newSensorDataProcessor);
    return newSensorDataProcessor;
}

void DataProcessor::deleteItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    itsSensorDataProcessor.remove(p_SensorDataProcessor);
    delete p_SensorDataProcessor;
}

void DataProcessor::cleanUpRelations(void) {
    {
        OMIterator<SensorDataProcessor*> iter(itsSensorDataProcessor);
        while (*iter){
            deleteItsSensorDataProcessor(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<ImageProcessor*> iter(itsImageProcessor);
        while (*iter){
            deleteItsImageProcessor(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<ImageCollector*> iter(itsImageCollector);
        while (*iter){
            deleteItsImageCollector(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<DataCollector*> iter(itsDataCollector);
        while (*iter){
            deleteItsDataCollector(*iter);
            iter.reset();
        }
    }
    if(itsCloudStorageClient != NULL)
        {
            itsCloudStorageClient = NULL;
        }
    {
        itsDataPublisher.removeAll();
    }
    {
        itsGeographicalConfiguration.removeAll();
    }
    {
        itsSensorConfiguration.removeAll();
    }
}

const CloudStorageClient* DataProcessor::getItsCloudStorageClient(void) const {
    return itsCloudStorageClient;
}

void DataProcessor::setItsCloudStorageClient(CloudStorageClient* const p_CloudStorageClient) {
    itsCloudStorageClient = p_CloudStorageClient;
}

OMIterator<DataCollector*> DataProcessor::getItsDataCollector(void) const {
    OMIterator<DataCollector*> iter(itsDataCollector);
    return iter;
}

DataCollector* DataProcessor::newItsDataCollector(void) {
    DataCollector* newDataCollector = new DataCollector;
    itsDataCollector.add(newDataCollector);
    return newDataCollector;
}

void DataProcessor::deleteItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector.remove(p_DataCollector);
    delete p_DataCollector;
}

OMIterator<DataPublisher*> DataProcessor::getItsDataPublisher(void) const {
    OMIterator<DataPublisher*> iter(itsDataPublisher);
    return iter;
}

void DataProcessor::addItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher.add(p_DataPublisher);
}

void DataProcessor::removeItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher.remove(p_DataPublisher);
}

void DataProcessor::clearItsDataPublisher(void) {
    itsDataPublisher.removeAll();
}

OMIterator<GeographicalConfiguration*> DataProcessor::getItsGeographicalConfiguration(void) const {
    OMIterator<GeographicalConfiguration*> iter(itsGeographicalConfiguration);
    return iter;
}

void DataProcessor::addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.add(p_GeographicalConfiguration);
}

void DataProcessor::removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.remove(p_GeographicalConfiguration);
}

void DataProcessor::clearItsGeographicalConfiguration(void) {
    itsGeographicalConfiguration.removeAll();
}

OMIterator<ImageCollector*> DataProcessor::getItsImageCollector(void) const {
    OMIterator<ImageCollector*> iter(itsImageCollector);
    return iter;
}

ImageCollector* DataProcessor::newItsImageCollector(void) {
    ImageCollector* newImageCollector = new ImageCollector;
    itsImageCollector.add(newImageCollector);
    return newImageCollector;
}

void DataProcessor::deleteItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector.remove(p_ImageCollector);
    delete p_ImageCollector;
}

OMIterator<SensorConfiguration*> DataProcessor::getItsSensorConfiguration(void) const {
    OMIterator<SensorConfiguration*> iter(itsSensorConfiguration);
    return iter;
}

void DataProcessor::addItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration.add(p_SensorConfiguration);
}

void DataProcessor::removeItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration.remove(p_SensorConfiguration);
}

void DataProcessor::clearItsSensorConfiguration(void) {
    itsSensorConfiguration.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
