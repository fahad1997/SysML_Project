/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/

#ifndef DESIGN_H
#define DESIGN_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include <aom.h>
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
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevActivateSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evActivateSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevActivateSMSWTD : virtual public AOMEvent {
    DECLARE_META_EVENT(evActivateSMSWTD)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event reqDataFromSensors()
class reqDataFromSensors : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDataFromSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDataFromSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDataFromSensors : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDataFromSensors)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evCheckDataAvailability()
class evCheckDataAvailability : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCheckDataAvailability;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCheckDataAvailability(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCheckDataAvailability : virtual public AOMEvent {
    DECLARE_META_EVENT(evCheckDataAvailability)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evSensorsReadyToCollectData()
class evSensorsReadyToCollectData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSensorsReadyToCollectData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSensorsReadyToCollectData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSensorsReadyToCollectData : virtual public AOMEvent {
    DECLARE_META_EVENT(evSensorsReadyToCollectData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evProcessData()
class evProcessData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevProcessData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evProcessData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevProcessData : virtual public AOMEvent {
    DECLARE_META_EVENT(evProcessData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evProcessData_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evReturnData()
class evReturnData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReturnData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReturnData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReturnData : virtual public AOMEvent {
    DECLARE_META_EVENT(evReturnData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evReturnData_DESIGN_SMSWTD_SYSTEM_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/
