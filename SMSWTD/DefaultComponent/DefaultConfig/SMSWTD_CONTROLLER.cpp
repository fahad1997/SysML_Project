/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_CONTROLLER
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_CONTROLLER.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## link itsDashboard
#include "Dashboard.h"
//## link itsDataCollector
#include "DataCollector.h"
//## link itsImageCollector
#include "ImageCollector.h"
//## link itsPredictionModel
#include "PredictionModel.h"
//## auto_generated
#include "SMSWTD_CONTROLLER.h"
//## event evActivateSMSWTD()
#include "DESIGN.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SMSWTD_CONTROLLER_SMSWTD_CONTROLLER_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class SMSWTD_CONTROLLER
//#[ ignore
SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::p_SMSWTD_BLK_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::~p_SMSWTD_BLK_C(void) {
    cleanUpRelations();
}

int_waterPressure_ProxyFlowPropertyInterface* SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::p_SMSWTD_BLK_1_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::~p_SMSWTD_BLK_1_C(void) {
    cleanUpRelations();
}

int_windSpeed_ProxyFlowPropertyInterface* SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

const Dashboard* SMSWTD_CONTROLLER::getItsDashboard(void) const {
    return itsDashboard;
}

void SMSWTD_CONTROLLER::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_setItsSMSWTD_CONTROLLER(this);
        }
    _setItsDashboard(p_Dashboard);
}

const DataCollector* SMSWTD_CONTROLLER::getItsDataCollector(void) const {
    return itsDataCollector;
}

const DataProcessor* SMSWTD_CONTROLLER::getItsDataProcessor(void) const {
    return &itsDataProcessor;
}

const ImageCollector* SMSWTD_CONTROLLER::getItsImageCollector(void) const {
    return itsImageCollector;
}

const PredictionModel* SMSWTD_CONTROLLER::getItsPredictionModel(void) const {
    return itsPredictionModel;
}

void SMSWTD_CONTROLLER::setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    if(p_PredictionModel != NULL)
        {
            p_PredictionModel->_setItsSMSWTD_CONTROLLER(this);
        }
    _setItsPredictionModel(p_PredictionModel);
}

bool SMSWTD_CONTROLLER::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsDataProcessor.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD_CONTROLLER::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
}

void SMSWTD_CONTROLLER::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
            const SMSWTD_CONTROLLER* p_SMSWTD_CONTROLLER = itsDashboard->getItsSMSWTD_CONTROLLER();
            if(p_SMSWTD_CONTROLLER != NULL)
                {
                    itsDashboard->__setItsSMSWTD_CONTROLLER(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            const SMSWTD_CONTROLLER* p_SMSWTD_CONTROLLER = itsDataCollector->getItsSMSWTD_CONTROLLER();
            if(p_SMSWTD_CONTROLLER != NULL)
                {
                    itsDataCollector->__setItsSMSWTD_CONTROLLER(NULL);
                }
            itsDataCollector = NULL;
        }
    if(itsImageCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsImageCollector");
            const SMSWTD_CONTROLLER* p_SMSWTD_CONTROLLER = itsImageCollector->getItsSMSWTD_CONTROLLER();
            if(p_SMSWTD_CONTROLLER != NULL)
                {
                    itsImageCollector->__setItsSMSWTD_CONTROLLER(NULL);
                }
            itsImageCollector = NULL;
        }
    if(itsPredictionModel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPredictionModel");
            const SMSWTD_CONTROLLER* p_SMSWTD_CONTROLLER = itsPredictionModel->getItsSMSWTD_CONTROLLER();
            if(p_SMSWTD_CONTROLLER != NULL)
                {
                    itsPredictionModel->__setItsSMSWTD_CONTROLLER(NULL);
                }
            itsPredictionModel = NULL;
        }
}

void SMSWTD_CONTROLLER::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
    if(p_Dashboard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDashboard", p_Dashboard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
        }
}

void SMSWTD_CONTROLLER::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsSMSWTD_CONTROLLER(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void SMSWTD_CONTROLLER::_clearItsDashboard(void) {
    NOTIFY_RELATION_CLEARED("itsDashboard");
    itsDashboard = NULL;
}

void SMSWTD_CONTROLLER::__setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    itsPredictionModel = p_PredictionModel;
    if(p_PredictionModel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPredictionModel", p_PredictionModel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPredictionModel");
        }
}

void SMSWTD_CONTROLLER::_setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    if(itsPredictionModel != NULL)
        {
            itsPredictionModel->__setItsSMSWTD_CONTROLLER(NULL);
        }
    __setItsPredictionModel(p_PredictionModel);
}

void SMSWTD_CONTROLLER::_clearItsPredictionModel(void) {
    NOTIFY_RELATION_CLEARED("itsPredictionModel");
    itsPredictionModel = NULL;
}

void SMSWTD_CONTROLLER::destroy(void) {
    itsDataProcessor.destroy();
    OMReactive::destroy();
}

SMSWTD_CONTROLLER::SMSWTD_CONTROLLER(IOxfActive* const theActiveContext) : OMReactive(), itsDashboard(NULL), itsPredictionModel(NULL), waterPressure(0), windSpeed(0), itsDataCollector(NULL), itsImageCollector(NULL), activate(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD_CONTROLLER, SMSWTD_CONTROLLER(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SMSWTD_CONTROLLER_SMSWTD_CONTROLLER_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDataProcessor.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

SMSWTD_CONTROLLER::~SMSWTD_CONTROLLER(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD_CONTROLLER, true);
    cleanUpRelations();
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_C* SMSWTD_CONTROLLER::getP_SMSWTD_BLK(void) const {
    return (SMSWTD_CONTROLLER::p_SMSWTD_BLK_C*) &p_SMSWTD_BLK;
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_C* SMSWTD_CONTROLLER::get_p_SMSWTD_BLK(void) const {
    return (SMSWTD_CONTROLLER::p_SMSWTD_BLK_C*) &p_SMSWTD_BLK;
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C* SMSWTD_CONTROLLER::getP_SMSWTD_BLK_1(void) const {
    return (SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C*) &p_SMSWTD_BLK_1;
}

SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C* SMSWTD_CONTROLLER::get_p_SMSWTD_BLK_1(void) const {
    return (SMSWTD_CONTROLLER::p_SMSWTD_BLK_1_C*) &p_SMSWTD_BLK_1;
}

const int SMSWTD_CONTROLLER::getWaterPressure(void) const {
    return waterPressure;
}

void SMSWTD_CONTROLLER::setWaterPressure(const int p_waterPressure) {
    waterPressure = p_waterPressure;
}

const int SMSWTD_CONTROLLER::getWindSpeed(void) const {
    return windSpeed;
}

void SMSWTD_CONTROLLER::setWindSpeed(const int p_windSpeed) {
    windSpeed = p_windSpeed;
}

void SMSWTD_CONTROLLER::setItsDataCollector(DataCollector* const p_DataCollector) {
    if(p_DataCollector != NULL)
        {
            p_DataCollector->_setItsSMSWTD_CONTROLLER(this);
        }
    _setItsDataCollector(p_DataCollector);
}

void SMSWTD_CONTROLLER::setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(p_ImageCollector != NULL)
        {
            p_ImageCollector->_setItsSMSWTD_CONTROLLER(this);
        }
    _setItsImageCollector(p_ImageCollector);
}

void SMSWTD_CONTROLLER::initRelations(void) {
    {
        
        get_p_SMSWTD_BLK()->setItsInt_waterPressure_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor()->getItsInt_waterPressure_ProxyFlowPropertyInterface());
        
    }
    {
        
        get_p_SMSWTD_BLK_1()->setItsInt_windSpeed_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor_1()->getItsInt_windSpeed_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSensorConfiguration.get_p_SensorConfiguration()->setItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor_2()->getItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSensorConfiguration.get_p_SensorConfiguration_1()->setItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor_3()->getItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface());
        
    }
}

void SMSWTD_CONTROLLER::__setItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector = p_DataCollector;
    if(p_DataCollector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataCollector", p_DataCollector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
        }
}

void SMSWTD_CONTROLLER::_setItsDataCollector(DataCollector* const p_DataCollector) {
    if(itsDataCollector != NULL)
        {
            itsDataCollector->__setItsSMSWTD_CONTROLLER(NULL);
        }
    __setItsDataCollector(p_DataCollector);
}

void SMSWTD_CONTROLLER::_clearItsDataCollector(void) {
    NOTIFY_RELATION_CLEARED("itsDataCollector");
    itsDataCollector = NULL;
}

void SMSWTD_CONTROLLER::__setItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector = p_ImageCollector;
    if(p_ImageCollector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsImageCollector", p_ImageCollector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsImageCollector");
        }
}

void SMSWTD_CONTROLLER::_setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(itsImageCollector != NULL)
        {
            itsImageCollector->__setItsSMSWTD_CONTROLLER(NULL);
        }
    __setItsImageCollector(p_ImageCollector);
}

void SMSWTD_CONTROLLER::_clearItsImageCollector(void) {
    NOTIFY_RELATION_CLEARED("itsImageCollector");
    itsImageCollector = NULL;
}

void SMSWTD_CONTROLLER::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDataProcessor.setActiveContext(theActiveContext, false);
    }
}

const bool SMSWTD_CONTROLLER::getActivate(void) const {
    return activate;
}

void SMSWTD_CONTROLLER::setActivate(const bool p_activate) {
    activate = p_activate;
    NOTIFY_SET_OPERATION;
}

const SensorConfiguration* SMSWTD_CONTROLLER::getItsSensorConfiguration(void) const {
    return &itsSensorConfiguration;
}

void SMSWTD_CONTROLLER::Activated_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Activated");
    rootState_subState = Activated;
    rootState_active = Activated;
    state_2_entDef();
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_3");
}

void SMSWTD_CONTROLLER::Activated_exit(void) {
    switch (state_2_subState) {
        // State DataProcessorStart
        case DataProcessorStart:
        {
            NOTIFY_STATE_EXITED("ROOT.Activated.state_2.DataProcessorStart");
        }
        break;
        // State DataProcessingDone
        case DataProcessingDone:
        {
            NOTIFY_STATE_EXITED("ROOT.Activated.state_2.DataProcessingDone");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Activated.state_2");
    state_3_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Activated.state_3");
    
    NOTIFY_STATE_EXITED("ROOT.Activated");
}

IOxfReactive::TakeEventStatus SMSWTD_CONTROLLER::Activated_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_2
        omComponentStatus = state_2_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(Activated) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    
    return res;
}

IOxfReactive::TakeEventStatus SMSWTD_CONTROLLER::state_3_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

void SMSWTD_CONTROLLER::state_2_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_2");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_2.DataProcessorStart");
    state_2_subState = DataProcessorStart;
    state_2_active = DataProcessorStart;
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus SMSWTD_CONTROLLER::state_2_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State DataProcessorStart
    if(state_2_active == DataProcessorStart)
        {
            if(IS_EVENT_TYPE_OF(evStartDataProcessing_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Activated.state_2.DataProcessorStart");
                    //#[ transition 3 
                    itsDataProcessor.GEN(reqDataFromSensors());
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Activated.state_2.DataProcessingDone");
                    state_2_subState = DataProcessingDone;
                    state_2_active = DataProcessingDone;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void SMSWTD_CONTROLLER::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Deactivated");
        rootState_subState = Deactivated;
        rootState_active = Deactivated;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SMSWTD_CONTROLLER::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Deactivated
        case Deactivated:
        {
            if(IS_EVENT_TYPE_OF(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Deactivated");
                    //#[ transition 1 
                    activate=true;
                    //#]
                    Activated_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Activated
        case Activated:
        {
            res = Activated_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD_CONTROLLER::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
    aomsAttributes->addAttribute("activate", x2String(myReal->activate));
}

void OMAnimatedSMSWTD_CONTROLLER::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataProcessor);
    aomsRelations->addRelation("itsDashboard", false, true);
    if(myReal->itsDashboard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDashboard);
        }
    aomsRelations->addRelation("itsPredictionModel", false, true);
    if(myReal->itsPredictionModel)
        {
            aomsRelations->ADD_ITEM(myReal->itsPredictionModel);
        }
    aomsRelations->addRelation("itsImageCollector", false, true);
    if(myReal->itsImageCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsImageCollector);
        }
    aomsRelations->addRelation("itsDataCollector", false, true);
    if(myReal->itsDataCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataCollector);
        }
    aomsRelations->addRelation("itsSensorConfiguration", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSensorConfiguration);
}

void OMAnimatedSMSWTD_CONTROLLER::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SMSWTD_CONTROLLER::Deactivated:
        {
            Deactivated_serializeStates(aomsState);
        }
        break;
        case SMSWTD_CONTROLLER::Activated:
        {
            Activated_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSWTD_CONTROLLER::Deactivated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Deactivated");
}

void OMAnimatedSMSWTD_CONTROLLER::Activated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated");
    state_2_serializeStates(aomsState);
    state_3_serializeStates(aomsState);
}

void OMAnimatedSMSWTD_CONTROLLER::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_3");
}

void OMAnimatedSMSWTD_CONTROLLER::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2");
    switch (myReal->state_2_subState) {
        case SMSWTD_CONTROLLER::DataProcessorStart:
        {
            DataProcessorStart_serializeStates(aomsState);
        }
        break;
        case SMSWTD_CONTROLLER::DataProcessingDone:
        {
            DataProcessingDone_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSWTD_CONTROLLER::DataProcessorStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2.DataProcessorStart");
}

void OMAnimatedSMSWTD_CONTROLLER::DataProcessingDone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2.DataProcessingDone");
}
//#]

IMPLEMENT_REACTIVE_META_P(SMSWTD_CONTROLLER, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedSMSWTD_CONTROLLER)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_CONTROLLER.cpp
*********************************************************************/
