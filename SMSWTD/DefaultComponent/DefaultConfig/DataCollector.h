/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/

#ifndef DataCollector_H
#define DataCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## link itsSensorDataProcessor
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataCollector
class DataCollector {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataCollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataCollector(void);
    
    //## auto_generated
    ~DataCollector(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SensorDataProcessor* getItsSensorDataProcessor(void) const;
    
    //## auto_generated
    void setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SensorDataProcessor* itsSensorDataProcessor;		//## link itsSensorDataProcessor
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataCollector : virtual public AOMInstance {
    DECLARE_META(DataCollector, OMAnimatedDataCollector)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/
