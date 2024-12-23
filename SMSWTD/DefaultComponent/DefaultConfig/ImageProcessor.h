/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/

#ifndef ImageProcessor_H
#define ImageProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## class ImageProcessor
#include "DataProcessor.h"
//## auto_generated
#include <aom.h>
//## link itsDataPublisher
class DataPublisher;

//## link itsImageCollector
class ImageCollector;

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
class ImageProcessor : public DataProcessor {
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedImageProcessor : public OMAnimatedDataProcessor {
    DECLARE_META(ImageProcessor, OMAnimatedImageProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/
