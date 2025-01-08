/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorDataProcessor.h"
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
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SensorDataProcessor_SensorDataProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(IOxfActive* const theActiveContext) : DataProcessor(), itsCloudClient(NULL), itsDataCollector(NULL), itsDataPublisher(NULL), itsGeographicalConfiguration(NULL), itsSensorConfiguration(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SensorDataProcessor, SensorDataProcessor(), 0, SMSWTD_SYSTEM_DESIGN_SensorDataProcessor_SensorDataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

SensorDataProcessor::~SensorDataProcessor(void) {
    NOTIFY_DESTRUCTOR(~SensorDataProcessor, false);
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
    if(p_CloudClient != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCloudClient", p_CloudClient, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCloudClient");
        }
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

const DataPublisher* SensorDataProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void SensorDataProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
    if(p_DataPublisher != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataPublisher", p_DataPublisher, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataPublisher");
        }
}

const GeographicalConfiguration* SensorDataProcessor::getItsGeographicalConfiguration(void) const {
    return itsGeographicalConfiguration;
}

void SensorDataProcessor::setItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration = p_GeographicalConfiguration;
    if(p_GeographicalConfiguration != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGeographicalConfiguration", p_GeographicalConfiguration, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGeographicalConfiguration");
        }
}

const SensorConfiguration* SensorDataProcessor::getItsSensorConfiguration(void) const {
    return itsSensorConfiguration;
}

void SensorDataProcessor::setItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration) {
    itsSensorConfiguration = p_SensorConfiguration;
    if(p_SensorConfiguration != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorConfiguration", p_SensorConfiguration, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorConfiguration");
        }
}

void SensorDataProcessor::cleanUpRelations(void) {
    if(itsCloudClient != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloudClient");
            itsCloudClient = NULL;
        }
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            itsDataCollector = NULL;
        }
    if(itsDataPublisher != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataPublisher");
            itsDataPublisher = NULL;
        }
    if(itsGeographicalConfiguration != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGeographicalConfiguration");
            itsGeographicalConfiguration = NULL;
        }
    if(itsSensorConfiguration != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorConfiguration");
            itsSensorConfiguration = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorDataProcessor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataProcessor::serializeAttributes(aomsAttributes);
}

void OMAnimatedSensorDataProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataCollector", false, true);
    if(myReal->itsDataCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataCollector);
        }
    aomsRelations->addRelation("itsGeographicalConfiguration", false, true);
    if(myReal->itsGeographicalConfiguration)
        {
            aomsRelations->ADD_ITEM(myReal->itsGeographicalConfiguration);
        }
    aomsRelations->addRelation("itsSensorConfiguration", false, true);
    if(myReal->itsSensorConfiguration)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorConfiguration);
        }
    aomsRelations->addRelation("itsCloudClient", false, true);
    if(myReal->itsCloudClient)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloudClient);
        }
    aomsRelations->addRelation("itsDataPublisher", false, true);
    if(myReal->itsDataPublisher)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataPublisher);
        }
    OMAnimatedDataProcessor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(SensorDataProcessor, SMSWTD_SYSTEM::DESIGN, false, DataProcessor, OMAnimatedDataProcessor, OMAnimatedSensorDataProcessor)

OMINIT_SUPERCLASS(DataProcessor, OMAnimatedDataProcessor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
