/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/

//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "CloudClient.h"
//## auto_generated
#include "Dashboard.h"
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
#include "NotificationService.h"
//## auto_generated
#include "PredictionModel.h"
//## auto_generated
#include "PredictionModelPublisher.h"
//## auto_generated
#include "SensorConfiguration.h"
//## auto_generated
#include "SensorDataProcessor.h"
//## auto_generated
#include "SMSWTD_BLK.h"
//## package SMSWTD_SYSTEM::DESIGN



//## event evActivateSMSWTD()
evActivateSMSWTD::evActivateSMSWTD(void) : OMEvent() {
    setId(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id(23402);
//#]

//## event reqDataFromSensors()
reqDataFromSensors::reqDataFromSensors(void) : OMEvent() {
    setId(reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id(23401);
//#]

//## event evCheckDataAvailability()
evCheckDataAvailability::evCheckDataAvailability(void) : OMEvent() {
    setId(evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id(23403);
//#]

//## event evSensorsReadyToCollectData()
evSensorsReadyToCollectData::evSensorsReadyToCollectData(void) : OMEvent() {
    setId(evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id(23404);
//#]

//## event evProcessData()
evProcessData::evProcessData(void) : OMEvent() {
    setId(evProcessData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evProcessData_DESIGN_SMSWTD_SYSTEM_id(23405);
//#]

//## event evReturnData()
evReturnData::evReturnData(void) : OMEvent() {
    setId(evReturnData_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evReturnData_DESIGN_SMSWTD_SYSTEM_id(23406);
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/
