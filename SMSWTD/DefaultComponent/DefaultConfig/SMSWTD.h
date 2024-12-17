/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
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

//## package Default

//## class SMSWTD
class SMSWTD {
    ////    Constructors and destructors    ////
    
public :

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
    const WaterPressureSensor* getItsWaterPressureSensor_1(void) const;
    
    //## auto_generated
    void setItsWaterPressureSensor_1(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    const WeatherSensor* getItsWeatherSensor(void) const;
    
    //## auto_generated
    void setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    AlertedGroup* itsAlertedGroup;		//## link itsAlertedGroup
    
    Cloud* itsCloud;		//## link itsCloud
    
    SateliteImage* itsSateliteImage;		//## link itsSateliteImage
    
    StormSensor* itsStormSensor;		//## link itsStormSensor
    
    User* itsUser;		//## link itsUser
    
    WaterFlowDetector* itsWaterFlowDetector;		//## link itsWaterFlowDetector
    
    WaterPressureSensor* itsWaterPressureSensor;		//## link itsWaterPressureSensor
    
    WaterPressureSensor* itsWaterPressureSensor_1;		//## link itsWaterPressureSensor_1
    
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
    void __setItsWaterPressureSensor_1(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    void _setItsWaterPressureSensor_1(WaterPressureSensor* const p_WaterPressureSensor);
    
    //## auto_generated
    void _clearItsWaterPressureSensor_1(void);
    
    //## auto_generated
    void __setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);
    
    //## auto_generated
    void _setItsWeatherSensor(WeatherSensor* const p_WeatherSensor);
    
    //## auto_generated
    void _clearItsWeatherSensor(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
