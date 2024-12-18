/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/

#ifndef SensorDataProcessor_H
#define SensorDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "omcollec.h"
//## link itsCloudStorageInterface
class CloudStorageInterface;

//## link itsDashboardPublisher
class DashboardPublisher;

//## link itsGeographicalConfiguration
class GeographicalConfiguration;

//## link itsPredictionModelPublisher
class PredictionModelPublisher;

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
    const CloudStorageInterface* getItsCloudStorageInterface(void) const;
    
    //## auto_generated
    void setItsCloudStorageInterface(CloudStorageInterface* const p_CloudStorageInterface);
    
    //## auto_generated
    const DashboardPublisher* getItsDashboardPublisher(void) const;
    
    //## auto_generated
    void setItsDashboardPublisher(DashboardPublisher* const p_DashboardPublisher);
    
    //## auto_generated
    OMIterator<GeographicalConfiguration*> getItsGeographicalConfiguration(void) const;
    
    //## auto_generated
    void addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void clearItsGeographicalConfiguration(void);
    
    //## auto_generated
    const PredictionModelPublisher* getItsPredictionModelPublisher(void) const;
    
    //## auto_generated
    void setItsPredictionModelPublisher(PredictionModelPublisher* const p_PredictionModelPublisher);
    
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

    CloudStorageInterface* itsCloudStorageInterface;		//## link itsCloudStorageInterface
    
    DashboardPublisher* itsDashboardPublisher;		//## link itsDashboardPublisher
    
    OMCollection<GeographicalConfiguration*> itsGeographicalConfiguration;		//## link itsGeographicalConfiguration
    
    PredictionModelPublisher* itsPredictionModelPublisher;		//## link itsPredictionModelPublisher
    
    OMCollection<SensorConfiguration*> itsSensorConfiguration;		//## link itsSensorConfiguration
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/
