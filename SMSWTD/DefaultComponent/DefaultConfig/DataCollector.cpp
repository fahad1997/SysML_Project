/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataCollector.h"
//## link itsSMSWTD_CONTROLLER
#include "SMSWTD_CONTROLLER.h"
//## link itsStormSensor
#include "StormSensor.h"
//## link itsWaterFlowDetector
#include "WaterFlowDetector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_DATA_COLLECTOR_DataCollector_DataCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_DATA_COLLECTOR

//## class DataCollector
//#[ ignore
DataCollector::p_DataCollector_1_C::p_DataCollector_1_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

DataCollector::p_DataCollector_1_C::~p_DataCollector_1_C(void) {
    cleanUpRelations();
}

void DataCollector::p_DataCollector_1_C::connectDataCollector(DataCollector* part) {
    setItsInt_waterPressure_ProxyFlowPropertyInterface(part);
    
}

int_waterPressure_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_1_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataCollector::p_DataCollector_1_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void DataCollector::p_DataCollector_1_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void DataCollector::p_DataCollector_1_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

DataCollector::p_DataCollector_C::p_DataCollector_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

DataCollector::p_DataCollector_C::~p_DataCollector_C(void) {
    cleanUpRelations();
}

void DataCollector::p_DataCollector_C::connectDataCollector(DataCollector* part) {
    setItsInt_windSpeed_ProxyFlowPropertyInterface(part);
    
}

int_windSpeed_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataCollector::p_DataCollector_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void DataCollector::p_DataCollector_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void DataCollector::p_DataCollector_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}

DataCollector::p_DataCollector_2_C::p_DataCollector_2_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

DataCollector::p_DataCollector_2_C::~p_DataCollector_2_C(void) {
    cleanUpRelations();
}

int_waterPressure_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_2_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_waterPressure_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_2_C::getOutBound(void) {
    return this;
}

void DataCollector::p_DataCollector_2_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void DataCollector::p_DataCollector_2_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void DataCollector::p_DataCollector_2_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

DataCollector::p_DataCollector_3_C::p_DataCollector_3_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

DataCollector::p_DataCollector_3_C::~p_DataCollector_3_C(void) {
    cleanUpRelations();
}

int_windSpeed_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_3_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

int_windSpeed_ProxyFlowPropertyInterface* DataCollector::p_DataCollector_3_C::getOutBound(void) {
    return this;
}

void DataCollector::p_DataCollector_3_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void DataCollector::p_DataCollector_3_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void DataCollector::p_DataCollector_3_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

DataCollector::DataCollector(void) : int_waterPressure_ProxyFlowPropertyInterface(), int_windSpeed_ProxyFlowPropertyInterface(), waterPressure(0), windSpeed(0), itsSMSWTD_CONTROLLER(NULL), itsStormSensor(NULL), itsWaterFlowDetector(NULL) {
    NOTIFY_CONSTRUCTOR(DataCollector, DataCollector(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_DATA_COLLECTOR_DataCollector_DataCollector_SERIALIZE);
    initRelations();
}

DataCollector::~DataCollector(void) {
    NOTIFY_DESTRUCTOR(~DataCollector, true);
    cleanUpRelations();
}

DataCollector::p_DataCollector_1_C* DataCollector::getP_DataCollector_1(void) const {
    return (DataCollector::p_DataCollector_1_C*) &p_DataCollector_1;
}

DataCollector::p_DataCollector_1_C* DataCollector::get_p_DataCollector_1(void) const {
    return (DataCollector::p_DataCollector_1_C*) &p_DataCollector_1;
}

DataCollector::p_DataCollector_C* DataCollector::getP_DataCollector(void) const {
    return (DataCollector::p_DataCollector_C*) &p_DataCollector;
}

DataCollector::p_DataCollector_C* DataCollector::get_p_DataCollector(void) const {
    return (DataCollector::p_DataCollector_C*) &p_DataCollector;
}

DataCollector::p_DataCollector_2_C* DataCollector::getP_DataCollector_2(void) const {
    return (DataCollector::p_DataCollector_2_C*) &p_DataCollector_2;
}

DataCollector::p_DataCollector_2_C* DataCollector::get_p_DataCollector_2(void) const {
    return (DataCollector::p_DataCollector_2_C*) &p_DataCollector_2;
}

DataCollector::p_DataCollector_3_C* DataCollector::getP_DataCollector_3(void) const {
    return (DataCollector::p_DataCollector_3_C*) &p_DataCollector_3;
}

DataCollector::p_DataCollector_3_C* DataCollector::get_p_DataCollector_3(void) const {
    return (DataCollector::p_DataCollector_3_C*) &p_DataCollector_3;
}

const int DataCollector::getWaterPressure(void) const {
    return waterPressure;
}

const int DataCollector::getWindSpeed(void) const {
    return windSpeed;
}

const SMSWTD_CONTROLLER* DataCollector::getItsSMSWTD_CONTROLLER(void) const {
    return itsSMSWTD_CONTROLLER;
}

void DataCollector::setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            p_SMSWTD_CONTROLLER->_setItsDataCollector(this);
        }
    _setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

const StormSensor* DataCollector::getItsStormSensor(void) const {
    return itsStormSensor;
}

void DataCollector::setItsStormSensor(StormSensor* const p_StormSensor) {
    if(p_StormSensor != NULL)
        {
            p_StormSensor->_setItsDataCollector(this);
        }
    _setItsStormSensor(p_StormSensor);
}

const WaterFlowDetector* DataCollector::getItsWaterFlowDetector(void) const {
    return itsWaterFlowDetector;
}

void DataCollector::setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    if(p_WaterFlowDetector != NULL)
        {
            p_WaterFlowDetector->_setItsDataCollector(this);
        }
    _setItsWaterFlowDetector(p_WaterFlowDetector);
}

void DataCollector::initRelations(void) {
    if (get_p_DataCollector_1() != NULL) {
        get_p_DataCollector_1()->connectDataCollector(this);
    }
    if (get_p_DataCollector() != NULL) {
        get_p_DataCollector()->connectDataCollector(this);
    }
}

void DataCollector::cleanUpRelations(void) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
            const DataCollector* p_DataCollector = itsSMSWTD_CONTROLLER->getItsDataCollector();
            if(p_DataCollector != NULL)
                {
                    itsSMSWTD_CONTROLLER->__setItsDataCollector(NULL);
                }
            itsSMSWTD_CONTROLLER = NULL;
        }
    if(itsStormSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStormSensor");
            const DataCollector* p_DataCollector = itsStormSensor->getItsDataCollector();
            if(p_DataCollector != NULL)
                {
                    itsStormSensor->__setItsDataCollector(NULL);
                }
            itsStormSensor = NULL;
        }
    if(itsWaterFlowDetector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
            const DataCollector* p_DataCollector = itsWaterFlowDetector->getItsDataCollector();
            if(p_DataCollector != NULL)
                {
                    itsWaterFlowDetector->__setItsDataCollector(NULL);
                }
            itsWaterFlowDetector = NULL;
        }
}

void DataCollector::__setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    itsSMSWTD_CONTROLLER = p_SMSWTD_CONTROLLER;
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_CONTROLLER", p_SMSWTD_CONTROLLER, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
        }
}

void DataCollector::_setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            itsSMSWTD_CONTROLLER->__setItsDataCollector(NULL);
        }
    __setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void DataCollector::_clearItsSMSWTD_CONTROLLER(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
    itsSMSWTD_CONTROLLER = NULL;
}

void DataCollector::__setItsStormSensor(StormSensor* const p_StormSensor) {
    itsStormSensor = p_StormSensor;
    if(p_StormSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStormSensor", p_StormSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStormSensor");
        }
}

void DataCollector::_setItsStormSensor(StormSensor* const p_StormSensor) {
    if(itsStormSensor != NULL)
        {
            itsStormSensor->__setItsDataCollector(NULL);
        }
    __setItsStormSensor(p_StormSensor);
}

void DataCollector::_clearItsStormSensor(void) {
    NOTIFY_RELATION_CLEARED("itsStormSensor");
    itsStormSensor = NULL;
}

void DataCollector::__setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    itsWaterFlowDetector = p_WaterFlowDetector;
    if(p_WaterFlowDetector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWaterFlowDetector", p_WaterFlowDetector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
        }
}

void DataCollector::_setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    if(itsWaterFlowDetector != NULL)
        {
            itsWaterFlowDetector->__setItsDataCollector(NULL);
        }
    __setItsWaterFlowDetector(p_WaterFlowDetector);
}

void DataCollector::_clearItsWaterFlowDetector(void) {
    NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
    itsWaterFlowDetector = NULL;
}

//#[ ignore
void DataCollector::setWaterPressure(int p_waterPressure) {
    if (waterPressure != p_waterPressure) {
        waterPressure = p_waterPressure;
        FLOW_DATA_RECEIVE("waterPressure", waterPressure, x2String);
        FLOW_DATA_SEND(waterPressure, p_DataCollector_2, setWaterPressure, x2String);
    }
    
}

void DataCollector::setWindSpeed(int p_windSpeed) {
    if (windSpeed != p_windSpeed) {
        windSpeed = p_windSpeed;
        FLOW_DATA_RECEIVE("windSpeed", windSpeed, x2String);
        FLOW_DATA_SEND(windSpeed, p_DataCollector_3, setWindSpeed, x2String);
    }
    
}
//#]

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataCollector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
}

void OMAnimatedDataCollector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD_CONTROLLER", false, true);
    if(myReal->itsSMSWTD_CONTROLLER)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_CONTROLLER);
        }
    aomsRelations->addRelation("itsWaterFlowDetector", false, true);
    if(myReal->itsWaterFlowDetector)
        {
            aomsRelations->ADD_ITEM(myReal->itsWaterFlowDetector);
        }
    aomsRelations->addRelation("itsStormSensor", false, true);
    if(myReal->itsStormSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsStormSensor);
        }
}
//#]

IMPLEMENT_META_P(DataCollector, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_DATA_COLLECTOR, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_DATA_COLLECTOR, false, OMAnimatedDataCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.cpp
*********************************************************************/
