/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowDetector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WaterFlowDetector.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define Default_WaterFlowDetector_WaterFlowDetector_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class WaterFlowDetector
WaterFlowDetector::WaterFlowDetector(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(WaterFlowDetector, WaterFlowDetector(), 0, Default_WaterFlowDetector_WaterFlowDetector_SERIALIZE);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWaterFlowDetector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(WaterFlowDetector, Default, Default, false, OMAnimatedWaterFlowDetector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/
