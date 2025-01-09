/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GeographicalConfiguration
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.h
*********************************************************************/

#ifndef GeographicalConfiguration_H
#define GeographicalConfiguration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "PKG_SMSWTD_CONTROLLER.h"
//## link itsDataProcessor
class DataProcessor;

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

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
    
    //## auto_generated
    const DataProcessor* getItsDataProcessor(void) const;
    
    //## auto_generated
    void setItsDataProcessor(DataProcessor* const p_DataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    DataProcessor* itsDataProcessor;		//## link itsDataProcessor

public :

    //## auto_generated
    void __setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _clearItsDataProcessor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGeographicalConfiguration : virtual public AOMInstance {
    DECLARE_META(GeographicalConfiguration, OMAnimatedGeographicalConfiguration)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.h
*********************************************************************/
