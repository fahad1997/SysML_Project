/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsAirborneSensor
class AirborneSensor;

//## link itsAlertedGroup
class AlertedGroup;

//## link itsCloud
class Cloud;

//## link itsSateliteImage
class SateliteImage;

//## link itsStormSensor
class StormSensor;

//## link itsUser
class User;

//## link itsWaterFlowDetector
class WaterFlowDetector;

//## link itsWaterPressureSensor
class WaterPressureSensor;

//## link itsWeatherSensor
class WeatherSensor;

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD
class SMSWTD {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AlertedGroup* getItsAlertedGroup(void) const;
    
    //## auto_generated
    void setItsAlertedGroup(AlertedGroup* const p_AlertedGroup);
    
    //## auto_generated
    const Cloud* getItsCloud(void) const;
    
    //## auto_generated
    void setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    const SateliteImage* getItsSateliteImage(void) const;
    
    //## auto_generated
    void setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    const StormSensor* getItsStormSensor(void) const;
    
    //## auto_generated
    void setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);
    
    //## auto_generated
    const WaterFlowDetector* getItsWaterFlowDetector(void) const;
    
    //## auto_generated
    void setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);
    
    //## auto_generated
    const WaterPressureSensor* getItsWaterPressureSensor(void) const;
    
    //## auto_generated
    void setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    const WeatherSensor* getItsWeatherSensor(void) const;
    
    //## auto_generated
    void setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Cloud* itsCloud;		//## link itsCloud
    
    SateliteImage* itsSateliteImage;		//## link itsSateliteImage
    
    StormSensor* itsStormSensor;		//## link itsStormSensor
    
    WaterFlowDetector* itsWaterFlowDetector;		//## link itsWaterFlowDetector
    
    WaterPressureSensor* itsWaterPressureSensor;		//## link itsWaterPressureSensor
    
    WeatherSensor* itsWeatherSensor;		//## link itsWeatherSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlertedGroup(AlertedGroup* const p_AlertedGroup);
    
    //## auto_generated
    void _setItsAlertedGroup(AlertedGroup* const p_AlertedGroup);
    
    //## auto_generated
    void _clearItsAlertedGroup(void);
    
    //## auto_generated
    void __setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _clearItsCloud(void);
    
    //## auto_generated
    void __setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _setItsSateliteImage(SateliteImage* const p_SateliteImage);
    
    //## auto_generated
    void _clearItsSateliteImage(void);
    
    //## auto_generated
    void __setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    void _setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    void _clearItsStormSensor(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
    
    //## auto_generated
    void __setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);
    
    //## auto_generated
    void _setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);
    
    //## auto_generated
    void _clearItsWaterFlowDetector(void);
    
    //## auto_generated
    void __setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    void _setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    void _clearItsWaterPressureSensor(void);
    
    //## auto_generated
    void __setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);
    
    //## auto_generated
    void _setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);
    
    //## auto_generated
    void _clearItsWeatherSensor(void);
    
    //## auto_generated
    const AirborneSensor* getItsAirborneSensor(void) const;
    
    //## auto_generated
    void setItsAirborneSensor(AirborneSensor* const p_AirborneSensor);

private :

    AirborneSensor* itsAirborneSensor;		//## link itsAirborneSensor
    
    AlertedGroup* itsAlertedGroup;		//## link itsAlertedGroup
    
    User* itsUser;		//## link itsUser

public :

    //## auto_generated
    void __setItsAirborneSensor(AirborneSensor* const p_AirborneSensor);
    
    //## auto_generated
    void _setItsAirborneSensor(AirborneSensor* const p_AirborneSensor);
    
    //## auto_generated
    void _clearItsAirborneSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
