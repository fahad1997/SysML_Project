/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/

#ifndef SensorDataProcessor_H
#define SensorDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "omcollec.h"
//## link itsDataPublisher
class DataPublisher;

//## link itsDataStorage
class DataStorage;

//## link itsGeographicalConfiguration
class GeographicalConfiguration;

//## link itsSensorConfiguration
class SensorConfiguration;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class SensorDataProcessor
class SensorDataProcessor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SensorDataProcessor(void);
    
    //## auto_generated
    ~SensorDataProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataPublisher* getItsDataPublisher(void) const;
    
    //## auto_generated
    void setItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    OMIterator<GeographicalConfiguration*> getItsGeographicalConfiguration(void) const;
    
    //## auto_generated
    void addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void clearItsGeographicalConfiguration(void);
    
    //## auto_generated
    OMIterator<SensorConfiguration*> getItsSensorConfiguration(void) const;
    
    //## auto_generated
    void addItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration);
    
    //## auto_generated
    void removeItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration);
    
    //## auto_generated
    void clearItsSensorConfiguration(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataPublisher* itsDataPublisher;		//## link itsDataPublisher
    
    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    OMCollection<GeographicalConfiguration*> itsGeographicalConfiguration;		//## link itsGeographicalConfiguration
    
    OMCollection<SensorConfiguration*> itsSensorConfiguration;		//## link itsSensorConfiguration
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/
