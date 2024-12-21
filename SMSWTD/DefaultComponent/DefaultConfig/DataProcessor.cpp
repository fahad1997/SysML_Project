/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataProcessor.h"
//## classInstance itsImageProcessor
#include "ImageProcessor.h"
//## classInstance itsSensorDataProcessor
#include "SensorDataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_DataProcessor_DataProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
DataProcessor::DataProcessor(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(DataProcessor, DataProcessor(), 0, SMSWTD_SYSTEM_ANALYSIS_DataProcessor_DataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

DataProcessor::~DataProcessor(void) {
    NOTIFY_DESTRUCTOR(~DataProcessor, true);
    cleanUpRelations();
}

OMIterator<ImageProcessor*> DataProcessor::getItsImageProcessor(void) const {
    OMIterator<ImageProcessor*> iter(itsImageProcessor);
    return iter;
}

ImageProcessor* DataProcessor::newItsImageProcessor(void) {
    ImageProcessor* newImageProcessor = new ImageProcessor;
    itsImageProcessor.add(newImageProcessor);
    NOTIFY_RELATION_ITEM_ADDED("itsImageProcessor", newImageProcessor, true, false);
    return newImageProcessor;
}

void DataProcessor::deleteItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    itsImageProcessor.remove(p_ImageProcessor);
    NOTIFY_RELATION_ITEM_REMOVED("itsImageProcessor", p_ImageProcessor);
    delete p_ImageProcessor;
}

OMIterator<SensorDataProcessor*> DataProcessor::getItsSensorDataProcessor(void) const {
    OMIterator<SensorDataProcessor*> iter(itsSensorDataProcessor);
    return iter;
}

SensorDataProcessor* DataProcessor::newItsSensorDataProcessor(void) {
    SensorDataProcessor* newSensorDataProcessor = new SensorDataProcessor;
    itsSensorDataProcessor.add(newSensorDataProcessor);
    NOTIFY_RELATION_ITEM_ADDED("itsSensorDataProcessor", newSensorDataProcessor, true, false);
    return newSensorDataProcessor;
}

void DataProcessor::deleteItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    itsSensorDataProcessor.remove(p_SensorDataProcessor);
    NOTIFY_RELATION_ITEM_REMOVED("itsSensorDataProcessor", p_SensorDataProcessor);
    p_SensorDataProcessor->destroy();
}

bool DataProcessor::startBehavior(void) {
    bool done = true;
    {
        OMIterator<SensorDataProcessor*> iter(itsSensorDataProcessor);
        while (*iter){
            done &= (*iter)->startBehavior();
            iter++;
        }
    }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void DataProcessor::cleanUpRelations(void) {
    itsSensorDataProcessor.removeAll();
    {
        OMIterator<ImageProcessor*> iter(itsImageProcessor);
        while (*iter){
            deleteItsImageProcessor(*iter);
            iter.reset();
        }
    }
}

void DataProcessor::destroy(void) {
    {
        OMIterator<SensorDataProcessor*> iter(itsSensorDataProcessor);
        while (*iter){
            (*iter)->destroy();
            iter++;
        }
    }
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsImageProcessor", true, false);
    {
        OMIterator<ImageProcessor*> iter(myReal->itsImageProcessor);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsSensorDataProcessor", true, false);
    {
        OMIterator<SensorDataProcessor*> iter(myReal->itsSensorDataProcessor);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(DataProcessor, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
