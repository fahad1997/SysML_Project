/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterDataProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterDataProcessor.h
*********************************************************************/

#ifndef WaterDataProcessor_H
#define WaterDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class WaterDataProcessor
class WaterDataProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaterDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WaterDataProcessor(void);
    
    //## auto_generated
    ~WaterDataProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWaterDataProcessor : virtual public AOMInstance {
    DECLARE_META(WaterDataProcessor, OMAnimatedWaterDataProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterDataProcessor.h
*********************************************************************/
