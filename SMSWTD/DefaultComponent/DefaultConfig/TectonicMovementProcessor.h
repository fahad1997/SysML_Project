/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TectonicMovementProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\TectonicMovementProcessor.h
*********************************************************************/

#ifndef TectonicMovementProcessor_H
#define TectonicMovementProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class TectonicMovementProcessor
class TectonicMovementProcessor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTectonicMovementProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TectonicMovementProcessor(void);
    
    //## auto_generated
    ~TectonicMovementProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTectonicMovementProcessor : virtual public AOMInstance {
    DECLARE_META(TectonicMovementProcessor, OMAnimatedTectonicMovementProcessor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TectonicMovementProcessor.h
*********************************************************************/
