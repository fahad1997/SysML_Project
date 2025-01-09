/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/

#ifndef ImageProcessor_H
#define ImageProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## link itsDataProcessor
class DataProcessor;

//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsDataPublisher
class DataPublisher;

//## link itsImageCollector
class ImageCollector;

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
class ImageProcessor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedImageProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit ImageProcessor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~ImageProcessor(void);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

public :

    //## auto_generated
    const DataPublisher* getItsDataPublisher(void) const;
    
    //## auto_generated
    void setItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    const ImageCollector* getItsImageCollector(void) const;
    
    //## auto_generated
    void setItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    virtual bool startBehavior(void);

private :

    DataPublisher* itsDataPublisher;		//## link itsDataPublisher
    
    ImageCollector* itsImageCollector;		//## link itsImageCollector

public :

    //## auto_generated
    const DataProcessor* getItsDataProcessor(void) const;
    
    //## auto_generated
    void setItsDataProcessor(DataProcessor* const p_DataProcessor);

private :

    DataProcessor* itsDataProcessor;		//## link itsDataProcessor

public :

    //## auto_generated
    void __setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _clearItsDataProcessor(void);
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
