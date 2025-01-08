/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dashboard.h"
//## link itsNotificationService
#include "NotificationService.h"
//## link itsSMSWTD_CONTROLLER
#include "SMSWTD_CONTROLLER.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_Dashboard_Dashboard_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class Dashboard
Dashboard::Dashboard(void) : itsNotificationService(NULL), itsSMSWTD_CONTROLLER(NULL) {
    NOTIFY_CONSTRUCTOR(Dashboard, Dashboard(), 0, SMSWTD_SYSTEM_DESIGN_Dashboard_Dashboard_SERIALIZE);
}

Dashboard::~Dashboard(void) {
    NOTIFY_DESTRUCTOR(~Dashboard, true);
    cleanUpRelations();
}

const NotificationService* Dashboard::getItsNotificationService(void) const {
    return itsNotificationService;
}

void Dashboard::setItsNotificationService(NotificationService* const p_NotificationService) {
    itsNotificationService = p_NotificationService;
    if(p_NotificationService != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNotificationService", p_NotificationService, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNotificationService");
        }
}

void Dashboard::cleanUpRelations(void) {
    if(itsNotificationService != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNotificationService");
            itsNotificationService = NULL;
        }
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
            const Dashboard* p_Dashboard = itsSMSWTD_CONTROLLER->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsSMSWTD_CONTROLLER->__setItsDashboard(NULL);
                }
            itsSMSWTD_CONTROLLER = NULL;
        }
}

const SMSWTD_CONTROLLER* Dashboard::getItsSMSWTD_CONTROLLER(void) const {
    return itsSMSWTD_CONTROLLER;
}

void Dashboard::setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            p_SMSWTD_CONTROLLER->_setItsDashboard(this);
        }
    _setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void Dashboard::__setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    itsSMSWTD_CONTROLLER = p_SMSWTD_CONTROLLER;
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_CONTROLLER", p_SMSWTD_CONTROLLER, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
        }
}

void Dashboard::_setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            itsSMSWTD_CONTROLLER->__setItsDashboard(NULL);
        }
    __setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void Dashboard::_clearItsSMSWTD_CONTROLLER(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
    itsSMSWTD_CONTROLLER = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationService", false, true);
    if(myReal->itsNotificationService)
        {
            aomsRelations->ADD_ITEM(myReal->itsNotificationService);
        }
    aomsRelations->addRelation("itsSMSWTD_CONTROLLER", false, true);
    if(myReal->itsSMSWTD_CONTROLLER)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_CONTROLLER);
        }
}
//#]

IMPLEMENT_META_P(Dashboard, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
