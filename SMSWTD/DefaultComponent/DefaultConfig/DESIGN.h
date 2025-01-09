/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Thu, 9, Jan 2025  
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
class AirborneSensor;

//## auto_generated
class Cloud;

//## classInstance itsDataCollector
class DataCollector;

//## classInstance itsDataProcessor
class DataProcessor;

//## auto_generated
class SMSWTD;

//## classInstance itsSMSWTD_BLK
class SMSWTD_CONTROLLER;

//## auto_generated
class SateliteImage;

//## classInstance itsStormSensor
class StormSensor;

//## classInstance itsWaterFlowDetector
class WaterFlowDetector;

//## auto_generated
class WaterPressureSensor;

//## auto_generated
class WeatherSensor;

//## package SMSWTD_SYSTEM::DESIGN


//## classInstance itsDataCollector
extern DataCollector itsDataCollector;

//## classInstance itsDataProcessor
extern DataProcessor itsDataProcessor;

//## classInstance itsSMSWTD_BLK
extern SMSWTD_CONTROLLER itsSMSWTD_BLK;

//## classInstance itsStormSensor
extern StormSensor itsStormSensor;

//## classInstance itsWaterFlowDetector
extern WaterFlowDetector itsWaterFlowDetector;

//## auto_generated
void DESIGN_initRelations(void);

//## auto_generated
bool DESIGN_startBehavior(void);

//#[ ignore
class DESIGN_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DESIGN_OMInitializer(void);
    
    //## auto_generated
    ~DESIGN_OMInitializer(void);
};
//#]

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

//## event evStartDataProcessing()
class evStartDataProcessing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartDataProcessing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartDataProcessing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartDataProcessing : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartDataProcessing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartDataProcessing_DESIGN_SMSWTD_SYSTEM_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/
