/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowDetector
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WaterFlowDetector.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsDataCollector
#include "DataCollector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_WaterFlowDetector_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_waterPressure)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class WaterFlowDetector
//#[ ignore
WaterFlowDetector::p_WaterFlowDetector_C::p_WaterFlowDetector_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

WaterFlowDetector::p_WaterFlowDetector_C::~p_WaterFlowDetector_C(void) {
    cleanUpRelations();
}

int_waterPressure_ProxyFlowPropertyInterface* WaterFlowDetector::p_WaterFlowDetector_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_waterPressure_ProxyFlowPropertyInterface* WaterFlowDetector::p_WaterFlowDetector_C::getOutBound(void) {
    return this;
}

void WaterFlowDetector::p_WaterFlowDetector_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void WaterFlowDetector::p_WaterFlowDetector_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void WaterFlowDetector::p_WaterFlowDetector_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

WaterFlowDetector::WaterFlowDetector(void) : itsSMSWTD(NULL), waterPressure(0), itsDataCollector(NULL) {
    NOTIFY_CONSTRUCTOR(WaterFlowDetector, WaterFlowDetector(), 0, SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_WaterFlowDetector_SERIALIZE);
}

WaterFlowDetector::~WaterFlowDetector(void) {
    NOTIFY_DESTRUCTOR(~WaterFlowDetector, true);
    cleanUpRelations();
}

const SMSWTD* WaterFlowDetector::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void WaterFlowDetector::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsWaterFlowDetector(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void WaterFlowDetector::cleanUpRelations(void) {
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            const WaterFlowDetector* p_WaterFlowDetector = itsDataCollector->getItsWaterFlowDetector();
            if(p_WaterFlowDetector != NULL)
                {
                    itsDataCollector->__setItsWaterFlowDetector(NULL);
                }
            itsDataCollector = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const WaterFlowDetector* p_WaterFlowDetector = itsSMSWTD->getItsWaterFlowDetector();
            if(p_WaterFlowDetector != NULL)
                {
                    itsSMSWTD->__setItsWaterFlowDetector(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void WaterFlowDetector::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void WaterFlowDetector::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWaterFlowDetector(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WaterFlowDetector::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

WaterFlowDetector::p_WaterFlowDetector_C* WaterFlowDetector::getP_WaterFlowDetector(void) const {
    return (WaterFlowDetector::p_WaterFlowDetector_C*) &p_WaterFlowDetector;
}

WaterFlowDetector::p_WaterFlowDetector_C* WaterFlowDetector::get_p_WaterFlowDetector(void) const {
    return (WaterFlowDetector::p_WaterFlowDetector_C*) &p_WaterFlowDetector;
}

const int WaterFlowDetector::getWaterPressure(void) const {
    return waterPressure;
}

const DataCollector* WaterFlowDetector::getItsDataCollector(void) const {
    return itsDataCollector;
}

void WaterFlowDetector::setItsDataCollector(DataCollector* const p_DataCollector) {
    if(p_DataCollector != NULL)
        {
            p_DataCollector->_setItsWaterFlowDetector(this);
        }
    _setItsDataCollector(p_DataCollector);
}

void WaterFlowDetector::__setItsDataCollector(DataCollector* const p_DataCollector) {
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

void WaterFlowDetector::_setItsDataCollector(DataCollector* const p_DataCollector) {
    if(itsDataCollector != NULL)
        {
            itsDataCollector->__setItsWaterFlowDetector(NULL);
        }
    __setItsDataCollector(p_DataCollector);
}

void WaterFlowDetector::_clearItsDataCollector(void) {
    NOTIFY_RELATION_CLEARED("itsDataCollector");
    itsDataCollector = NULL;
}

//#[ ignore
void WaterFlowDetector::setWaterPressure(int p_waterPressure) {
    if (waterPressure != p_waterPressure)  {
        waterPressure = p_waterPressure;
        FLOW_DATA_SEND(waterPressure, p_WaterFlowDetector, setWaterPressure, x2String);
    }
}
//#]

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWaterFlowDetector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
}

void OMAnimatedWaterFlowDetector::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(WaterFlowDetector, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedWaterFlowDetector)

IMPLEMENT_META_OP(OMAnimatedWaterFlowDetector, SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int, "setWaterPressure", FALSE, "setWaterPressure(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int, WaterFlowDetector, setWaterPressure(p_waterPressure), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/
