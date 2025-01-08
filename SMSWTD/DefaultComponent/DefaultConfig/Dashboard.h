/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## link itsNotificationService
class NotificationService;

//## link itsSMSWTD_CONTROLLER
class SMSWTD_CONTROLLER;

//## package SMSWTD_SYSTEM::DESIGN

//## class Dashboard
class Dashboard {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDashboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Dashboard(void);
    
    //## auto_generated
    ~Dashboard(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const NotificationService* getItsNotificationService(void) const;
    
    //## auto_generated
    void setItsNotificationService(NotificationService* const p_NotificationService);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    NotificationService* itsNotificationService;		//## link itsNotificationService
    
    SMSWTD_CONTROLLER* itsSMSWTD_CONTROLLER;		//## link itsSMSWTD_CONTROLLER
    
    ////    Framework operations    ////

public :

    //## auto_generated
    const SMSWTD_CONTROLLER* getItsSMSWTD_CONTROLLER(void) const;
    
    //## auto_generated
    void setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void __setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _clearItsSMSWTD_CONTROLLER(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDashboard : virtual public AOMInstance {
    DECLARE_META(Dashboard, OMAnimatedDashboard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
