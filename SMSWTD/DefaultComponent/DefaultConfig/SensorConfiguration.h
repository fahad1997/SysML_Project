/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorConfiguration
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.h
*********************************************************************/

#ifndef SensorConfiguration_H
#define SensorConfiguration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class SensorConfiguration
class SensorConfiguration {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorConfiguration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorConfiguration(void);
    
    //## auto_generated
    ~SensorConfiguration(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorConfiguration : virtual public AOMInstance {
    DECLARE_META(SensorConfiguration, OMAnimatedSensorConfiguration)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.h
*********************************************************************/
