/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/

//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "CloudClient.h"
//## auto_generated
#include "DashboardPublisher.h"
//## auto_generated
#include "DataCollector.h"
//## auto_generated
#include "DataProcessor.h"
//## auto_generated
#include "DataPublisher.h"
//## auto_generated
#include "GeographicalConfiguration.h"
//## auto_generated
#include "ImageCollector.h"
//## auto_generated
#include "ImageProcessor.h"
//## auto_generated
#include "PredictionModelPublisher.h"
//## auto_generated
#include "SensorConfiguration.h"
//## auto_generated
#include "SensorDataProcessor.h"
//## package SMSWTD_SYSTEM::DESIGN



//## event evCheckDataAvailability()
evCheckDataAvailability::evCheckDataAvailability(void) : OMEvent() {
    setId(evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id(23401);
//#]

//## event evCollectData()
evCollectData::evCollectData(void) : OMEvent() {
    setId(evCollectData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCollectData_DESIGN_SMSWTD_SYSTEM_id(23402);
//#]

//## event evProcessData()
evProcessData::evProcessData(void) : OMEvent() {
    setId(evProcessData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evProcessData_DESIGN_SMSWTD_SYSTEM_id(23403);
//#]

//## event evReturnData()
evReturnData::evReturnData(void) : OMEvent() {
    setId(evReturnData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evReturnData_DESIGN_SMSWTD_SYSTEM_id(23404);
//#]

//## event evSensorsReadyToCollectData()
evSensorsReadyToCollectData::evSensorsReadyToCollectData(void) : OMEvent() {
    setId(evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id(23405);
//#]

//## event failedToCollectGeoData()
failedToCollectGeoData::failedToCollectGeoData(void) : OMEvent() {
    setId(failedToCollectGeoData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectGeoData_DESIGN_SMSWTD_SYSTEM_id(23406);
//#]

//## event failedToCollectSensorConfiguration()
failedToCollectSensorConfiguration::failedToCollectSensorConfiguration(void) : OMEvent() {
    setId(failedToCollectSensorConfiguration_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectSensorConfiguration_DESIGN_SMSWTD_SYSTEM_id(23407);
//#]

//## event failedToCollectSensorData()
failedToCollectSensorData::failedToCollectSensorData(void) : OMEvent() {
    setId(failedToCollectSensorData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID failedToCollectSensorData_DESIGN_SMSWTD_SYSTEM_id(23408);
//#]

//## event reqDataFromSensors()
reqDataFromSensors::reqDataFromSensors(void) : OMEvent() {
    setId(reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id(23409);
//#]

//## event reqGeographicalVariables()
reqGeographicalVariables::reqGeographicalVariables(void) : OMEvent() {
    setId(reqGeographicalVariables_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqGeographicalVariables_DESIGN_SMSWTD_SYSTEM_id(23410);
//#]

//## event reqSensorsData()
reqSensorsData::reqSensorsData(void) : OMEvent() {
    setId(reqSensorsData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqSensorsData_DESIGN_SMSWTD_SYSTEM_id(23411);
//#]

//## event reqSensorThresholds()
reqSensorThresholds::reqSensorThresholds(void) : OMEvent() {
    setId(reqSensorThresholds_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqSensorThresholds_DESIGN_SMSWTD_SYSTEM_id(23412);
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/
