/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherSensor
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_WeatherSensor_WeatherSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class WeatherSensor
WeatherSensor::WeatherSensor(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(WeatherSensor, WeatherSensor(), 0, SMSWTD_SYSTEM_DESIGN_WeatherSensor_WeatherSensor_SERIALIZE);
}

WeatherSensor::~WeatherSensor(void) {
    NOTIFY_DESTRUCTOR(~WeatherSensor, true);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void WeatherSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWeatherSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WeatherSensor::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeatherSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(WeatherSensor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedWeatherSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherSensor.cpp
*********************************************************************/
