/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DESIGN.h"
//## classInstance itsDataCollector
#include "DataCollector.h"
//## classInstance itsDataProcessor
#include "DataProcessor.h"
//## classInstance itsSMSWTD_BLK
#include "SMSWTD_CONTROLLER.h"
//## classInstance itsStormSensor
#include "StormSensor.h"
//## classInstance itsWaterFlowDetector
#include "WaterFlowDetector.h"
//## auto_generated
#include "AirborneSensor.h"
//## auto_generated
#include "Cloud.h"
//## auto_generated
#include "SateliteImage.h"
//## auto_generated
#include "SMSWTD.h"
//## auto_generated
#include "WaterPressureSensor.h"
//## auto_generated
#include "WeatherSensor.h"
//#[ ignore
#define reqDataFromSensors_SERIALIZE OM_NO_OP

#define reqDataFromSensors_UNSERIALIZE OM_NO_OP

#define reqDataFromSensors_CONSTRUCTOR reqDataFromSensors()

#define evActivateSMSWTD_SERIALIZE OM_NO_OP

#define evActivateSMSWTD_UNSERIALIZE OM_NO_OP

#define evActivateSMSWTD_CONSTRUCTOR evActivateSMSWTD()

#define evCheckDataAvailability_SERIALIZE OM_NO_OP

#define evCheckDataAvailability_UNSERIALIZE OM_NO_OP

#define evCheckDataAvailability_CONSTRUCTOR evCheckDataAvailability()

#define evSensorsReadyToCollectData_SERIALIZE OM_NO_OP

#define evSensorsReadyToCollectData_UNSERIALIZE OM_NO_OP

#define evSensorsReadyToCollectData_CONSTRUCTOR evSensorsReadyToCollectData()

#define evProcessData_SERIALIZE OM_NO_OP

#define evProcessData_UNSERIALIZE OM_NO_OP

#define evProcessData_CONSTRUCTOR evProcessData()

#define evReturnData_SERIALIZE OM_NO_OP

#define evReturnData_UNSERIALIZE OM_NO_OP

#define evReturnData_CONSTRUCTOR evReturnData()

#define evStartDataProcessing_SERIALIZE OM_NO_OP

#define evStartDataProcessing_UNSERIALIZE OM_NO_OP

#define evStartDataProcessing_CONSTRUCTOR evStartDataProcessing()
//#]

//## package SMSWTD_SYSTEM::DESIGN


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsWaterFlowDetector, WaterFlowDetector, "itsWaterFlowDetector", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSMSWTD_BLK, SMSWTD_CONTROLLER, "itsSMSWTD_BLK", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDataProcessor, DataProcessor, "itsDataProcessor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDataCollector, DataCollector, "itsDataCollector", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormSensor, StormSensor, "itsStormSensor", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//## classInstance itsDataCollector
DataCollector itsDataCollector;

//## classInstance itsDataProcessor
DataProcessor itsDataProcessor;

//## classInstance itsSMSWTD_BLK
SMSWTD_CONTROLLER itsSMSWTD_BLK;

//## classInstance itsStormSensor
StormSensor itsStormSensor;

//## classInstance itsWaterFlowDetector
WaterFlowDetector itsWaterFlowDetector;

void DESIGN_initRelations(void) {
    {
        {
            itsSMSWTD_BLK.setShouldDelete(false);
        }
        {
            itsDataProcessor.setShouldDelete(false);
        }
    }
    {
        
        itsWaterFlowDetector.get_p_WaterFlowDetector()->setItsInt_waterPressure_ProxyFlowPropertyInterface(itsDataCollector.get_p_DataCollector_1()->getItsInt_waterPressure_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsStormSensor.get_p_StormSensor()->setItsInt_windSpeed_ProxyFlowPropertyInterface(itsDataCollector.get_p_DataCollector()->getItsInt_windSpeed_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsDataCollector.get_p_DataCollector_2()->setItsInt_waterPressure_ProxyFlowPropertyInterface(itsSMSWTD_BLK.get_p_SMSWTD_BLK()->getItsInt_waterPressure_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsDataCollector.get_p_DataCollector_3()->setItsInt_windSpeed_ProxyFlowPropertyInterface(itsSMSWTD_BLK.get_p_SMSWTD_BLK_1()->getItsInt_windSpeed_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool DESIGN_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsDataProcessor.startBehavior();
        }
    if(done == true)
        {
            done = itsSMSWTD_BLK.startBehavior();
        }
    return done;
}

//#[ ignore
DESIGN_OMInitializer::DESIGN_OMInitializer(void) {
    DESIGN_initRelations();
    (void) DESIGN_startBehavior();
}

DESIGN_OMInitializer::~DESIGN_OMInitializer(void) {
}
//#]

//## event evActivateSMSWTD()
evActivateSMSWTD::evActivateSMSWTD(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evActivateSMSWTD)
    setId(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id(23402);
//#]

IMPLEMENT_META_EVENT_P(evActivateSMSWTD, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evActivateSMSWTD())

//## event reqDataFromSensors()
reqDataFromSensors::reqDataFromSensors(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDataFromSensors)
    setId(reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id(23401);
//#]

IMPLEMENT_META_EVENT_P(reqDataFromSensors, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, reqDataFromSensors())

//## event evCheckDataAvailability()
evCheckDataAvailability::evCheckDataAvailability(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckDataAvailability)
    setId(evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id(23403);
//#]

IMPLEMENT_META_EVENT_P(evCheckDataAvailability, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evCheckDataAvailability())

//## event evSensorsReadyToCollectData()
evSensorsReadyToCollectData::evSensorsReadyToCollectData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSensorsReadyToCollectData)
    setId(evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id(23404);
//#]

IMPLEMENT_META_EVENT_P(evSensorsReadyToCollectData, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evSensorsReadyToCollectData())

//## event evProcessData()
evProcessData::evProcessData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evProcessData)
    setId(evProcessData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evProcessData_DESIGN_SMSWTD_SYSTEM_id(23405);
//#]

IMPLEMENT_META_EVENT_P(evProcessData, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evProcessData())

//## event evReturnData()
evReturnData::evReturnData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evReturnData)
    setId(evReturnData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evReturnData_DESIGN_SMSWTD_SYSTEM_id(23406);
//#]

IMPLEMENT_META_EVENT_P(evReturnData, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evReturnData())

//## event evStartDataProcessing()
evStartDataProcessing::evStartDataProcessing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartDataProcessing)
    setId(evStartDataProcessing_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evStartDataProcessing_DESIGN_SMSWTD_SYSTEM_id(23407);
//#]

IMPLEMENT_META_EVENT_P(evStartDataProcessing, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evStartDataProcessing())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/
