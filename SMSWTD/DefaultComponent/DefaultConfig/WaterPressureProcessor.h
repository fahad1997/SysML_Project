/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterPressureProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterPressureProcessor.h
*********************************************************************/

#ifndef WaterPressureProcessor_H
#define WaterPressureProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class WaterPressureProcessor
class WaterPressureProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaterPressureProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WaterPressureProcessor(void);
    
    //## auto_generated
    ~WaterPressureProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWaterPressureProcessor : virtual public AOMInstance {
    DECLARE_META(WaterPressureProcessor, OMAnimatedWaterPressureProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterPressureProcessor.h
*********************************************************************/
