/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ANALYSIS
//!	Generated Date	: Sat, 21, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ANALYSIS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ANALYSIS.h"
//## auto_generated
#include "AtmosphericDataProcessor.h"
//## auto_generated
#include "CloudStorageInterface.h"
//## auto_generated
#include "Dashboard.h"
//## auto_generated
#include "DashboardPublisher.h"
//## auto_generated
#include "DataCollector.h"
//## auto_generated
#include "DataObserver.h"
//## auto_generated
#include "DataProcessor.h"
//## auto_generated
#include "GeographicalConfiguration.h"
//## auto_generated
#include "ImageCollector.h"
//## auto_generated
#include "ImageDataObserver.h"
//## auto_generated
#include "ImageProcessor.h"
//## auto_generated
#include "NotificationChannel.h"
//## auto_generated
#include "PredictionModelPublisher.h"
//## auto_generated
#include "SateliteImageProcessor.h"
//## auto_generated
#include "SensorConfiguration.h"
//## auto_generated
#include "SensorDataProcessor.h"
//## auto_generated
#include "StormProjectionProcessor.h"
//## auto_generated
#include "TectonicMovementProcessor.h"
//## auto_generated
#include "WaterDataProcessor.h"
//## auto_generated
#include "WaterFlowProcessor.h"
//## auto_generated
#include "WaterPressureProcessor.h"
//#[ ignore
#define reqSensorsData_SERIALIZE OM_NO_OP

#define reqSensorsData_UNSERIALIZE OM_NO_OP

#define reqSensorsData_CONSTRUCTOR reqSensorsData()

#define reqSensorThresholds_SERIALIZE OM_NO_OP

#define reqSensorThresholds_UNSERIALIZE OM_NO_OP

#define reqSensorThresholds_CONSTRUCTOR reqSensorThresholds()

#define reqGeographicalVariables_SERIALIZE OM_NO_OP

#define reqGeographicalVariables_UNSERIALIZE OM_NO_OP

#define reqGeographicalVariables_CONSTRUCTOR reqGeographicalVariables()

#define failedToCollectSensorData_SERIALIZE OM_NO_OP

#define failedToCollectSensorData_UNSERIALIZE OM_NO_OP

#define failedToCollectSensorData_CONSTRUCTOR failedToCollectSensorData()

#define failedToCollectSensorConfiguration_SERIALIZE OM_NO_OP

#define failedToCollectSensorConfiguration_UNSERIALIZE OM_NO_OP

#define failedToCollectSensorConfiguration_CONSTRUCTOR failedToCollectSensorConfiguration()

#define failedToCollectGeoData_SERIALIZE OM_NO_OP

#define failedToCollectGeoData_UNSERIALIZE OM_NO_OP

#define failedToCollectGeoData_CONSTRUCTOR failedToCollectGeoData()

#define evCollectData_SERIALIZE OM_NO_OP

#define evCollectData_UNSERIALIZE OM_NO_OP

#define evCollectData_CONSTRUCTOR evCollectData()

#define reqDataFromSensors_SERIALIZE OM_NO_OP

#define reqDataFromSensors_UNSERIALIZE OM_NO_OP

#define reqDataFromSensors_CONSTRUCTOR reqDataFromSensors()

#define evReturnData_SERIALIZE OM_NO_OP

#define evReturnData_UNSERIALIZE OM_NO_OP

#define evReturnData_CONSTRUCTOR evReturnData()

#define evSensorsReadyToCollectData_SERIALIZE OM_NO_OP

#define evSensorsReadyToCollectData_UNSERIALIZE OM_NO_OP

#define evSensorsReadyToCollectData_CONSTRUCTOR evSensorsReadyToCollectData()

#define evCheckDataAvailability_SERIALIZE OM_NO_OP

#define evCheckDataAvailability_UNSERIALIZE OM_NO_OP

#define evCheckDataAvailability_CONSTRUCTOR evCheckDataAvailability()

#define evProcessData_SERIALIZE OM_NO_OP

#define evProcessData_UNSERIALIZE OM_NO_OP

#define evProcessData_CONSTRUCTOR evProcessData()
//#]

//## package SMSWTD_SYSTEM::ANALYSIS


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqSensorsData()
reqSensorsData::reqSensorsData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSensorsData)
    setId(reqSensorsData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqSensorsData_ANALYSIS_SMSWTD_SYSTEM_id(26601);
//#]

IMPLEMENT_META_EVENT_P(reqSensorsData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, reqSensorsData())

//## event reqSensorThresholds()
reqSensorThresholds::reqSensorThresholds(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSensorThresholds)
    setId(reqSensorThresholds_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqSensorThresholds_ANALYSIS_SMSWTD_SYSTEM_id(26602);
//#]

IMPLEMENT_META_EVENT_P(reqSensorThresholds, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, reqSensorThresholds())

//## event reqGeographicalVariables()
reqGeographicalVariables::reqGeographicalVariables(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqGeographicalVariables)
    setId(reqGeographicalVariables_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqGeographicalVariables_ANALYSIS_SMSWTD_SYSTEM_id(26603);
//#]

IMPLEMENT_META_EVENT_P(reqGeographicalVariables, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, reqGeographicalVariables())

//## event failedToCollectSensorData()
failedToCollectSensorData::failedToCollectSensorData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(failedToCollectSensorData)
    setId(failedToCollectSensorData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectSensorData_ANALYSIS_SMSWTD_SYSTEM_id(26604);
//#]

IMPLEMENT_META_EVENT_P(failedToCollectSensorData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, failedToCollectSensorData())

//## event failedToCollectSensorConfiguration()
failedToCollectSensorConfiguration::failedToCollectSensorConfiguration(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(failedToCollectSensorConfiguration)
    setId(failedToCollectSensorConfiguration_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectSensorConfiguration_ANALYSIS_SMSWTD_SYSTEM_id(26605);
//#]

IMPLEMENT_META_EVENT_P(failedToCollectSensorConfiguration, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, failedToCollectSensorConfiguration())

//## event failedToCollectGeoData()
failedToCollectGeoData::failedToCollectGeoData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(failedToCollectGeoData)
    setId(failedToCollectGeoData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectGeoData_ANALYSIS_SMSWTD_SYSTEM_id(26606);
//#]

IMPLEMENT_META_EVENT_P(failedToCollectGeoData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, failedToCollectGeoData())

//## event evCollectData()
evCollectData::evCollectData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCollectData)
    setId(evCollectData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCollectData_ANALYSIS_SMSWTD_SYSTEM_id(26607);
//#]

IMPLEMENT_META_EVENT_P(evCollectData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, evCollectData())

//## event reqDataFromSensors()
reqDataFromSensors::reqDataFromSensors(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDataFromSensors)
    setId(reqDataFromSensors_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqDataFromSensors_ANALYSIS_SMSWTD_SYSTEM_id(26608);
//#]

IMPLEMENT_META_EVENT_P(reqDataFromSensors, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, reqDataFromSensors())

//## event evReturnData()
evReturnData::evReturnData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evReturnData)
    setId(evReturnData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evReturnData_ANALYSIS_SMSWTD_SYSTEM_id(26609);
//#]

IMPLEMENT_META_EVENT_P(evReturnData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, evReturnData())

//## event evSensorsReadyToCollectData()
evSensorsReadyToCollectData::evSensorsReadyToCollectData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSensorsReadyToCollectData)
    setId(evSensorsReadyToCollectData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evSensorsReadyToCollectData_ANALYSIS_SMSWTD_SYSTEM_id(26610);
//#]

IMPLEMENT_META_EVENT_P(evSensorsReadyToCollectData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, evSensorsReadyToCollectData())

//## event evCheckDataAvailability()
evCheckDataAvailability::evCheckDataAvailability(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckDataAvailability)
    setId(evCheckDataAvailability_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCheckDataAvailability_ANALYSIS_SMSWTD_SYSTEM_id(26611);
//#]

IMPLEMENT_META_EVENT_P(evCheckDataAvailability, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, evCheckDataAvailability())

//## event evProcessData()
evProcessData::evProcessData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evProcessData)
    setId(evProcessData_ANALYSIS_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evProcessData_ANALYSIS_SMSWTD_SYSTEM_id(26612);
//#]

IMPLEMENT_META_EVENT_P(evProcessData, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, evProcessData())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ANALYSIS.cpp
*********************************************************************/
