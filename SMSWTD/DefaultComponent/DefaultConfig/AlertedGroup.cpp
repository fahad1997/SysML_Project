/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertedGroup
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\AlertedGroup.cpp
*********************************************************************/

//## auto_generated
#include "AlertedGroup.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## actor AlertedGroup
AlertedGroup::AlertedGroup(void) : itsSMSWTD(NULL) {
}

AlertedGroup::~AlertedGroup(void) {
    cleanUpRelations();
}

const SMSWTD* AlertedGroup::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void AlertedGroup::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAlertedGroup(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void AlertedGroup::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const AlertedGroup* p_AlertedGroup = itsSMSWTD->getItsAlertedGroup();
            if(p_AlertedGroup != NULL)
                {
                    itsSMSWTD->__setItsAlertedGroup(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void AlertedGroup::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void AlertedGroup::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAlertedGroup(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AlertedGroup::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertedGroup.cpp
*********************************************************************/
