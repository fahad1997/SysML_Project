/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/

#ifndef DataCollector_H
#define DataCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class DataCollector
class DataCollector {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataCollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataCollector(void);
    
    //## auto_generated
    ~DataCollector(void);
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataCollector : virtual public AOMInstance {
    DECLARE_META(DataCollector, OMAnimatedDataCollector)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/
