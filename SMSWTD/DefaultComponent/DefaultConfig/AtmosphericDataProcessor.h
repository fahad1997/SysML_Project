/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AtmosphericDataProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\AtmosphericDataProcessor.h
*********************************************************************/

#ifndef AtmosphericDataProcessor_H
#define AtmosphericDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class AtmosphericDataProcessor
class AtmosphericDataProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAtmosphericDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AtmosphericDataProcessor(void);
    
    //## auto_generated
    ~AtmosphericDataProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAtmosphericDataProcessor : virtual public AOMInstance {
    DECLARE_META(AtmosphericDataProcessor, OMAnimatedAtmosphericDataProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AtmosphericDataProcessor.h
*********************************************************************/
