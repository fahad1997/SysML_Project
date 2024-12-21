/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageDataObserver
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageDataObserver.h
*********************************************************************/

#ifndef ImageDataObserver_H
#define ImageDataObserver_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageDataObserver
class ImageDataObserver {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedImageDataObserver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ImageDataObserver(void);
    
    //## auto_generated
    ~ImageDataObserver(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedImageDataObserver : virtual public AOMInstance {
    DECLARE_META(ImageDataObserver, OMAnimatedImageDataObserver)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageDataObserver.h
*********************************************************************/
