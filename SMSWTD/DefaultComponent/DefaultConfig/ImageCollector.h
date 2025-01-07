/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Tue, 7, Jan 2025  
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
//## link itsSMSWTD_BLK
class SMSWTD_BLK;

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
    const SMSWTD_BLK* getItsSMSWTD_BLK(void) const;
    
    //## auto_generated
    void setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    const SateliteImage* getItsSateliteImage(void) const;
    
    //## auto_generated
    void setItsSateliteImage(SateliteImage* const p_SateliteImage);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    SMSWTD_BLK* itsSMSWTD_BLK;		//## link itsSMSWTD_BLK
    
    SateliteImage* itsSateliteImage;		//## link itsSateliteImage

public :

    //## auto_generated
    void __setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _clearItsSMSWTD_BLK(void);
    
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
