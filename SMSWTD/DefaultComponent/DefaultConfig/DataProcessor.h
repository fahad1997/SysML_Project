/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/

#ifndef DataProcessor_H
#define DataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class DataProcessor
class DataProcessor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    virtual ~DataProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

protected :

    //## auto_generated
    void initStatechart(void);

public :

    //## auto_generated
    explicit DataProcessor(IOxfActive* const theActiveContext = NULL);
    
    //## operation dataFetched()
    virtual void dataFetched(void);
    
    //## auto_generated
    const bool getDataAvailability(void) const;
    
    //## auto_generated
    void setDataAvailability(const bool p_dataAvailability);

private :

    bool dataAvailability;		//## attribute dataAvailability

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
    
    // FetchData:
    //## statechart_method
    inline RhpBoolean FetchData_IN(void) const;
    
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
    enum DataProcessor_Enum {
        OMNonState = 0,
        StartProcess = 1,
        ReturnData = 2,
        ProcessData = 3,
        FetchData = 4,
        FailedDataCollection = 5,
        CollectData = 6
    };
    
    Rhp_int32_t rootState_subState;
    
    Rhp_int32_t rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DataProcessor, OMAnimatedDataProcessor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StartProcess_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ReturnData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ProcessData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FetchData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FailedDataCollection_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CollectData_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean DataProcessor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DataProcessor::StartProcess_IN(void) const {
    return rootState_subState == StartProcess;
}

inline RhpBoolean DataProcessor::ReturnData_IN(void) const {
    return rootState_subState == ReturnData;
}

inline RhpBoolean DataProcessor::ProcessData_IN(void) const {
    return rootState_subState == ProcessData;
}

inline RhpBoolean DataProcessor::FetchData_IN(void) const {
    return rootState_subState == FetchData;
}

inline RhpBoolean DataProcessor::FailedDataCollection_IN(void) const {
    return rootState_subState == FailedDataCollection;
}

inline RhpBoolean DataProcessor::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/
