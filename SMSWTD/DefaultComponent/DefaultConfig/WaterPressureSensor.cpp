/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterPressureSensor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.cpp
*********************************************************************/

//## auto_generated
#include "WaterPressureSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class WaterPressureSensor
WaterPressureSensor::WaterPressureSensor(void) : itsSMSWTD(NULL), itsSMSWTD_1(NULL) {
}

WaterPressureSensor::~WaterPressureSensor(void) {
    cleanUpRelations();
}

const SMSWTD* WaterPressureSensor::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void WaterPressureSensor::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsWaterPressureSensor(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

const SMSWTD* WaterPressureSensor::getItsSMSWTD_1(void) const {
    return itsSMSWTD_1;
}

void WaterPressureSensor::setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsWaterPressureSensor_1(this);
        }
    _setItsSMSWTD_1(p_SMSWTD);
}

void WaterPressureSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const WaterPressureSensor* p_WaterPressureSensor = itsSMSWTD->getItsWaterPressureSensor();
            if(p_WaterPressureSensor != NULL)
                {
                    itsSMSWTD->__setItsWaterPressureSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
    if(itsSMSWTD_1 != NULL)
        {
            const WaterPressureSensor* p_WaterPressureSensor = itsSMSWTD_1->getItsWaterPressureSensor_1();
            if(p_WaterPressureSensor != NULL)
                {
                    itsSMSWTD_1->__setItsWaterPressureSensor_1(NULL);
                }
            itsSMSWTD_1 = NULL;
        }
}

void WaterPressureSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void WaterPressureSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWaterPressureSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WaterPressureSensor::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

void WaterPressureSensor::__setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    itsSMSWTD_1 = p_SMSWTD;
}

void WaterPressureSensor::_setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD_1 != NULL)
        {
            itsSMSWTD_1->__setItsWaterPressureSensor_1(NULL);
        }
    __setItsSMSWTD_1(p_SMSWTD);
}

void WaterPressureSensor::_clearItsSMSWTD_1(void) {
    itsSMSWTD_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.cpp
*********************************************************************/
