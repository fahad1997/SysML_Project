/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ANALYSIS
//!	Generated Date	: Sat, 21, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ANALYSIS.h
*********************************************************************/

#ifndef ANALYSIS_H
#define ANALYSIS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class AtmosphericDataProcessor;

//## auto_generated
class CloudStorageInterface;

//## auto_generated
class Dashboard;

//## auto_generated
class DashboardPublisher;

//## auto_generated
class DataCollector;

//## auto_generated
class DataObserver;

//## auto_generated
class DataProcessor;

//## auto_generated
class GeographicalConfiguration;

//## auto_generated
class ImageCollector;

//## auto_generated
class ImageDataObserver;

//## auto_generated
class ImageProcessor;

//## auto_generated
class NotificationChannel;

//## auto_generated
class PredictionModelPublisher;

//## auto_generated
class SateliteImageProcessor;

//## auto_generated
class SensorConfiguration;

//## auto_generated
class SensorDataProcessor;

//## auto_generated
class StormProjectionProcessor;

//## auto_generated
class TectonicMovementProcessor;

//## auto_generated
class WaterDataProcessor;

//## auto_generated
class WaterFlowProcessor;

//## auto_generated
class WaterPressureProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS



//## event reqSensorsData()
class reqSensorsData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSensorsData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSensorsData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSensorsData : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSensorsData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqSensorsData_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event reqSensorThresholds()
class reqSensorThresholds : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSensorThresholds;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSensorThresholds(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSensorThresholds : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSensorThresholds)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqSensorThresholds_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event reqGeographicalVariables()
class reqGeographicalVariables : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqGeographicalVariables;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqGeographicalVariables(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqGeographicalVariables : virtual public AOMEvent {
    DECLARE_META_EVENT(reqGeographicalVariables)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqGeographicalVariables_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event failedToCollectSensorData()
class failedToCollectSensorData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfailedToCollectSensorData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    failedToCollectSensorData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfailedToCollectSensorData : virtual public AOMEvent {
    DECLARE_META_EVENT(failedToCollectSensorData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID failedToCollectSensorData_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event failedToCollectSensorConfiguration()
class failedToCollectSensorConfiguration : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfailedToCollectSensorConfiguration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    failedToCollectSensorConfiguration(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfailedToCollectSensorConfiguration : virtual public AOMEvent {
    DECLARE_META_EVENT(failedToCollectSensorConfiguration)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID failedToCollectSensorConfiguration_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event failedToCollectGeoData()
class failedToCollectGeoData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfailedToCollectGeoData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    failedToCollectGeoData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfailedToCollectGeoData : virtual public AOMEvent {
    DECLARE_META_EVENT(failedToCollectGeoData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID failedToCollectGeoData_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

//## event evCollectData()
class evCollectData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCollectData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCollectData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCollectData : virtual public AOMEvent {
    DECLARE_META_EVENT(evCollectData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evCollectData_ANALYSIS_SMSWTD_SYSTEM_id;
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
extern const IOxfEvent::ID reqDataFromSensors_ANALYSIS_SMSWTD_SYSTEM_id;
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
extern const IOxfEvent::ID evReturnData_ANALYSIS_SMSWTD_SYSTEM_id;
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
extern const IOxfEvent::ID evSensorsReadyToCollectData_ANALYSIS_SMSWTD_SYSTEM_id;
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
extern const IOxfEvent::ID evCheckDataAvailability_ANALYSIS_SMSWTD_SYSTEM_id;
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
extern const IOxfEvent::ID evProcessData_ANALYSIS_SMSWTD_SYSTEM_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ANALYSIS.h
*********************************************************************/
