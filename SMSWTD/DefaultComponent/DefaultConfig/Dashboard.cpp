/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dashboard.h"
//## link itsNotificationService
#include "NotificationService.h"
//## link itsSMSWTD_BLK
#include "SMSWTD_BLK.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_Dashboard_Dashboard_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class Dashboard
Dashboard::Dashboard(void) : itsNotificationService(NULL), itsSMSWTD_BLK(NULL) {
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

const SMSWTD_BLK* Dashboard::getItsSMSWTD_BLK(void) const {
    return itsSMSWTD_BLK;
}

void Dashboard::setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(p_SMSWTD_BLK != NULL)
        {
            p_SMSWTD_BLK->_setItsDashboard(this);
        }
    _setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void Dashboard::cleanUpRelations(void) {
    if(itsNotificationService != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNotificationService");
            itsNotificationService = NULL;
        }
    if(itsSMSWTD_BLK != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
            const Dashboard* p_Dashboard = itsSMSWTD_BLK->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsSMSWTD_BLK->__setItsDashboard(NULL);
                }
            itsSMSWTD_BLK = NULL;
        }
}

void Dashboard::__setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    itsSMSWTD_BLK = p_SMSWTD_BLK;
    if(p_SMSWTD_BLK != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_BLK", p_SMSWTD_BLK, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
        }
}

void Dashboard::_setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(itsSMSWTD_BLK != NULL)
        {
            itsSMSWTD_BLK->__setItsDashboard(NULL);
        }
    __setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void Dashboard::_clearItsSMSWTD_BLK(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
    itsSMSWTD_BLK = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationService", false, true);
    if(myReal->itsNotificationService)
        {
            aomsRelations->ADD_ITEM(myReal->itsNotificationService);
        }
    aomsRelations->addRelation("itsSMSWTD_BLK", false, true);
    if(myReal->itsSMSWTD_BLK)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_BLK);
        }
}
//#]

IMPLEMENT_META_P(Dashboard, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
