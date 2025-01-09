/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/

#ifndef SensorDataProcessor_H
#define SensorDataProcessor_H

//## auto_generated
#include <oxf.h>
//## link itsDataProcessor
class DataProcessor;

//## auto_generated
#include <aom.h>
//## auto_generated
#include "PKG_SMSWTD_CONTROLLER.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsDataCollector
class DataCollector;

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class SensorDataProcessor
class SensorDataProcessor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SensorDataProcessor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SensorDataProcessor(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Attributes    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    void setItsDataCollector(DataCollector* const p_DataCollector);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    DataCollector* itsDataCollector;		//## link itsDataCollector

public :

    //## auto_generated
    const DataProcessor* getItsDataProcessor(void) const;
    
    //## auto_generated
    void setItsDataProcessor(DataProcessor* const p_DataProcessor);

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
class OMAnimatedSensorDataProcessor : virtual public AOMInstance {
    DECLARE_META(SensorDataProcessor, OMAnimatedSensorDataProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/
