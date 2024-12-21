/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormSensor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StormSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define Default_StormSensor_StormSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class StormSensor
StormSensor::StormSensor(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(StormSensor, StormSensor(), 0, Default_StormSensor_StormSensor_SERIALIZE);
}

StormSensor::~StormSensor(void) {
    NOTIFY_DESTRUCTOR(~StormSensor, true);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void StormSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsStormSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void StormSensor::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStormSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(StormSensor, Default, Default, false, OMAnimatedStormSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/
