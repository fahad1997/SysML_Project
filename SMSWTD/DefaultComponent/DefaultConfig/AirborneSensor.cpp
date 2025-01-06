/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirborneSensor
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.cpp
*********************************************************************/

//## auto_generated
#include "AirborneSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class AirborneSensor
AirborneSensor::AirborneSensor(void) : itsSMSWTD(NULL) {
}

AirborneSensor::~AirborneSensor(void) {
    cleanUpRelations();
}

const SMSWTD* AirborneSensor::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void AirborneSensor::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAirborneSensor(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void AirborneSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const AirborneSensor* p_AirborneSensor = itsSMSWTD->getItsAirborneSensor();
            if(p_AirborneSensor != NULL)
                {
                    itsSMSWTD->__setItsAirborneSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void AirborneSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void AirborneSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAirborneSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AirborneSensor::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.cpp
*********************************************************************/
