/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_DataProcessor_DataProcessor_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_DataProcessor_dataFetched_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class DataProcessor
DataProcessor::~DataProcessor(void) {
    NOTIFY_DESTRUCTOR(~DataProcessor, true);
}

bool DataProcessor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DataProcessor::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

DataProcessor::DataProcessor(IOxfActive* const theActiveContext) : OMReactive(), dataAvailability(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DataProcessor, DataProcessor(), 0, SMSWTD_SYSTEM_DESIGN_DataProcessor_DataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

void DataProcessor::dataFetched(void) {
    NOTIFY_OPERATION(dataFetched, dataFetched(), 0, SMSWTD_SYSTEM_DESIGN_DataProcessor_dataFetched_SERIALIZE);
    //#[ operation dataFetched()
    std::cout<<"\nSuccessfully fetched data from the sensors.\n";
    //#]
}

const bool DataProcessor::getDataAvailability(void) const {
    return dataAvailability;
}

void DataProcessor::setDataAvailability(const bool p_dataAvailability) {
    dataAvailability = p_dataAvailability;
}

void DataProcessor::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.StartProcess");
        rootState_subState = StartProcess;
        rootState_active = StartProcess;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DataProcessor::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State StartProcess
        case StartProcess:
        {
            if(IS_EVENT_TYPE_OF(reqDataFromSensors_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.StartProcess");
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    std::cout<<"Collecting data from the sensors.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(evCheckDataAvailability_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    //## transition 4 
                    if(dataAvailability)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.CollectData");
                            //#[ transition 4 
                            dataFetched();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.FetchData");
                            rootState_subState = FetchData;
                            rootState_active = FetchData;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.CollectData");
                            NOTIFY_STATE_ENTERED("ROOT.FailedDataCollection");
                            rootState_subState = FailedDataCollection;
                            rootState_active = FailedDataCollection;
                            //#[ state FailedDataCollection.(Entry) 
                            dataAvailability = !dataAvailability;
                            std::cout<<"\nFailed to collect data from the sensors.\n";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State FailedDataCollection
        case FailedDataCollection:
        {
            if(IS_EVENT_TYPE_OF(evSensorsReadyToCollectData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.FailedDataCollection");
                    NOTIFY_STATE_ENTERED("ROOT.StartProcess");
                    rootState_subState = StartProcess;
                    rootState_active = StartProcess;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State FetchData
        case FetchData:
        {
            if(IS_EVENT_TYPE_OF(evProcessData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.FetchData");
                    NOTIFY_STATE_ENTERED("ROOT.ProcessData");
                    rootState_subState = ProcessData;
                    rootState_active = ProcessData;
                    //#[ state ProcessData.(Entry) 
                    std::cout<<"Collected data is processed.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ProcessData
        case ProcessData:
        {
            if(IS_EVENT_TYPE_OF(evReturnData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.ProcessData");
                    NOTIFY_STATE_ENTERED("ROOT.ReturnData");
                    rootState_subState = ReturnData;
                    rootState_active = ReturnData;
                    //#[ state ReturnData.(Entry) 
                    std::cout<<"Return the processed data for completing further steps.\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
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
void OMAnimatedDataProcessor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dataAvailability", x2String(myReal->dataAvailability));
}

void OMAnimatedDataProcessor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DataProcessor::StartProcess:
        {
            StartProcess_serializeStates(aomsState);
        }
        break;
        case DataProcessor::CollectData:
        {
            CollectData_serializeStates(aomsState);
        }
        break;
        case DataProcessor::FailedDataCollection:
        {
            FailedDataCollection_serializeStates(aomsState);
        }
        break;
        case DataProcessor::FetchData:
        {
            FetchData_serializeStates(aomsState);
        }
        break;
        case DataProcessor::ProcessData:
        {
            ProcessData_serializeStates(aomsState);
        }
        break;
        case DataProcessor::ReturnData:
        {
            ReturnData_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDataProcessor::StartProcess_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StartProcess");
}

void OMAnimatedDataProcessor::ReturnData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReturnData");
}

void OMAnimatedDataProcessor::ProcessData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ProcessData");
}

void OMAnimatedDataProcessor::FetchData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FetchData");
}

void OMAnimatedDataProcessor::FailedDataCollection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FailedDataCollection");
}

void OMAnimatedDataProcessor::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}
//#]

IMPLEMENT_REACTIVE_META_P(DataProcessor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
