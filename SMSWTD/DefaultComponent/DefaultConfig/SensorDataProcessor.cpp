/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataProcessor
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/

//## auto_generated
#include "SensorDataProcessor.h"
//## auto_generated
#include <omthread.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class SensorDataProcessor
SensorDataProcessor::SensorDataProcessor(IOxfActive* const theActiveContext) : OMReactive(), checkDataAvailability(false), collectedDataStatus(false) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SensorDataProcessor::~SensorDataProcessor(void) {
}

void SensorDataProcessor::dataFetched(void) {
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
        rootState_subState = StartProcess;
        rootState_active = StartProcess;
    }
}

IOxfReactive::TakeEventStatus SensorDataProcessor::rootState_processEvent(void) {
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
                    std::cout<<"Sensor Data Processor - Collect data from the sensors.\n";
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
                    //## transition 3 
                    if(checkDataAvailability)
                        {
                            //#[ transition 5 
                            std::cout<<"Check whether the data is fetched from the sensors successfully or not.";
                            //#]
                            //#[ transition 3 
                            dataFetched();
                            //#]
                            rootState_subState = FetchedData;
                            rootState_active = FetchedData;
                            res = eventConsumed;
                        }
                    else
                        {
                            //#[ transition 5 
                            std::cout<<"Check whether the data is fetched from the sensors successfully or not.";
                            //#]
                            //#[ transition 2 
                            checkDataAvailability = !checkDataAvailability;
                            //#]
                            rootState_subState = FailedDataCollection;
                            rootState_active = FailedDataCollection;
                            //#[ state FailedDataCollection.(Entry) 
                            std::cout<<"\nFailed to collect data from the sensors.\n";
                            //#]
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State FetchedData
        case FetchedData:
        {
            if(IS_EVENT_TYPE_OF(evProcessData_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    rootState_subState = ProcessData;
                    rootState_active = ProcessData;
                    //#[ state ProcessData.(Entry) 
                    std::cout<<"Process the fetched data.\n";
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
                    std::cout<<"Return the processed data.\n";
                    //#]
                    res = eventConsumed;
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
        
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataProcessor.cpp
*********************************************************************/
