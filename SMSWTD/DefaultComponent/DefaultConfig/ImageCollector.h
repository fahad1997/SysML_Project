/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/

#ifndef ImageCollector_H
#define ImageCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## link itsSateliteImage
class SateliteImage;

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageCollector
class ImageCollector {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ImageCollector(void);
    
    //## auto_generated
    ~ImageCollector(void);
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    const SateliteImage* getItsSateliteImage(void) const;
    
    //## auto_generated
    void setItsSateliteImage(SateliteImage* const p_SateliteImage);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    SateliteImage* itsSateliteImage;		//## link itsSateliteImage

public :

    //## auto_generated
    void __setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _clearItsSateliteImage(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.h
*********************************************************************/
