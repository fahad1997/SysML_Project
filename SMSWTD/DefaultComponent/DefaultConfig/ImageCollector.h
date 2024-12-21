/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/

#ifndef ImageCollector_H
#define ImageCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## link itsImageProcessor
class ImageProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageCollector
class ImageCollector {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedImageCollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedImageCollector : virtual public AOMInstance {
    DECLARE_META(ImageCollector, OMAnimatedImageCollector)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/
