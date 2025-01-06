/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Mon, 6, Jan 2025  
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
//## link itsDataPublisher
class DataPublisher;

//## link itsImageCollector
class ImageCollector;

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
class ImageProcessor : public DataProcessor {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/
