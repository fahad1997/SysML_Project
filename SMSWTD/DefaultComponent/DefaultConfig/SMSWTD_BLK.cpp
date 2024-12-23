/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_BLK
//!	Generated Date	: Mon, 23, Dec 2024  
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
//## classInstance itsDataCollector
#include "DataCollector.h"
//## classInstance itsDataProcessor
#include "DataProcessor.h"
//## classInstance itsImageCollector
#include "ImageCollector.h"
//## link itsPredictionModel
#include "PredictionModel.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SMSWTD_BLK_SMSWTD_BLK_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD_BLK
SMSWTD_BLK::SMSWTD_BLK(IOxfActive* const theActiveContext) : OMReactive(), itsDashboard(NULL), itsPredictionModel(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD_BLK, SMSWTD_BLK(), 0, SMSWTD_SYSTEM_DESIGN_SMSWTD_BLK_SMSWTD_BLK_SERIALIZE);
    setActiveContext(theActiveContext, false);
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

OMIterator<DataCollector*> SMSWTD_BLK::getItsDataCollector(void) const {
    OMIterator<DataCollector*> iter(itsDataCollector);
    return iter;
}

DataCollector* SMSWTD_BLK::newItsDataCollector(void) {
    DataCollector* newDataCollector = new DataCollector;
    itsDataCollector.add(newDataCollector);
    NOTIFY_RELATION_ITEM_ADDED("itsDataCollector", newDataCollector, true, false);
    return newDataCollector;
}

void SMSWTD_BLK::deleteItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector.remove(p_DataCollector);
    NOTIFY_RELATION_ITEM_REMOVED("itsDataCollector", p_DataCollector);
    delete p_DataCollector;
}

OMIterator<DataProcessor*> SMSWTD_BLK::getItsDataProcessor(void) const {
    OMIterator<DataProcessor*> iter(itsDataProcessor);
    return iter;
}

DataProcessor* SMSWTD_BLK::newItsDataProcessor(void) {
    DataProcessor* newDataProcessor = new DataProcessor;
    itsDataProcessor.add(newDataProcessor);
    NOTIFY_RELATION_ITEM_ADDED("itsDataProcessor", newDataProcessor, true, false);
    return newDataProcessor;
}

void SMSWTD_BLK::deleteItsDataProcessor(DataProcessor* const p_DataProcessor) {
    itsDataProcessor.remove(p_DataProcessor);
    NOTIFY_RELATION_ITEM_REMOVED("itsDataProcessor", p_DataProcessor);
    p_DataProcessor->destroy();
}

OMIterator<ImageCollector*> SMSWTD_BLK::getItsImageCollector(void) const {
    OMIterator<ImageCollector*> iter(itsImageCollector);
    return iter;
}

ImageCollector* SMSWTD_BLK::newItsImageCollector(void) {
    ImageCollector* newImageCollector = new ImageCollector;
    itsImageCollector.add(newImageCollector);
    NOTIFY_RELATION_ITEM_ADDED("itsImageCollector", newImageCollector, true, false);
    return newImageCollector;
}

void SMSWTD_BLK::deleteItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector.remove(p_ImageCollector);
    NOTIFY_RELATION_ITEM_REMOVED("itsImageCollector", p_ImageCollector);
    delete p_ImageCollector;
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
    {
        OMIterator<DataProcessor*> iter(itsDataProcessor);
        while (*iter){
            done &= (*iter)->startBehavior();
            iter++;
        }
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
}

void SMSWTD_BLK::cleanUpRelations(void) {
    {
        OMIterator<ImageCollector*> iter(itsImageCollector);
        while (*iter){
            deleteItsImageCollector(*iter);
            iter.reset();
        }
    }
    itsDataProcessor.removeAll();
    {
        OMIterator<DataCollector*> iter(itsDataCollector);
        while (*iter){
            deleteItsDataCollector(*iter);
            iter.reset();
        }
    }
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
    {
        OMIterator<DataProcessor*> iter(itsDataProcessor);
        while (*iter){
            (*iter)->destroy();
            iter++;
        }
    }
    OMReactive::destroy();
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
    // State Deactivated
    if(rootState_active == Deactivated)
        {
            if(IS_EVENT_TYPE_OF(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Deactivated");
                    NOTIFY_STATE_ENTERED("ROOT.Activated");
                    rootState_subState = Activated;
                    rootState_active = Activated;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD_BLK::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", true, false);
    {
        OMIterator<DataProcessor*> iter(myReal->itsDataProcessor);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsImageCollector", true, false);
    {
        OMIterator<ImageCollector*> iter(myReal->itsImageCollector);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsDataCollector", true, false);
    {
        OMIterator<DataCollector*> iter(myReal->itsDataCollector);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
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
}
//#]

IMPLEMENT_REACTIVE_META_P(SMSWTD_BLK, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSMSWTD_BLK)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.cpp
*********************************************************************/
