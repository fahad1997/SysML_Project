/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataObserver
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataObserver.h
*********************************************************************/

#ifndef DataObserver_H
#define DataObserver_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataObserver
class DataObserver {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataObserver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataObserver(void);
    
    //## auto_generated
    ~DataObserver(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataObserver : virtual public AOMInstance {
    DECLARE_META(DataObserver, OMAnimatedDataObserver)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataObserver.h
*********************************************************************/
