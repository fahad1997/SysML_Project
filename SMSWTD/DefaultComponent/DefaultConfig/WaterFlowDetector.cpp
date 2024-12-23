/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowDetector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/

//## auto_generated
#include "WaterFlowDetector.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class WaterFlowDetector
WaterFlowDetector::WaterFlowDetector(void) : itsSMSWTD(NULL) {
}

WaterFlowDetector::~WaterFlowDetector(void) {
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
}

void WaterFlowDetector::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsWaterFlowDetector(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void WaterFlowDetector::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.cpp
*********************************************************************/
