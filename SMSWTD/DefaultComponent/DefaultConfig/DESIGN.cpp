/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

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
//#]

//## package SMSWTD_SYSTEM::DESIGN


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/
