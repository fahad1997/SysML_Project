/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/

#ifndef DataProcessor_H
#define DataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "omlist.h"
//## auto_generated
#include "omcollec.h"
//## link itsCloudStorageClient
class CloudStorageClient;

//## classInstance itsDataCollector
class DataCollector;

//## link itsDataPublisher
class DataPublisher;

//## link itsGeographicalConfiguration
class GeographicalConfiguration;

//## classInstance itsImageCollector
class ImageCollector;

//## classInstance itsImageProcessor
class ImageProcessor;

//## link itsSensorConfiguration
class SensorConfiguration;

//## classInstance itsSensorDataProcessor
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
class DataProcessor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataProcessor(void);
    
    //## auto_generated
    ~DataProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<ImageProcessor*> getItsImageProcessor(void) const;
    
    //## auto_generated
    ImageProcessor* newItsImageProcessor(void);
    
    //## auto_generated
    void deleteItsImageProcessor(ImageProcessor* const p_ImageProcessor);
    
    //## auto_generated
    OMIterator<SensorDataProcessor*> getItsSensorDataProcessor(void) const;
    
    //## auto_generated
    SensorDataProcessor* newItsSensorDataProcessor(void);
    
    //## auto_generated
    void deleteItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

public :

    //## auto_generated
    const CloudStorageClient* getItsCloudStorageClient(void) const;
    
    //## auto_generated
    void setItsCloudStorageClient(CloudStorageClient* const p_CloudStorageClient);
    
    //## auto_generated
    OMIterator<DataCollector*> getItsDataCollector(void) const;
    
    //## auto_generated
    DataCollector* newItsDataCollector(void);
    
    //## auto_generated
    void deleteItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    OMIterator<DataPublisher*> getItsDataPublisher(void) const;
    
    //## auto_generated
    void addItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    void removeItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    void clearItsDataPublisher(void);
    
    //## auto_generated
    OMIterator<GeographicalConfiguration*> getItsGeographicalConfiguration(void) const;
    
    //## auto_generated
    void addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration);
    
    //## auto_generated
    void clearItsGeographicalConfiguration(void);
    
    //## auto_generated
    OMIterator<ImageCollector*> getItsImageCollector(void) const;
    
    //## auto_generated
    ImageCollector* newItsImageCollector(void);
    
    //## auto_generated
    void deleteItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    OMIterator<SensorConfiguration*> getItsSensorConfiguration(void) const;
    
    //## auto_generated
    void addItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration);
    
    //## auto_generated
    void removeItsSensorConfiguration(SensorConfiguration* const p_SensorConfiguration);
    
    //## auto_generated
    void clearItsSensorConfiguration(void);

private :

    CloudStorageClient* itsCloudStorageClient;		//## link itsCloudStorageClient
    
    OMList<DataCollector*> itsDataCollector;		//## classInstance itsDataCollector
    
    OMCollection<DataPublisher*> itsDataPublisher;		//## link itsDataPublisher
    
    OMCollection<GeographicalConfiguration*> itsGeographicalConfiguration;		//## link itsGeographicalConfiguration
    
    OMList<ImageCollector*> itsImageCollector;		//## classInstance itsImageCollector
    
    OMList<ImageProcessor*> itsImageProcessor;		//## classInstance itsImageProcessor
    
    OMCollection<SensorConfiguration*> itsSensorConfiguration;		//## link itsSensorConfiguration
    
    OMList<SensorDataProcessor*> itsSensorDataProcessor;		//## classInstance itsSensorDataProcessor
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/
