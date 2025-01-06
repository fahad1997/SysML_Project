/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/

#ifndef DESIGN_H
#define DESIGN_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <event.h>
//## auto_generated
class CloudClient;

//## auto_generated
class Dashboard;

//## auto_generated
class DashboardPublisher;

//## auto_generated
class DataCollector;

//## auto_generated
class DataProcessor;

//## auto_generated
class DataPublisher;

//## auto_generated
class GeographicalConfiguration;

//## auto_generated
class ImageCollector;

//## auto_generated
class ImageProcessor;

//## auto_generated
class NotificationService;

//## auto_generated
class PredictionModel;

//## auto_generated
class PredictionModelPublisher;

//## auto_generated
class SMSWTD_BLK;

//## auto_generated
class SensorConfiguration;

//## auto_generated
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::DESIGN



//## event evActivateSMSWTD()
class evActivateSMSWTD : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evActivateSMSWTD(void);
};

//#[ ignore
extern const IOxfEvent::ID evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event reqDataFromSensors()
class reqDataFromSensors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqDataFromSensors(void);
};

//#[ ignore
extern const IOxfEvent::ID reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evCheckDataAvailability()
class evCheckDataAvailability : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCheckDataAvailability(void);
};

//#[ ignore
extern const IOxfEvent::ID evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evSensorsReadyToCollectData()
class evSensorsReadyToCollectData : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSensorsReadyToCollectData(void);
};

//#[ ignore
extern const IOxfEvent::ID evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evProcessData()
class evProcessData : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evProcessData(void);
};

//#[ ignore
extern const IOxfEvent::ID evProcessData_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evReturnData()
class evReturnData : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evReturnData(void);
};

//#[ ignore
extern const IOxfEvent::ID evReturnData_DESIGN_SMSWTD_SYSTEM_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/
