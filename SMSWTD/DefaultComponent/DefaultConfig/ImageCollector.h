/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Wed, 8, Jan 2025  
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
//## link itsSMSWTD_CONTROLLER
class SMSWTD_CONTROLLER;

//## link itsSateliteImage
class SateliteImage;

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
    
    //## auto_generated
    const SMSWTD_CONTROLLER* getItsSMSWTD_CONTROLLER(void) const;
    
    //## auto_generated
    void setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    const SateliteImage* getItsSateliteImage(void) const;
    
    //## auto_generated
    void setItsSateliteImage(SateliteImage* const p_SateliteImage);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    SMSWTD_CONTROLLER* itsSMSWTD_CONTROLLER;		//## link itsSMSWTD_CONTROLLER
    
    SateliteImage* itsSateliteImage;		//## link itsSateliteImage

public :

    //## auto_generated
    void __setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _clearItsSMSWTD_CONTROLLER(void);
    
    //## auto_generated
    void __setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _clearItsSateliteImage(void);
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
