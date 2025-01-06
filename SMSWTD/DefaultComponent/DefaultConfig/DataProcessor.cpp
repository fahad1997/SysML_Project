/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "DataProcessor.h"
//## auto_generated
#include <omthread.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class DataProcessor
DataProcessor::~DataProcessor(void) {
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
    setActiveContext(theActiveContext, false);
    initStatechart();
}

void DataProcessor::dataFetched(void) {
    //#[ operation dataFetched()
    std::cout<<"Successfully fetched data from the sensors.\n";
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
        rootState_subState = StartProcess;
        rootState_active = StartProcess;
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
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    std::cout<<"Collecting data from the sensors.\n";
                    //#]
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
                            //#[ transition 4 
                            dataFetched();
                            //#]
                            rootState_subState = FetchData;
                            rootState_active = FetchData;
                            res = eventConsumed;
                        }
                    else
                        {
                            rootState_subState = FailedDataCollection;
                            rootState_active = FailedDataCollection;
                            //#[ state FailedDataCollection.(Entry) 
                            dataAvailability = !dataAvailability;
                            std::cout<<"Failed to collect data from the sensors.\n";
                            //#]
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
                    rootState_subState = StartProcess;
                    rootState_active = StartProcess;
                    res = eventConsumed;
                }
            
        }
        break;
        // State FetchData
        case FetchData:
        {
            if(IS_EVENT_TYPE_OF(evProcessData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    rootState_subState = ProcessData;
                    rootState_active = ProcessData;
                    //#[ state ProcessData.(Entry) 
                    std::cout<<"Collected data is processed.\n";
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        // State ProcessData
        case ProcessData:
        {
            if(IS_EVENT_TYPE_OF(evReturnData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    rootState_subState = ReturnData;
                    rootState_active = ReturnData;
                    //#[ state ReturnData.(Entry) 
                    std::cout<<"Return the processed data for completing further steps.\n";
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
