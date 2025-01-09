/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DataProcessor.h"
//## link itsImageProcessor
#include "ImageProcessor.h"
//## link itsSensorDataProcessor
#include "SensorDataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_DataProcessor_DataProcessor_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_DataProcessor_dataFetched_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class DataProcessor
//#[ ignore
DataProcessor::p_DataProcessor_C::p_DataProcessor_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

DataProcessor::p_DataProcessor_C::~p_DataProcessor_C(void) {
    cleanUpRelations();
}

void DataProcessor::p_DataProcessor_C::connectDataProcessor(DataProcessor* part) {
    setItsInt_waterPressure_ProxyFlowPropertyInterface(part);
    
}

int_waterPressure_ProxyFlowPropertyInterface* DataProcessor::p_DataProcessor_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataProcessor::p_DataProcessor_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void DataProcessor::p_DataProcessor_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void DataProcessor::p_DataProcessor_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

DataProcessor::p_DataProcessor_1_C::p_DataProcessor_1_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

DataProcessor::p_DataProcessor_1_C::~p_DataProcessor_1_C(void) {
    cleanUpRelations();
}

void DataProcessor::p_DataProcessor_1_C::connectDataProcessor(DataProcessor* part) {
    setItsInt_windSpeed_ProxyFlowPropertyInterface(part);
    
}

int_windSpeed_ProxyFlowPropertyInterface* DataProcessor::p_DataProcessor_1_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataProcessor::p_DataProcessor_1_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void DataProcessor::p_DataProcessor_1_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void DataProcessor::p_DataProcessor_1_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

DataProcessor::~DataProcessor(void) {
    NOTIFY_DESTRUCTOR(~DataProcessor, true);
    cleanUpRelations();
    cancelTimeouts();
}

bool DataProcessor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DataProcessor::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void DataProcessor::dataFetched(void) {
    NOTIFY_OPERATION(dataFetched, dataFetched(), 0, SMSWTD_SYSTEM_DESIGN_DataProcessor_dataFetched_SERIALIZE);
    //#[ operation dataFetched()
    std::cout<<"Successfully fetched data from the sensors.\n";
    //#]
}

DataProcessor::p_DataProcessor_C* DataProcessor::getP_DataProcessor(void) const {
    return (DataProcessor::p_DataProcessor_C*) &p_DataProcessor;
}

DataProcessor::p_DataProcessor_C* DataProcessor::get_p_DataProcessor(void) const {
    return (DataProcessor::p_DataProcessor_C*) &p_DataProcessor;
}

DataProcessor::p_DataProcessor_1_C* DataProcessor::getP_DataProcessor_1(void) const {
    return (DataProcessor::p_DataProcessor_1_C*) &p_DataProcessor_1;
}

DataProcessor::p_DataProcessor_1_C* DataProcessor::get_p_DataProcessor_1(void) const {
    return (DataProcessor::p_DataProcessor_1_C*) &p_DataProcessor_1;
}

const bool DataProcessor::getDataAvailability(void) const {
    return dataAvailability;
}

void DataProcessor::setDataAvailability(const bool p_dataAvailability) {
    dataAvailability = p_dataAvailability;
}

const bool DataProcessor::getTsunami(void) const {
    return tsunami;
}

void DataProcessor::setTsunami(const bool p_tsunami) {
    tsunami = p_tsunami;
    NOTIFY_SET_OPERATION;
}

const int DataProcessor::getWaterPressure(void) const {
    return waterPressure;
}

const int DataProcessor::getWindSpeed(void) const {
    return windSpeed;
}

bool DataProcessor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void DataProcessor::initRelations(void) {
    if (get_p_DataProcessor() != NULL) {
        get_p_DataProcessor()->connectDataProcessor(this);
    }
    if (get_p_DataProcessor_1() != NULL) {
        get_p_DataProcessor_1()->connectDataProcessor(this);
    }
}

void DataProcessor::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

DataProcessor::DataProcessor(IOxfActive* const theActiveContext) : OMReactive(), int_waterPressure_ProxyFlowPropertyInterface(), int_windSpeed_ProxyFlowPropertyInterface(), dataAvailability(false), tsunami(false), waterPressure(0), windSpeed(0), itsImageProcessor(NULL), itsSensorDataProcessor(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DataProcessor, DataProcessor(), 0, SMSWTD_SYSTEM_DESIGN_DataProcessor_DataProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

//#[ ignore
void DataProcessor::setWaterPressure(int p_waterPressure) {
    if (waterPressure != p_waterPressure) {
        waterPressure = p_waterPressure;
        FLOW_DATA_RECEIVE("waterPressure", waterPressure, x2String);
    }
    
}

void DataProcessor::setWindSpeed(int p_windSpeed) {
    if (windSpeed != p_windSpeed) {
        windSpeed = p_windSpeed;
        FLOW_DATA_RECEIVE("windSpeed", windSpeed, x2String);
    }
    
}
//#]

const ImageProcessor* DataProcessor::getItsImageProcessor(void) const {
    return itsImageProcessor;
}

void DataProcessor::setItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    if(p_ImageProcessor != NULL)
        {
            p_ImageProcessor->_setItsDataProcessor(this);
        }
    _setItsImageProcessor(p_ImageProcessor);
}

const SensorDataProcessor* DataProcessor::getItsSensorDataProcessor(void) const {
    return itsSensorDataProcessor;
}

void DataProcessor::setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    if(p_SensorDataProcessor != NULL)
        {
            p_SensorDataProcessor->_setItsDataProcessor(this);
        }
    _setItsSensorDataProcessor(p_SensorDataProcessor);
}

void DataProcessor::cleanUpRelations(void) {
    if(itsImageProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsImageProcessor");
            const DataProcessor* p_DataProcessor = itsImageProcessor->getItsDataProcessor();
            if(p_DataProcessor != NULL)
                {
                    itsImageProcessor->__setItsDataProcessor(NULL);
                }
            itsImageProcessor = NULL;
        }
    if(itsSensorDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorDataProcessor");
            const DataProcessor* p_DataProcessor = itsSensorDataProcessor->getItsDataProcessor();
            if(p_DataProcessor != NULL)
                {
                    itsSensorDataProcessor->__setItsDataProcessor(NULL);
                }
            itsSensorDataProcessor = NULL;
        }
}

void DataProcessor::__setItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    itsImageProcessor = p_ImageProcessor;
    if(p_ImageProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsImageProcessor", p_ImageProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsImageProcessor");
        }
}

void DataProcessor::_setItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    if(itsImageProcessor != NULL)
        {
            itsImageProcessor->__setItsDataProcessor(NULL);
        }
    __setItsImageProcessor(p_ImageProcessor);
}

void DataProcessor::_clearItsImageProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsImageProcessor");
    itsImageProcessor = NULL;
}

void DataProcessor::__setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    itsSensorDataProcessor = p_SensorDataProcessor;
    if(p_SensorDataProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorDataProcessor", p_SensorDataProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorDataProcessor");
        }
}

void DataProcessor::_setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor) {
    if(itsSensorDataProcessor != NULL)
        {
            itsSensorDataProcessor->__setItsDataProcessor(NULL);
        }
    __setItsSensorDataProcessor(p_SensorDataProcessor);
}

void DataProcessor::_clearItsSensorDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsSensorDataProcessor");
    itsSensorDataProcessor = NULL;
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
                    rootState_timeout = scheduleTimeout(5000, "ROOT.CollectData");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.CollectData");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_6");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_6;
                            rootState_active = accepttimeevent_6;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State FailedDataCollection
        case FailedDataCollection:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.FailedDataCollection");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_7");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_7;
                            rootState_active = accepttimeevent_7;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case accepttimeevent_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 3 
                    if(waterPressure>10)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.accepttimeevent_6");
                            //#[ transition 3 
                            dataFetched();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.ProcessData");
                            rootState_subState = ProcessData;
                            rootState_active = ProcessData;
                            //#[ state ProcessData.(Entry) 
                            std::cout<<"Collected data is processed.\n";
                            if (waterPressure > 50) {
                                    tsunami = true;
                                } else {
                                    tsunami = false;
                                }
                            std::cout<< tsunami << std::endl;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.accepttimeevent_6");
                            NOTIFY_STATE_ENTERED("ROOT.FailedDataCollection");
                            rootState_subState = FailedDataCollection;
                            rootState_active = FailedDataCollection;
                            //#[ state FailedDataCollection.(Entry) 
                            dataAvailability = !dataAvailability;
                            std::cout<<"Failed to collect data from the sensors.\n";
                            //#]
                            rootState_timeout = scheduleTimeout(3000, "ROOT.FailedDataCollection");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case accepttimeevent_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_7");
                    NOTIFY_STATE_ENTERED("ROOT.StartProcess");
                    rootState_subState = StartProcess;
                    rootState_active = StartProcess;
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
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
    aomsAttributes->addAttribute("tsunami", x2String(myReal->tsunami));
}

void OMAnimatedDataProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensorDataProcessor", false, true);
    if(myReal->itsSensorDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorDataProcessor);
        }
    aomsRelations->addRelation("itsImageProcessor", false, true);
    if(myReal->itsImageProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsImageProcessor);
        }
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
        case DataProcessor::ProcessData:
        {
            ProcessData_serializeStates(aomsState);
        }
        break;
        case DataProcessor::accepttimeevent_6:
        {
            accepttimeevent_6_serializeStates(aomsState);
        }
        break;
        case DataProcessor::accepttimeevent_7:
        {
            accepttimeevent_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDataProcessor::StartProcess_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StartProcess");
}

void OMAnimatedDataProcessor::ProcessData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ProcessData");
}

void OMAnimatedDataProcessor::FailedDataCollection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FailedDataCollection");
}

void OMAnimatedDataProcessor::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}

void OMAnimatedDataProcessor::accepttimeevent_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_7");
}

void OMAnimatedDataProcessor::accepttimeevent_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_6");
}
//#]

IMPLEMENT_REACTIVE_META_P(DataProcessor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDataProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.cpp
*********************************************************************/
