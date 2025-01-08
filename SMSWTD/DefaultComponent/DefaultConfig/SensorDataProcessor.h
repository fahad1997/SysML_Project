/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/

#ifndef SensorDataProcessor_H
#define SensorDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## class SensorDataProcessor
#include "DataProcessor.h"
//## auto_generated
#include <aom.h>
//## link itsCloudClient
class CloudClient;

//## link itsDataCollector
class DataCollector;

//## link itsDataPublisher
class DataPublisher;

//## link itsGeographicalConfiguration
class GeographicalConfiguration;

//## link itsSensorConfiguration
class SensorConfiguration;

//## package SMSWTD_SYSTEM::DESIGN

//## class SensorDataProcessor
class SensorDataProcessor : public DataProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SensorDataProcessor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SensorDataProcessor(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Attributes    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    //## auto_generated
    const CloudClient* getItsCloudClient(void) const;
    
    //## auto_generated
    void setItsCloudClient(CloudClient* const p_CloudClient);
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    void setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    const DataPublisher* getItsDataPublisher(void) const;
    
    //## auto_generated
    void setItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    const GeographicalConfiguration* getItsGeographicalConfiguration(void) const;
    
    //## auto_generated
    void setItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    const SensorConfiguration* getItsSensorConfiguration(void) const;
    
    //## auto_generated
    void setItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    CloudClient* itsCloudClient;		//## link itsCloudClient
    
    DataCollector* itsDataCollector;		//## link itsDataCollector
    
    DataPublisher* itsDataPublisher;		//## link itsDataPublisher
    
    GeographicalConfiguration* itsGeographicalConfiguration;		//## link itsGeographicalConfiguration
    
    SensorConfiguration* itsSensorConfiguration;		//## link itsSensorConfiguration
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorDataProcessor : public OMAnimatedDataProcessor {
    DECLARE_META(SensorDataProcessor, OMAnimatedSensorDataProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/
