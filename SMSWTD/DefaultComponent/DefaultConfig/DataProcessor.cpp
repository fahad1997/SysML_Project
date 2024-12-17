/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "DataProcessor.h"
//## classInstance itsImageProcessor
#include "ImageProcessor.h"
//## classInstance itsSensorDataProcessor
#include "SensorDataProcessor.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
DataProcessor::DataProcessor(void) {
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
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
