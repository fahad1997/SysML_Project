/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_BLK
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SMSWTD_BLK.h"
//## link itsDashboard
#include "Dashboard.h"
//## link itsDataCollector
#include "DataCollector.h"
//## link itsImageCollector
#include "ImageCollector.h"
//## link itsPredictionModel
#include "PredictionModel.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SMSWTD_BLK_SMSWTD_BLK_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD_BLK
//#[ ignore
SMSWTD_BLK::p_SMSWTD_BLK_C::p_SMSWTD_BLK_C(void) : int_waterPressure_ProxyFlowPropertyInterface(), _p_(0), itsInt_waterPressure_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD_BLK::p_SMSWTD_BLK_C::~p_SMSWTD_BLK_C(void) {
    cleanUpRelations();
}

int_waterPressure_ProxyFlowPropertyInterface* SMSWTD_BLK::p_SMSWTD_BLK_C::getItsInt_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD_BLK::p_SMSWTD_BLK_C::setWaterPressure(int p_waterPressure) {
    
    if (itsInt_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void SMSWTD_BLK::p_SMSWTD_BLK_C::setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface) {
    itsInt_waterPressure_ProxyFlowPropertyInterface = p_int_waterPressure_ProxyFlowPropertyInterface;
}

void SMSWTD_BLK::p_SMSWTD_BLK_C::cleanUpRelations(void) {
    if(itsInt_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD_BLK::p_SMSWTD_BLK_1_C::p_SMSWTD_BLK_1_C(void) : int_windSpeed_ProxyFlowPropertyInterface(), _p_(0), itsInt_windSpeed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD_BLK::p_SMSWTD_BLK_1_C::~p_SMSWTD_BLK_1_C(void) {
    cleanUpRelations();
}

int_windSpeed_ProxyFlowPropertyInterface* SMSWTD_BLK::p_SMSWTD_BLK_1_C::getItsInt_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD_BLK::p_SMSWTD_BLK_1_C::setWindSpeed(int p_windSpeed) {
    
    if (itsInt_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsInt_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void SMSWTD_BLK::p_SMSWTD_BLK_1_C::setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface) {
    itsInt_windSpeed_ProxyFlowPropertyInterface = p_int_windSpeed_ProxyFlowPropertyInterface;
}

void SMSWTD_BLK::p_SMSWTD_BLK_1_C::cleanUpRelations(void) {
    if(itsInt_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMSWTD_BLK::SMSWTD_BLK(IOxfActive* const theActiveContext) : OMReactive(), itsDashboard(NULL), itsPredictionModel(NULL), waterPressure(0), windSpeed(0), itsDataCollector(NULL), itsImageCollector(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD_BLK, SMSWTD_BLK(), 0, SMSWTD_SYSTEM_DESIGN_SMSWTD_BLK_SMSWTD_BLK_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDataProcessor.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

SMSWTD_BLK::~SMSWTD_BLK(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD_BLK, true);
    cleanUpRelations();
}

const Dashboard* SMSWTD_BLK::getItsDashboard(void) const {
    return itsDashboard;
}

void SMSWTD_BLK::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_setItsSMSWTD_BLK(this);
        }
    _setItsDashboard(p_Dashboard);
}

const DataCollector* SMSWTD_BLK::getItsDataCollector(void) const {
    return itsDataCollector;
}

const DataProcessor* SMSWTD_BLK::getItsDataProcessor(void) const {
    return &itsDataProcessor;
}

const ImageCollector* SMSWTD_BLK::getItsImageCollector(void) const {
    return itsImageCollector;
}

const PredictionModel* SMSWTD_BLK::getItsPredictionModel(void) const {
    return itsPredictionModel;
}

void SMSWTD_BLK::setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    if(p_PredictionModel != NULL)
        {
            p_PredictionModel->_setItsSMSWTD_BLK(this);
        }
    _setItsPredictionModel(p_PredictionModel);
}

bool SMSWTD_BLK::startBehavior(void) {
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

void SMSWTD_BLK::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
}

void SMSWTD_BLK::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
            const SMSWTD_BLK* p_SMSWTD_BLK = itsDashboard->getItsSMSWTD_BLK();
            if(p_SMSWTD_BLK != NULL)
                {
                    itsDashboard->__setItsSMSWTD_BLK(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsDataCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataCollector");
            const SMSWTD_BLK* p_SMSWTD_BLK = itsDataCollector->getItsSMSWTD_BLK();
            if(p_SMSWTD_BLK != NULL)
                {
                    itsDataCollector->__setItsSMSWTD_BLK(NULL);
                }
            itsDataCollector = NULL;
        }
    if(itsImageCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsImageCollector");
            const SMSWTD_BLK* p_SMSWTD_BLK = itsImageCollector->getItsSMSWTD_BLK();
            if(p_SMSWTD_BLK != NULL)
                {
                    itsImageCollector->__setItsSMSWTD_BLK(NULL);
                }
            itsImageCollector = NULL;
        }
    if(itsPredictionModel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPredictionModel");
            const SMSWTD_BLK* p_SMSWTD_BLK = itsPredictionModel->getItsSMSWTD_BLK();
            if(p_SMSWTD_BLK != NULL)
                {
                    itsPredictionModel->__setItsSMSWTD_BLK(NULL);
                }
            itsPredictionModel = NULL;
        }
}

void SMSWTD_BLK::__setItsDashboard(Dashboard* const p_Dashboard) {
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

void SMSWTD_BLK::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsSMSWTD_BLK(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void SMSWTD_BLK::_clearItsDashboard(void) {
    NOTIFY_RELATION_CLEARED("itsDashboard");
    itsDashboard = NULL;
}

void SMSWTD_BLK::__setItsPredictionModel(PredictionModel* const p_PredictionModel) {
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

void SMSWTD_BLK::_setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    if(itsPredictionModel != NULL)
        {
            itsPredictionModel->__setItsSMSWTD_BLK(NULL);
        }
    __setItsPredictionModel(p_PredictionModel);
}

void SMSWTD_BLK::_clearItsPredictionModel(void) {
    NOTIFY_RELATION_CLEARED("itsPredictionModel");
    itsPredictionModel = NULL;
}

void SMSWTD_BLK::destroy(void) {
    itsDataProcessor.destroy();
    OMReactive::destroy();
}

SMSWTD_BLK::p_SMSWTD_BLK_C* SMSWTD_BLK::getP_SMSWTD_BLK(void) const {
    return (SMSWTD_BLK::p_SMSWTD_BLK_C*) &p_SMSWTD_BLK;
}

SMSWTD_BLK::p_SMSWTD_BLK_C* SMSWTD_BLK::get_p_SMSWTD_BLK(void) const {
    return (SMSWTD_BLK::p_SMSWTD_BLK_C*) &p_SMSWTD_BLK;
}

SMSWTD_BLK::p_SMSWTD_BLK_1_C* SMSWTD_BLK::getP_SMSWTD_BLK_1(void) const {
    return (SMSWTD_BLK::p_SMSWTD_BLK_1_C*) &p_SMSWTD_BLK_1;
}

SMSWTD_BLK::p_SMSWTD_BLK_1_C* SMSWTD_BLK::get_p_SMSWTD_BLK_1(void) const {
    return (SMSWTD_BLK::p_SMSWTD_BLK_1_C*) &p_SMSWTD_BLK_1;
}

const int SMSWTD_BLK::getWaterPressure(void) const {
    return waterPressure;
}

void SMSWTD_BLK::setWaterPressure(const int p_waterPressure) {
    waterPressure = p_waterPressure;
}

const int SMSWTD_BLK::getWindSpeed(void) const {
    return windSpeed;
}

void SMSWTD_BLK::setWindSpeed(const int p_windSpeed) {
    windSpeed = p_windSpeed;
}

void SMSWTD_BLK::setItsDataCollector(DataCollector* const p_DataCollector) {
    if(p_DataCollector != NULL)
        {
            p_DataCollector->_setItsSMSWTD_BLK(this);
        }
    _setItsDataCollector(p_DataCollector);
}

void SMSWTD_BLK::setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(p_ImageCollector != NULL)
        {
            p_ImageCollector->_setItsSMSWTD_BLK(this);
        }
    _setItsImageCollector(p_ImageCollector);
}

void SMSWTD_BLK::initRelations(void) {
    {
        
        get_p_SMSWTD_BLK()->setItsInt_waterPressure_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor()->getItsInt_waterPressure_ProxyFlowPropertyInterface());
        
    }
    {
        
        get_p_SMSWTD_BLK_1()->setItsInt_windSpeed_ProxyFlowPropertyInterface(itsDataProcessor.get_p_DataProcessor_1()->getItsInt_windSpeed_ProxyFlowPropertyInterface());
        
    }
}

void SMSWTD_BLK::__setItsDataCollector(DataCollector* const p_DataCollector) {
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

void SMSWTD_BLK::_setItsDataCollector(DataCollector* const p_DataCollector) {
    if(itsDataCollector != NULL)
        {
            itsDataCollector->__setItsSMSWTD_BLK(NULL);
        }
    __setItsDataCollector(p_DataCollector);
}

void SMSWTD_BLK::_clearItsDataCollector(void) {
    NOTIFY_RELATION_CLEARED("itsDataCollector");
    itsDataCollector = NULL;
}

void SMSWTD_BLK::__setItsImageCollector(ImageCollector* const p_ImageCollector) {
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

void SMSWTD_BLK::_setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(itsImageCollector != NULL)
        {
            itsImageCollector->__setItsSMSWTD_BLK(NULL);
        }
    __setItsImageCollector(p_ImageCollector);
}

void SMSWTD_BLK::_clearItsImageCollector(void) {
    NOTIFY_RELATION_CLEARED("itsImageCollector");
    itsImageCollector = NULL;
}

void SMSWTD_BLK::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDataProcessor.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD_BLK::Activated_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Activated");
    rootState_subState = Activated;
    rootState_active = Activated;
    state_2_entDef();
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_3");
}

void SMSWTD_BLK::Activated_exit(void) {
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

IOxfReactive::TakeEventStatus SMSWTD_BLK::Activated_processEvent(void) {
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

IOxfReactive::TakeEventStatus SMSWTD_BLK::state_3_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

void SMSWTD_BLK::state_2_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_2");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.Activated.state_2.DataProcessorStart");
    state_2_subState = DataProcessorStart;
    state_2_active = DataProcessorStart;
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus SMSWTD_BLK::state_2_processEvent(void) {
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

void SMSWTD_BLK::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Deactivated");
        rootState_subState = Deactivated;
        rootState_active = Deactivated;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SMSWTD_BLK::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Deactivated
        case Deactivated:
        {
            if(IS_EVENT_TYPE_OF(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Deactivated");
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
void OMAnimatedSMSWTD_BLK::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
}

void OMAnimatedSMSWTD_BLK::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsDataProcessor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataProcessor);
    aomsRelations->addRelation("itsDataCollector", false, true);
    if(myReal->itsDataCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataCollector);
        }
}

void OMAnimatedSMSWTD_BLK::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SMSWTD_BLK::Deactivated:
        {
            Deactivated_serializeStates(aomsState);
        }
        break;
        case SMSWTD_BLK::Activated:
        {
            Activated_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSWTD_BLK::Deactivated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Deactivated");
}

void OMAnimatedSMSWTD_BLK::Activated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated");
    state_2_serializeStates(aomsState);
    state_3_serializeStates(aomsState);
}

void OMAnimatedSMSWTD_BLK::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_3");
}

void OMAnimatedSMSWTD_BLK::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2");
    switch (myReal->state_2_subState) {
        case SMSWTD_BLK::DataProcessorStart:
        {
            DataProcessorStart_serializeStates(aomsState);
        }
        break;
        case SMSWTD_BLK::DataProcessingDone:
        {
            DataProcessingDone_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSWTD_BLK::DataProcessorStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2.DataProcessorStart");
}

void OMAnimatedSMSWTD_BLK::DataProcessingDone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activated.state_2.DataProcessingDone");
}
//#]

IMPLEMENT_REACTIVE_META_P(SMSWTD_BLK, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSMSWTD_BLK)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.cpp
*********************************************************************/
