/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//## auto_generated
#include "User.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## actor User
User::User(void) : itsSMSWTD(NULL) {
}

User::~User(void) {
    cleanUpRelations();
}

const SMSWTD* User::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void User::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsUser(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void User::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const User* p_User = itsSMSWTD->getItsUser();
            if(p_User != NULL)
                {
                    itsSMSWTD->__setItsUser(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void User::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void User::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsUser(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void User::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
