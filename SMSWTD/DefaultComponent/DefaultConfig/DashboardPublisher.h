/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DashboardPublisher
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.h
*********************************************************************/

#ifndef DashboardPublisher_H
#define DashboardPublisher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class DashboardPublisher
class DashboardPublisher {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDashboardPublisher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DashboardPublisher(void);
    
    //## auto_generated
    ~DashboardPublisher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDashboardPublisher : virtual public AOMInstance {
    DECLARE_META(DashboardPublisher, OMAnimatedDashboardPublisher)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.h
*********************************************************************/
