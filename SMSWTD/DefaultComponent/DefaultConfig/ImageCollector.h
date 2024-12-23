/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/

#ifndef ImageCollector_H
#define ImageCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## package SMSWTD_SYSTEM::DESIGN

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
    
    ////    Relations and components    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedImageCollector : virtual public AOMInstance {
    DECLARE_META(ImageCollector, OMAnimatedImageCollector)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/
