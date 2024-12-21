/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowProcessor.h
*********************************************************************/

#ifndef WaterFlowProcessor_H
#define WaterFlowProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class WaterFlowProcessor
class WaterFlowProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaterFlowProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WaterFlowProcessor(void);
    
    //## auto_generated
    ~WaterFlowProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWaterFlowProcessor : virtual public AOMInstance {
    DECLARE_META(WaterFlowProcessor, OMAnimatedWaterFlowProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterFlowProcessor.h
*********************************************************************/
