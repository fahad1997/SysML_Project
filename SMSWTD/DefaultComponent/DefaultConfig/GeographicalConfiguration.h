/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GeographicalConfiguration
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.h
*********************************************************************/

#ifndef GeographicalConfiguration_H
#define GeographicalConfiguration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class GeographicalConfiguration
class GeographicalConfiguration {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGeographicalConfiguration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GeographicalConfiguration(void);
    
    //## auto_generated
    ~GeographicalConfiguration(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGeographicalConfiguration : virtual public AOMInstance {
    DECLARE_META(GeographicalConfiguration, OMAnimatedGeographicalConfiguration)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.h
*********************************************************************/
