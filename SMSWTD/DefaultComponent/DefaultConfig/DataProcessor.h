/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/

#ifndef DataProcessor_H
#define DataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "omlist.h"
//## classInstance itsImageProcessor
class ImageProcessor;

//## classInstance itsSensorDataProcessor
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
class DataProcessor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit DataProcessor(IOxfActive* const theActiveContext = NULL);
    
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
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    OMList<ImageProcessor*> itsImageProcessor;		//## classInstance itsImageProcessor
    
    OMList<SensorDataProcessor*> itsSensorDataProcessor;		//## classInstance itsSensorDataProcessor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessor : virtual public AOMInstance {
    DECLARE_META(DataProcessor, OMAnimatedDataProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/
