/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterPressureSensor
//!	Generated Date	: Thu, 19, Dec 2024  
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
#define Default_WaterPressureSensor_WaterPressureSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class WaterPressureSensor
WaterPressureSensor::WaterPressureSensor(void) : itsSMSWTD(NULL), itsSMSWTD_1(NULL) {
    NOTIFY_CONSTRUCTOR(WaterPressureSensor, WaterPressureSensor(), 0, Default_WaterPressureSensor_WaterPressureSensor_SERIALIZE);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const WaterPressureSensor* p_WaterPressureSensor = itsSMSWTD->getItsWaterPressureSensor();
            if(p_WaterPressureSensor != NULL)
                {
                    itsSMSWTD->__setItsWaterPressureSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
    if(itsSMSWTD_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
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

void WaterPressureSensor::__setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    itsSMSWTD_1 = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_1", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
        }
}

void WaterPressureSensor::_setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD_1 != NULL)
        {
            itsSMSWTD_1->__setItsWaterPressureSensor_1(NULL);
        }
    __setItsSMSWTD_1(p_SMSWTD);
}

void WaterPressureSensor::_clearItsSMSWTD_1(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
    itsSMSWTD_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWaterPressureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    aomsRelations->addRelation("itsSMSWTD_1", false, true);
    if(myReal->itsSMSWTD_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_1);
        }
}
//#]

IMPLEMENT_META_P(WaterPressureSensor, Default, Default, false, OMAnimatedWaterPressureSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.cpp
*********************************************************************/
