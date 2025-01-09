/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorConfiguration
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorConfiguration.h"
//## link itsDataProcessor
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_SensorConfiguration_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_thresholdWaterPressure)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_thresholdWindSpeed)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class SensorConfiguration
//#[ ignore
SensorConfiguration::p_SensorConfiguration_C::p_SensorConfiguration_C(void) : int_thresholdWaterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(NULL) {
}

SensorConfiguration::p_SensorConfiguration_C::~p_SensorConfiguration_C(void) {
    cleanUpRelations();
}

int_thresholdWaterPressure_ProxyFlowPropertyInterface* SensorConfiguration::p_SensorConfiguration_C::getItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_thresholdWaterPressure_ProxyFlowPropertyInterface* SensorConfiguration::p_SensorConfiguration_C::getOutBound(void) {
    return this;
}

void SensorConfiguration::p_SensorConfiguration_C::setThresholdWaterPressure(int p_thresholdWaterPressure) {
    
    if (itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface->setThresholdWaterPressure(p_thresholdWaterPressure);
    }
    
}

void SensorConfiguration::p_SensorConfiguration_C::setItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(int_thresholdWaterPressure_ProxyFlowPropertyInterface* const p_int_thresholdWaterPressure_ProxyFlowPropertyInterface) {
    itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface = p_int_thresholdWaterPressure_ProxyFlowPropertyInterface;
}

void SensorConfiguration::p_SensorConfiguration_C::cleanUpRelations(void) {
    if(itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

SensorConfiguration::p_SensorConfiguration_1_C::p_SensorConfiguration_1_C(void) : int_thresholdWindSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(NULL) {
}

SensorConfiguration::p_SensorConfiguration_1_C::~p_SensorConfiguration_1_C(void) {
    cleanUpRelations();
}

int_thresholdWindSpeed_ProxyFlowPropertyInterface* SensorConfiguration::p_SensorConfiguration_1_C::getItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

int_thresholdWindSpeed_ProxyFlowPropertyInterface* SensorConfiguration::p_SensorConfiguration_1_C::getOutBound(void) {
    return this;
}

void SensorConfiguration::p_SensorConfiguration_1_C::setThresholdWindSpeed(int p_thresholdWindSpeed) {
    
    if (itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface->setThresholdWindSpeed(p_thresholdWindSpeed);
    }
    
}

void SensorConfiguration::p_SensorConfiguration_1_C::setItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(int_thresholdWindSpeed_ProxyFlowPropertyInterface* const p_int_thresholdWindSpeed_ProxyFlowPropertyInterface) {
    itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface = p_int_thresholdWindSpeed_ProxyFlowPropertyInterface;
}

void SensorConfiguration::p_SensorConfiguration_1_C::cleanUpRelations(void) {
    if(itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SensorConfiguration::SensorConfiguration(void) : thresholdWaterPressure(0), thresholdWindSpeed(0), itsDataProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(SensorConfiguration, SensorConfiguration(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_SensorConfiguration_SERIALIZE);
}

SensorConfiguration::~SensorConfiguration(void) {
    NOTIFY_DESTRUCTOR(~SensorConfiguration, true);
    cleanUpRelations();
}

//#[ ignore
void SensorConfiguration::setThresholdWaterPressure(int p_thresholdWaterPressure) {
    if (thresholdWaterPressure != p_thresholdWaterPressure)  {
        thresholdWaterPressure = p_thresholdWaterPressure;
        FLOW_DATA_SEND(thresholdWaterPressure, p_SensorConfiguration, setThresholdWaterPressure, x2String);
    }
}

void SensorConfiguration::setThresholdWindSpeed(int p_thresholdWindSpeed) {
    if (thresholdWindSpeed != p_thresholdWindSpeed)  {
        thresholdWindSpeed = p_thresholdWindSpeed;
        FLOW_DATA_SEND(thresholdWindSpeed, p_SensorConfiguration_1, setThresholdWindSpeed, x2String);
    }
}
//#]

SensorConfiguration::p_SensorConfiguration_C* SensorConfiguration::getP_SensorConfiguration(void) const {
    return (SensorConfiguration::p_SensorConfiguration_C*) &p_SensorConfiguration;
}

SensorConfiguration::p_SensorConfiguration_C* SensorConfiguration::get_p_SensorConfiguration(void) const {
    return (SensorConfiguration::p_SensorConfiguration_C*) &p_SensorConfiguration;
}

SensorConfiguration::p_SensorConfiguration_1_C* SensorConfiguration::getP_SensorConfiguration_1(void) const {
    return (SensorConfiguration::p_SensorConfiguration_1_C*) &p_SensorConfiguration_1;
}

SensorConfiguration::p_SensorConfiguration_1_C* SensorConfiguration::get_p_SensorConfiguration_1(void) const {
    return (SensorConfiguration::p_SensorConfiguration_1_C*) &p_SensorConfiguration_1;
}

const int SensorConfiguration::getThresholdWaterPressure(void) const {
    return thresholdWaterPressure;
}

const int SensorConfiguration::getThresholdWindSpeed(void) const {
    return thresholdWindSpeed;
}

const DataProcessor* SensorConfiguration::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void SensorConfiguration::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsSensorConfiguration(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void SensorConfiguration::cleanUpRelations(void) {
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const SensorConfiguration* p_SensorConfiguration = itsDataProcessor->getItsSensorConfiguration();
            if(p_SensorConfiguration != NULL)
                {
                    itsDataProcessor->__setItsSensorConfiguration(NULL);
                }
            itsDataProcessor = NULL;
        }
}

void SensorConfiguration::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    itsDataProcessor = p_DataProcessor;
    if(p_DataProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataProcessor", p_DataProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
        }
}

void SensorConfiguration::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsSensorConfiguration(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void SensorConfiguration::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorConfiguration::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("thresholdWaterPressure", x2String(myReal->thresholdWaterPressure));
    aomsAttributes->addAttribute("thresholdWindSpeed", x2String(myReal->thresholdWindSpeed));
}

void OMAnimatedSensorConfiguration::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_META_P(SensorConfiguration, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedSensorConfiguration)

IMPLEMENT_META_OP(OMAnimatedSensorConfiguration, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int, "setThresholdWaterPressure", FALSE, "setThresholdWaterPressure(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int, SensorConfiguration, setThresholdWaterPressure(p_thresholdWaterPressure), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSensorConfiguration, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int, "setThresholdWindSpeed", FALSE, "setThresholdWindSpeed(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int, SensorConfiguration, setThresholdWindSpeed(p_thresholdWindSpeed), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.cpp
*********************************************************************/
