/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Sat, 21, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SensorDataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SensorDataProcessor_SensorDataProcessor_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_ANALYSIS_SensorDataProcessor_dataFetched_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(IOxfActive* const theActiveContext) : OMReactive(), checkDataAvailability(false), collectedDataStatus(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SensorDataProcessor, SensorDataProcessor(), 0, SMSWTD_SYSTEM_ANALYSIS_SensorDataProcessor_SensorDataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SensorDataProcessor::~SensorDataProcessor(void) {
    NOTIFY_DESTRUCTOR(~SensorDataProcessor, true);
}

void SensorDataProcessor::dataFetched(void) {
    NOTIFY_OPERATION(dataFetched, dataFetched(), 0, SMSWTD_SYSTEM_ANALYSIS_SensorDataProcessor_dataFetched_SERIALIZE);
    //#[ operation dataFetched()
    std::cout<<"Successfully fetched data from the sensors!\n";
    //#]
}

const bool SensorDataProcessor::getCheckDataAvailability(void) const {
    return checkDataAvailability;
}

void SensorDataProcessor::setCheckDataAvailability(const bool p_checkDataAvailability) {
    checkDataAvailability = p_checkDataAvailability;
}

OMIterator<bool> SensorDataProcessor::getCollectedDataStatus(void) const {
    OMIterator<bool> iter(collectedDataStatus);
    return iter;
}

void SensorDataProcessor::setCollectedDataStatus(const bool p_collectedDataStatus) {
    collectedDataStatus.add(p_collectedDataStatus);
}

bool SensorDataProcessor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SensorDataProcessor::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SensorDataProcessor::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.StartProcess");
        rootState_subState = StartProcess;
        rootState_active = StartProcess;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus SensorDataProcessor::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State StartProcess
        case StartProcess:
        {
            if(IS_EVENT_TYPE_OF(reqDataFromSensors_ANALYSIS_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.StartProcess");
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    std::cout<<"Sensor Data Processor - Collect data from the sensors.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(evCheckDataAvailability_ANALYSIS_SMSWTD_SYSTEM_id) == 1)
                {
                    //## transition 3 
                    if(checkDataAvailability)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.CollectData");
                            //#[ transition 5 
                            std::cout<<"Check whether the data is fetched from the sensors successfully or not.";
                            //#]
                            //#[ transition 3 
                            dataFetched();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.FetchedData");
                            rootState_subState = FetchedData;
                            rootState_active = FetchedData;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.CollectData");
                            //#[ transition 5 
                            std::cout<<"Check whether the data is fetched from the sensors successfully or not.";
                            //#]
                            //#[ transition 2 
                            checkDataAvailability = !checkDataAvailability;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.FailedDataCollection");
                            rootState_subState = FailedDataCollection;
                            rootState_active = FailedDataCollection;
                            //#[ state FailedDataCollection.(Entry) 
                            std::cout<<"\nFailed to collect data from the sensors.\n";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State FetchedData
        case FetchedData:
        {
            if(IS_EVENT_TYPE_OF(evProcessData_ANALYSIS_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.FetchedData");
                    NOTIFY_STATE_ENTERED("ROOT.ProcessData");
                    rootState_subState = ProcessData;
                    rootState_active = ProcessData;
                    //#[ state ProcessData.(Entry) 
                    std::cout<<"Process the fetched data.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ProcessData
        case ProcessData:
        {
            if(IS_EVENT_TYPE_OF(evReturnData_ANALYSIS_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.ProcessData");
                    NOTIFY_STATE_ENTERED("ROOT.ReturnData");
                    rootState_subState = ReturnData;
                    rootState_active = ReturnData;
                    //#[ state ReturnData.(Entry) 
                    std::cout<<"Return the processed data.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State FailedDataCollection
        case FailedDataCollection:
        {
            if(IS_EVENT_TYPE_OF(evSensorsReadyToCollectData_ANALYSIS_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.FailedDataCollection");
                    NOTIFY_STATE_ENTERED("ROOT.StartProcess");
                    rootState_subState = StartProcess;
                    rootState_active = StartProcess;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorDataProcessor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("collectedDataStatus", UNKNOWN2STRING(myReal->collectedDataStatus));
    aomsAttributes->addAttribute("checkDataAvailability", x2String(myReal->checkDataAvailability));
}

void OMAnimatedSensorDataProcessor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SensorDataProcessor::StartProcess:
        {
            StartProcess_serializeStates(aomsState);
        }
        break;
        case SensorDataProcessor::CollectData:
        {
            CollectData_serializeStates(aomsState);
        }
        break;
        case SensorDataProcessor::FetchedData:
        {
            FetchedData_serializeStates(aomsState);
        }
        break;
        case SensorDataProcessor::ProcessData:
        {
            ProcessData_serializeStates(aomsState);
        }
        break;
        case SensorDataProcessor::FailedDataCollection:
        {
            FailedDataCollection_serializeStates(aomsState);
        }
        break;
        case SensorDataProcessor::ReturnData:
        {
            ReturnData_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSensorDataProcessor::StartProcess_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StartProcess");
}

void OMAnimatedSensorDataProcessor::ReturnData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReturnData");
}

void OMAnimatedSensorDataProcessor::ProcessData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ProcessData");
}

void OMAnimatedSensorDataProcessor::FetchedData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FetchedData");
}

void OMAnimatedSensorDataProcessor::FailedDataCollection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FailedDataCollection");
}

void OMAnimatedSensorDataProcessor::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}
//#]

IMPLEMENT_REACTIVE_META_P(SensorDataProcessor, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedSensorDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
