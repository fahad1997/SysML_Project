/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherSensor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WeatherSensor.cpp
*********************************************************************/

//## auto_generated
#include "WeatherSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class WeatherSensor
WeatherSensor::WeatherSensor(void) : itsSMSWTD(NULL) {
}

WeatherSensor::~WeatherSensor(void) {
    cleanUpRelations();
}

const SMSWTD* WeatherSensor::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void WeatherSensor::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsWeatherSensor(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void WeatherSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const WeatherSensor* p_WeatherSensor = itsSMSWTD->getItsWeatherSensor();
            if(p_WeatherSensor != NULL)
                {
                    itsSMSWTD->__setItsWeatherSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void WeatherSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void WeatherSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWeatherSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WeatherSensor::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherSensor.cpp
*********************************************************************/
