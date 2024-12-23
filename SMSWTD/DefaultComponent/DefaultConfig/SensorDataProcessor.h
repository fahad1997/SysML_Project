/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/

#ifndef SensorDataProcessor_H
#define SensorDataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "omcollec.h"
//## auto_generated
#include "DESIGN.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SensorDataProcessor
class SensorDataProcessor : public OMReactive {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit SensorDataProcessor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SensorDataProcessor(void);
    
    ////    Operations    ////
    
    //## operation dataFetched()
    virtual void dataFetched(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getCheckDataAvailability(void) const;
    
    //## auto_generated
    void setCheckDataAvailability(const bool p_checkDataAvailability);
    
    //## auto_generated
    OMIterator<bool> getCollectedDataStatus(void) const;
    
    //## auto_generated
    void setCollectedDataStatus(const bool p_collectedDataStatus);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    bool checkDataAvailability;		//## attribute checkDataAvailability
    
    OMCollection<bool> collectedDataStatus;		//## attribute collectedDataStatus
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // StartProcess:
    //## statechart_method
    inline RhpBoolean StartProcess_IN(void) const;
    
    // ReturnData:
    //## statechart_method
    inline RhpBoolean ReturnData_IN(void) const;
    
    // ProcessData:
    //## statechart_method
    inline RhpBoolean ProcessData_IN(void) const;
    
    // FetchedData:
    //## statechart_method
    inline RhpBoolean FetchedData_IN(void) const;
    
    // FailedDataCollection:
    //## statechart_method
    inline RhpBoolean FailedDataCollection_IN(void) const;
    
    // CollectData:
    //## statechart_method
    inline RhpBoolean CollectData_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum SensorDataProcessor_Enum {
        OMNonState = 0,
        StartProcess = 1,
        ReturnData = 2,
        ProcessData = 3,
        FetchedData = 4,
        FailedDataCollection = 5,
        CollectData = 6
    };
//#]

private :

//#[ ignore
    SensorDataProcessor_Enum rootState_subState;
    
    SensorDataProcessor_Enum rootState_active;
//#]
};

inline RhpBoolean SensorDataProcessor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SensorDataProcessor::StartProcess_IN(void) const {
    return rootState_subState == StartProcess;
}

inline RhpBoolean SensorDataProcessor::ReturnData_IN(void) const {
    return rootState_subState == ReturnData;
}

inline RhpBoolean SensorDataProcessor::ProcessData_IN(void) const {
    return rootState_subState == ProcessData;
}

inline RhpBoolean SensorDataProcessor::FetchedData_IN(void) const {
    return rootState_subState == FetchedData;
}

inline RhpBoolean SensorDataProcessor::FailedDataCollection_IN(void) const {
    return rootState_subState == FailedDataCollection;
}

inline RhpBoolean SensorDataProcessor::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.h
*********************************************************************/
