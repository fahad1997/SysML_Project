/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormProjectionProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\StormProjectionProcessor.h
*********************************************************************/

#ifndef StormProjectionProcessor_H
#define StormProjectionProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class StormProjectionProcessor
class StormProjectionProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStormProjectionProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StormProjectionProcessor(void);
    
    //## auto_generated
    ~StormProjectionProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStormProjectionProcessor : virtual public AOMInstance {
    DECLARE_META(StormProjectionProcessor, OMAnimatedStormProjectionProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormProjectionProcessor.h
*********************************************************************/
