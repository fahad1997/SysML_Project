/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class Dashboard
class Dashboard {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDashboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Dashboard(void);
    
    //## auto_generated
    ~Dashboard(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDashboard : virtual public AOMInstance {
    DECLARE_META(Dashboard, OMAnimatedDashboard)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
