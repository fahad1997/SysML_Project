/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterPressureSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WaterPressureSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_WaterPressureSensor_WaterPressureSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class WaterPressureSensor
WaterPressureSensor::WaterPressureSensor(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(WaterPressureSensor, WaterPressureSensor(), 0, SMSWTD_SYSTEM_DESIGN_WaterPressureSensor_WaterPressureSensor_SERIALIZE);
}

WaterPressureSensor::~WaterPressureSensor(void) {
    NOTIFY_DESTRUCTOR(~WaterPressureSensor, true);
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

void WaterPressureSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const WaterPressureSensor* p_WaterPressureSensor = itsSMSWTD->getItsWaterPressureSensor();
            if(p_WaterPressureSensor != NULL)
                {
                    itsSMSWTD->__setItsWaterPressureSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void WaterPressureSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void WaterPressureSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWaterPressureSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WaterPressureSensor::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWaterPressureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(WaterPressureSensor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedWaterPressureSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.cpp
*********************************************************************/
