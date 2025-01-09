/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsCloud
#include "Cloud.h"
//## link itsSateliteImage
#include "SateliteImage.h"
//## link itsStormSensor
#include "StormSensor.h"
//## link itsWaterFlowDetector
#include "WaterFlowDetector.h"
//## link itsWaterPressureSensor
#include "WaterPressureSensor.h"
//## link itsWeatherSensor
#include "WeatherSensor.h"
//## link itsAirborneSensor
#include "AirborneSensor.h"
//## link itsAlertedGroup
#include "AlertedGroup.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD
SMSWTD::SMSWTD(void) : itsCloud(NULL), itsSateliteImage(NULL), itsStormSensor(NULL), itsWaterFlowDetector(NULL), itsWaterPressureSensor(NULL), itsWeatherSensor(NULL), itsAirborneSensor(NULL), itsAlertedGroup(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSWTD_SYSTEM_DESIGN_SMSWTD_SMSWTD_SERIALIZE);
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

const AlertedGroup* SMSWTD::getItsAlertedGroup(void) const {
    return itsAlertedGroup;
}

void SMSWTD::setItsAlertedGroup(AlertedGroup* const p_AlertedGroup) {
    if(p_AlertedGroup != NULL)
        {
            p_AlertedGroup->_setItsSMSWTD(this);
        }
    _setItsAlertedGroup(p_AlertedGroup);
}

const Cloud* SMSWTD::getItsCloud(void) const {
    return itsCloud;
}

void SMSWTD::setItsCloud(Cloud* const p_Cloud) {
    if(p_Cloud != NULL)
        {
            p_Cloud->_setItsSMSWTD(this);
        }
    _setItsCloud(p_Cloud);
}

const SateliteImage* SMSWTD::getItsSateliteImage(void) const {
    return itsSateliteImage;
}

void SMSWTD::setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    if(p_SateliteImage != NULL)
        {
            p_SateliteImage->_setItsSMSWTD(this);
        }
    _setItsSateliteImage(p_SateliteImage);
}

const StormSensor* SMSWTD::getItsStormSensor(void) const {
    return itsStormSensor;
}

void SMSWTD::setItsStormSensor(StormSensor* const p_StormSensor) {
    if(p_StormSensor != NULL)
        {
            p_StormSensor->_setItsSMSWTD(this);
        }
    _setItsStormSensor(p_StormSensor);
}

const User* SMSWTD::getItsUser(void) const {
    return itsUser;
}

void SMSWTD::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSMSWTD(this);
        }
    _setItsUser(p_User);
}

const WaterFlowDetector* SMSWTD::getItsWaterFlowDetector(void) const {
    return itsWaterFlowDetector;
}

void SMSWTD::setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    if(p_WaterFlowDetector != NULL)
        {
            p_WaterFlowDetector->_setItsSMSWTD(this);
        }
    _setItsWaterFlowDetector(p_WaterFlowDetector);
}

const WaterPressureSensor* SMSWTD::getItsWaterPressureSensor(void) const {
    return itsWaterPressureSensor;
}

void SMSWTD::setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor) {
    if(p_WaterPressureSensor != NULL)
        {
            p_WaterPressureSensor->_setItsSMSWTD(this);
        }
    _setItsWaterPressureSensor(p_WaterPressureSensor);
}

const WeatherSensor* SMSWTD::getItsWeatherSensor(void) const {
    return itsWeatherSensor;
}

void SMSWTD::setItsWeatherSensor(WeatherSensor* const p_WeatherSensor) {
    if(p_WeatherSensor != NULL)
        {
            p_WeatherSensor->_setItsSMSWTD(this);
        }
    _setItsWeatherSensor(p_WeatherSensor);
}

void SMSWTD::cleanUpRelations(void) {
    if(itsAirborneSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAirborneSensor");
            const SMSWTD* p_SMSWTD = itsAirborneSensor->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAirborneSensor->__setItsSMSWTD(NULL);
                }
            itsAirborneSensor = NULL;
        }
    if(itsAlertedGroup != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlertedGroup");
            const SMSWTD* p_SMSWTD = itsAlertedGroup->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAlertedGroup->__setItsSMSWTD(NULL);
                }
            itsAlertedGroup = NULL;
        }
    if(itsCloud != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloud");
            const SMSWTD* p_SMSWTD = itsCloud->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCloud->__setItsSMSWTD(NULL);
                }
            itsCloud = NULL;
        }
    if(itsSateliteImage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSateliteImage");
            const SMSWTD* p_SMSWTD = itsSateliteImage->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSateliteImage->__setItsSMSWTD(NULL);
                }
            itsSateliteImage = NULL;
        }
    if(itsStormSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStormSensor");
            const SMSWTD* p_SMSWTD = itsStormSensor->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsStormSensor->__setItsSMSWTD(NULL);
                }
            itsStormSensor = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const SMSWTD* p_SMSWTD = itsUser->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsUser->__setItsSMSWTD(NULL);
                }
            itsUser = NULL;
        }
    if(itsWaterFlowDetector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
            const SMSWTD* p_SMSWTD = itsWaterFlowDetector->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsWaterFlowDetector->__setItsSMSWTD(NULL);
                }
            itsWaterFlowDetector = NULL;
        }
    if(itsWaterPressureSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWaterPressureSensor");
            const SMSWTD* p_SMSWTD = itsWaterPressureSensor->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsWaterPressureSensor->__setItsSMSWTD(NULL);
                }
            itsWaterPressureSensor = NULL;
        }
    if(itsWeatherSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWeatherSensor");
            const SMSWTD* p_SMSWTD = itsWeatherSensor->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsWeatherSensor->__setItsSMSWTD(NULL);
                }
            itsWeatherSensor = NULL;
        }
}

void SMSWTD::__setItsAlertedGroup(AlertedGroup* const p_AlertedGroup) {
    itsAlertedGroup = p_AlertedGroup;
    if(p_AlertedGroup != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlertedGroup", p_AlertedGroup, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlertedGroup");
        }
}

void SMSWTD::_setItsAlertedGroup(AlertedGroup* const p_AlertedGroup) {
    if(itsAlertedGroup != NULL)
        {
            itsAlertedGroup->__setItsSMSWTD(NULL);
        }
    __setItsAlertedGroup(p_AlertedGroup);
}

void SMSWTD::_clearItsAlertedGroup(void) {
    NOTIFY_RELATION_CLEARED("itsAlertedGroup");
    itsAlertedGroup = NULL;
}

void SMSWTD::__setItsCloud(Cloud* const p_Cloud) {
    itsCloud = p_Cloud;
    if(p_Cloud != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCloud", p_Cloud, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCloud");
        }
}

void SMSWTD::_setItsCloud(Cloud* const p_Cloud) {
    if(itsCloud != NULL)
        {
            itsCloud->__setItsSMSWTD(NULL);
        }
    __setItsCloud(p_Cloud);
}

void SMSWTD::_clearItsCloud(void) {
    NOTIFY_RELATION_CLEARED("itsCloud");
    itsCloud = NULL;
}

void SMSWTD::__setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    itsSateliteImage = p_SateliteImage;
    if(p_SateliteImage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSateliteImage", p_SateliteImage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSateliteImage");
        }
}

void SMSWTD::_setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    if(itsSateliteImage != NULL)
        {
            itsSateliteImage->__setItsSMSWTD(NULL);
        }
    __setItsSateliteImage(p_SateliteImage);
}

void SMSWTD::_clearItsSateliteImage(void) {
    NOTIFY_RELATION_CLEARED("itsSateliteImage");
    itsSateliteImage = NULL;
}

void SMSWTD::__setItsStormSensor(StormSensor* const p_StormSensor) {
    itsStormSensor = p_StormSensor;
    if(p_StormSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStormSensor", p_StormSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStormSensor");
        }
}

void SMSWTD::_setItsStormSensor(StormSensor* const p_StormSensor) {
    if(itsStormSensor != NULL)
        {
            itsStormSensor->__setItsSMSWTD(NULL);
        }
    __setItsStormSensor(p_StormSensor);
}

void SMSWTD::_clearItsStormSensor(void) {
    NOTIFY_RELATION_CLEARED("itsStormSensor");
    itsStormSensor = NULL;
}

void SMSWTD::__setItsUser(User* const p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void SMSWTD::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsSMSWTD(NULL);
        }
    __setItsUser(p_User);
}

void SMSWTD::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

void SMSWTD::__setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    itsWaterFlowDetector = p_WaterFlowDetector;
    if(p_WaterFlowDetector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWaterFlowDetector", p_WaterFlowDetector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
        }
}

void SMSWTD::_setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector) {
    if(itsWaterFlowDetector != NULL)
        {
            itsWaterFlowDetector->__setItsSMSWTD(NULL);
        }
    __setItsWaterFlowDetector(p_WaterFlowDetector);
}

void SMSWTD::_clearItsWaterFlowDetector(void) {
    NOTIFY_RELATION_CLEARED("itsWaterFlowDetector");
    itsWaterFlowDetector = NULL;
}

void SMSWTD::__setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor) {
    itsWaterPressureSensor = p_WaterPressureSensor;
    if(p_WaterPressureSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWaterPressureSensor", p_WaterPressureSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWaterPressureSensor");
        }
}

void SMSWTD::_setItsWaterPressureSensor(WaterPressureSensor* const p_WaterPressureSensor) {
    if(itsWaterPressureSensor != NULL)
        {
            itsWaterPressureSensor->__setItsSMSWTD(NULL);
        }
    __setItsWaterPressureSensor(p_WaterPressureSensor);
}

void SMSWTD::_clearItsWaterPressureSensor(void) {
    NOTIFY_RELATION_CLEARED("itsWaterPressureSensor");
    itsWaterPressureSensor = NULL;
}

void SMSWTD::__setItsWeatherSensor(WeatherSensor* const p_WeatherSensor) {
    itsWeatherSensor = p_WeatherSensor;
    if(p_WeatherSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWeatherSensor", p_WeatherSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWeatherSensor");
        }
}

void SMSWTD::_setItsWeatherSensor(WeatherSensor* const p_WeatherSensor) {
    if(itsWeatherSensor != NULL)
        {
            itsWeatherSensor->__setItsSMSWTD(NULL);
        }
    __setItsWeatherSensor(p_WeatherSensor);
}

void SMSWTD::_clearItsWeatherSensor(void) {
    NOTIFY_RELATION_CLEARED("itsWeatherSensor");
    itsWeatherSensor = NULL;
}

const AirborneSensor* SMSWTD::getItsAirborneSensor(void) const {
    return itsAirborneSensor;
}

void SMSWTD::setItsAirborneSensor(AirborneSensor* const p_AirborneSensor) {
    if(p_AirborneSensor != NULL)
        {
            p_AirborneSensor->_setItsSMSWTD(this);
        }
    _setItsAirborneSensor(p_AirborneSensor);
}

void SMSWTD::__setItsAirborneSensor(AirborneSensor* const p_AirborneSensor) {
    itsAirborneSensor = p_AirborneSensor;
    if(p_AirborneSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAirborneSensor", p_AirborneSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAirborneSensor");
        }
}

void SMSWTD::_setItsAirborneSensor(AirborneSensor* const p_AirborneSensor) {
    if(itsAirborneSensor != NULL)
        {
            itsAirborneSensor->__setItsSMSWTD(NULL);
        }
    __setItsAirborneSensor(p_AirborneSensor);
}

void SMSWTD::_clearItsAirborneSensor(void) {
    NOTIFY_RELATION_CLEARED("itsAirborneSensor");
    itsAirborneSensor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWeatherSensor", false, true);
    if(myReal->itsWeatherSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsWeatherSensor);
        }
    aomsRelations->addRelation("itsStormSensor", false, true);
    if(myReal->itsStormSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsStormSensor);
        }
    aomsRelations->addRelation("itsWaterPressureSensor", false, true);
    if(myReal->itsWaterPressureSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsWaterPressureSensor);
        }
    aomsRelations->addRelation("itsWaterFlowDetector", false, true);
    if(myReal->itsWaterFlowDetector)
        {
            aomsRelations->ADD_ITEM(myReal->itsWaterFlowDetector);
        }
    aomsRelations->addRelation("itsAlertedGroup", false, true);
    if(myReal->itsAlertedGroup)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlertedGroup);
        }
    aomsRelations->addRelation("itsSateliteImage", false, true);
    if(myReal->itsSateliteImage)
        {
            aomsRelations->ADD_ITEM(myReal->itsSateliteImage);
        }
    aomsRelations->addRelation("itsCloud", false, true);
    if(myReal->itsCloud)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloud);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
    aomsRelations->addRelation("itsAirborneSensor", false, true);
    if(myReal->itsAirborneSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsAirborneSensor);
        }
}
//#]

IMPLEMENT_META_P(SMSWTD, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
