/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirborneSensor
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AirborneSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_AirborneSensor_AirborneSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class AirborneSensor
AirborneSensor::AirborneSensor(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(AirborneSensor, AirborneSensor(), 0, SMSWTD_SYSTEM_DESIGN_AirborneSensor_AirborneSensor_SERIALIZE);
}

AirborneSensor::~AirborneSensor(void) {
    NOTIFY_DESTRUCTOR(~AirborneSensor, true);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void AirborneSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAirborneSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AirborneSensor::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAirborneSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(AirborneSensor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedAirborneSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.cpp
*********************************************************************/
