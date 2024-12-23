/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormSensor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/

//## auto_generated
#include "StormSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class StormSensor
StormSensor::StormSensor(void) : itsSMSWTD(NULL) {
}

StormSensor::~StormSensor(void) {
    cleanUpRelations();
}

const SMSWTD* StormSensor::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void StormSensor::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsStormSensor(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void StormSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const StormSensor* p_StormSensor = itsSMSWTD->getItsStormSensor();
            if(p_StormSensor != NULL)
                {
                    itsSMSWTD->__setItsStormSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void StormSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void StormSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsStormSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void StormSensor::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/
