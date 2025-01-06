/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## link itsNotificationService
class NotificationService;

//## link itsSMSWTD_BLK
class SMSWTD_BLK;

//## package SMSWTD_SYSTEM::DESIGN

//## class Dashboard
class Dashboard {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Dashboard(void);
    
    //## auto_generated
    ~Dashboard(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const NotificationService* getItsNotificationService(void) const;
    
    //## auto_generated
    void setItsNotificationService(NotificationService* const p_NotificationService);
    
    //## auto_generated
    const SMSWTD_BLK* getItsSMSWTD_BLK(void) const;
    
    //## auto_generated
    void setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    NotificationService* itsNotificationService;		//## link itsNotificationService
    
    SMSWTD_BLK* itsSMSWTD_BLK;		//## link itsSMSWTD_BLK
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _clearItsSMSWTD_BLK(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
