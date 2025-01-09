/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImage
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.h
*********************************************************************/

#ifndef SateliteImage_H
#define SateliteImage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsImageCollector
class ImageCollector;

//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD_SYSTEM::DESIGN

//## class SateliteImage
class SateliteImage {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSateliteImage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SateliteImage(void);
    
    //## auto_generated
    ~SateliteImage(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    //## auto_generated
    const ImageCollector* getItsImageCollector(void) const;
    
    //## auto_generated
    void setItsImageCollector(ImageCollector* const p_ImageCollector);

private :

    ImageCollector* itsImageCollector;		//## link itsImageCollector

public :

    //## auto_generated
    void __setItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    void _setItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    void _clearItsImageCollector(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSateliteImage : virtual public AOMInstance {
    DECLARE_META(SateliteImage, OMAnimatedSateliteImage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.h
*********************************************************************/
