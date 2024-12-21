/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImageProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SateliteImageProcessor.h
*********************************************************************/

#ifndef SateliteImageProcessor_H
#define SateliteImageProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class SateliteImageProcessor
class SateliteImageProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSateliteImageProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SateliteImageProcessor(void);
    
    //## auto_generated
    ~SateliteImageProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSateliteImageProcessor : virtual public AOMInstance {
    DECLARE_META(SateliteImageProcessor, OMAnimatedSateliteImageProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImageProcessor.h
*********************************************************************/
