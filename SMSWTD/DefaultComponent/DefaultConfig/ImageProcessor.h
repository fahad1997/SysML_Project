/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/

#ifndef ImageProcessor_H
#define ImageProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
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

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageProcessor
class ImageProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedImageProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ImageProcessor(void);
    
    //## auto_generated
    ~ImageProcessor(void);
    
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

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CloudStorageInterface* itsCloudStorageInterface;		//## link itsCloudStorageInterface
    
    DashboardPublisher* itsDashboardPublisher;		//## link itsDashboardPublisher
    
    OMCollection<GeographicalConfiguration*> itsGeographicalConfiguration;		//## link itsGeographicalConfiguration
    
    PredictionModelPublisher* itsPredictionModelPublisher;		//## link itsPredictionModelPublisher
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedImageProcessor : virtual public AOMInstance {
    DECLARE_META(ImageProcessor, OMAnimatedImageProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/
