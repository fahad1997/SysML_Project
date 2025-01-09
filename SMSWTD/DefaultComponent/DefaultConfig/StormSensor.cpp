/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StormSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsDataCollector
#include "DataCollector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_StormSensor_StormSensor_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_windSpeed)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class StormSensor
//#[ ignore
StormSensor::p_StormSensor_C::p_StormSensor_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

StormSensor::p_StormSensor_C::~p_StormSensor_C(void) {
    cleanUpRelations();
}

int_windSpeed_ProxyFlowPropertyInterface* StormSensor::p_StormSensor_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

int_windSpeed_ProxyFlowPropertyInterface* StormSensor::p_StormSensor_C::getOutBound(void) {
    return this;
}

void StormSensor::p_StormSensor_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void StormSensor::p_StormSensor_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void StormSensor::p_StormSensor_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

StormSensor::StormSensor(void) : itsSMSWTD(NULL), windSpeed(0), itsDataCollector(NULL) {
    NOTIFY_CONSTRUCTOR(StormSensor, StormSensor(), 0, SMSWTD_SYSTEM_DESIGN_StormSensor_StormSensor_SERIALIZE);
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
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            const StormSensor* p_StormSensor = itsDataCollector->getItsStormSensor();
            if(p_StormSensor != NULL)
                {
                    itsDataCollector->__setItsStormSensor(NULL);
                }
            itsDataCollector = NULL;
        }
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

StormSensor::p_StormSensor_C* StormSensor::getP_StormSensor(void) const {
    return (StormSensor::p_StormSensor_C*) &p_StormSensor;
}

StormSensor::p_StormSensor_C* StormSensor::get_p_StormSensor(void) const {
    return (StormSensor::p_StormSensor_C*) &p_StormSensor;
}

const int StormSensor::getWindSpeed(void) const {
    return windSpeed;
}

const DataCollector* StormSensor::getItsDataCollector(void) const {
    return itsDataCollector;
}

void StormSensor::setItsDataCollector(DataCollector* const p_DataCollector) {
    if(p_DataCollector != NULL)
        {
            p_DataCollector->_setItsStormSensor(this);
        }
    _setItsDataCollector(p_DataCollector);
}

void StormSensor::__setItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector = p_DataCollector;
    if(p_DataCollector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataCollector", p_DataCollector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
        }
}

void StormSensor::_setItsDataCollector(DataCollector* const p_DataCollector) {
    if(itsDataCollector != NULL)
        {
            itsDataCollector->__setItsStormSensor(NULL);
        }
    __setItsDataCollector(p_DataCollector);
}

void StormSensor::_clearItsDataCollector(void) {
    NOTIFY_RELATION_CLEARED("itsDataCollector");
    itsDataCollector = NULL;
}

//#[ ignore
void StormSensor::setWindSpeed(int p_windSpeed) {
    if (windSpeed != p_windSpeed)  {
        windSpeed = p_windSpeed;
        FLOW_DATA_SEND(windSpeed, p_StormSensor, setWindSpeed, x2String);
    }
}
//#]

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStormSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
}

void OMAnimatedStormSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    aomsRelations->addRelation("itsDataCollector", false, true);
    if(myReal->itsDataCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataCollector);
        }
}
//#]

IMPLEMENT_META_P(StormSensor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedStormSensor)

IMPLEMENT_META_OP(OMAnimatedStormSensor, SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int, "setWindSpeed", FALSE, "setWindSpeed(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int, StormSensor, setWindSpeed(p_windSpeed), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormSensor.cpp
*********************************************************************/
