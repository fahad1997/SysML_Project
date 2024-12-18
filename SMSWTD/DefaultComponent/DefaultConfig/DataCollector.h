/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/

#ifndef DataCollector_H
#define DataCollector_H

//## auto_generated
#include <oxf.h>
//## link itsSensorDataProcessor
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataCollector
class DataCollector {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/
