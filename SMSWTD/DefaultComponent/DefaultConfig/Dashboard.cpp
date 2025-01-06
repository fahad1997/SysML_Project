/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//## auto_generated
#include "Dashboard.h"
//## link itsNotificationService
#include "NotificationService.h"
//## link itsSMSWTD_BLK
#include "SMSWTD_BLK.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class Dashboard
Dashboard::Dashboard(void) : itsNotificationService(NULL), itsSMSWTD_BLK(NULL) {
}

Dashboard::~Dashboard(void) {
    cleanUpRelations();
}

const NotificationService* Dashboard::getItsNotificationService(void) const {
    return itsNotificationService;
}

void Dashboard::setItsNotificationService(NotificationService* const p_NotificationService) {
    itsNotificationService = p_NotificationService;
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
            itsNotificationService = NULL;
        }
    if(itsSMSWTD_BLK != NULL)
        {
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
}

void Dashboard::_setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(itsSMSWTD_BLK != NULL)
        {
            itsSMSWTD_BLK->__setItsDashboard(NULL);
        }
    __setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void Dashboard::_clearItsSMSWTD_BLK(void) {
    itsSMSWTD_BLK = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
