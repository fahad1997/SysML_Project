/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_BLK
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
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
//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD_BLK
SMSWTD_BLK::SMSWTD_BLK(IOxfActive* const theActiveContext) : OMReactive(), itsDashboard(NULL), itsPredictionModel(NULL) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SMSWTD_BLK::~SMSWTD_BLK(void) {
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
    return newDataCollector;
}

void SMSWTD_BLK::deleteItsDataCollector(DataCollector* const p_DataCollector) {
    itsDataCollector.remove(p_DataCollector);
    delete p_DataCollector;
}

OMIterator<DataProcessor*> SMSWTD_BLK::getItsDataProcessor(void) const {
    OMIterator<DataProcessor*> iter(itsDataProcessor);
    return iter;
}

DataProcessor* SMSWTD_BLK::newItsDataProcessor(void) {
    DataProcessor* newDataProcessor = new DataProcessor;
    itsDataProcessor.add(newDataProcessor);
    return newDataProcessor;
}

void SMSWTD_BLK::deleteItsDataProcessor(DataProcessor* const p_DataProcessor) {
    itsDataProcessor.remove(p_DataProcessor);
    p_DataProcessor->destroy();
}

OMIterator<ImageCollector*> SMSWTD_BLK::getItsImageCollector(void) const {
    OMIterator<ImageCollector*> iter(itsImageCollector);
    return iter;
}

ImageCollector* SMSWTD_BLK::newItsImageCollector(void) {
    ImageCollector* newImageCollector = new ImageCollector;
    itsImageCollector.add(newImageCollector);
    return newImageCollector;
}

void SMSWTD_BLK::deleteItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector.remove(p_ImageCollector);
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
            const SMSWTD_BLK* p_SMSWTD_BLK = itsDashboard->getItsSMSWTD_BLK();
            if(p_SMSWTD_BLK != NULL)
                {
                    itsDashboard->__setItsSMSWTD_BLK(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsPredictionModel != NULL)
        {
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
}

void SMSWTD_BLK::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsSMSWTD_BLK(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void SMSWTD_BLK::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

void SMSWTD_BLK::__setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    itsPredictionModel = p_PredictionModel;
}

void SMSWTD_BLK::_setItsPredictionModel(PredictionModel* const p_PredictionModel) {
    if(itsPredictionModel != NULL)
        {
            itsPredictionModel->__setItsSMSWTD_BLK(NULL);
        }
    __setItsPredictionModel(p_PredictionModel);
}

void SMSWTD_BLK::_clearItsPredictionModel(void) {
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
        rootState_subState = Deactivated;
        rootState_active = Deactivated;
    }
}

IOxfReactive::TakeEventStatus SMSWTD_BLK::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Deactivated
    if(rootState_active == Deactivated)
        {
            if(IS_EVENT_TYPE_OF(evActivateSMSWTD_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    rootState_subState = Activated;
                    rootState_active = Activated;
                    res = eventConsumed;
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.cpp
*********************************************************************/
