/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/

//## auto_generated
#include "Cloud.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class Cloud
Cloud::Cloud(void) : itsSMSWTD(NULL) {
}

Cloud::~Cloud(void) {
    cleanUpRelations();
}

const SMSWTD* Cloud::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Cloud::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsCloud(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Cloud::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Cloud* p_Cloud = itsSMSWTD->getItsCloud();
            if(p_Cloud != NULL)
                {
                    itsSMSWTD->__setItsCloud(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Cloud::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Cloud::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCloud(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Cloud::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/
