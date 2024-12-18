/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/

#ifndef ImageCollector_H
#define ImageCollector_H

//## auto_generated
#include <oxf.h>
//## link itsImageProcessor
class ImageProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageCollector
class ImageCollector {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ImageCollector(void);
    
    //## auto_generated
    ~ImageCollector(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const ImageProcessor* getItsImageProcessor(void) const;
    
    //## auto_generated
    void setItsImageProcessor(ImageProcessor* const p_ImageProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    ImageProcessor* itsImageProcessor;		//## link itsImageProcessor
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/
