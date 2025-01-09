/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DashboardPublisher
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.h
*********************************************************************/

#ifndef DashboardPublisher_H
#define DashboardPublisher_H

//## auto_generated
#include <oxf.h>
//## class DashboardPublisher
#include "DataPublisher.h"
//## auto_generated
#include <aom.h>
//## auto_generated
#include "PKG_SMSWTD_CONTROLLER.h"
//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class DashboardPublisher
class DashboardPublisher : public DataPublisher {
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
class OMAnimatedDashboardPublisher : public OMAnimatedDataPublisher {
    DECLARE_META(DashboardPublisher, OMAnimatedDashboardPublisher)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.h
*********************************************************************/
