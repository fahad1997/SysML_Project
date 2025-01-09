/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PredictionModel.h"
//## link itsSMSWTD_CONTROLLER
#include "SMSWTD_CONTROLLER.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_PREDICTION_MODEL_PredictionModel_PredictionModel_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_PREDICTION_MODEL

//## class PredictionModel
PredictionModel::PredictionModel(void) : itsSMSWTD_CONTROLLER(NULL) {
    NOTIFY_CONSTRUCTOR(PredictionModel, PredictionModel(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_PREDICTION_MODEL_PredictionModel_PredictionModel_SERIALIZE);
}

PredictionModel::~PredictionModel(void) {
    NOTIFY_DESTRUCTOR(~PredictionModel, true);
    cleanUpRelations();
}

void PredictionModel::cleanUpRelations(void) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
            const PredictionModel* p_PredictionModel = itsSMSWTD_CONTROLLER->getItsPredictionModel();
            if(p_PredictionModel != NULL)
                {
                    itsSMSWTD_CONTROLLER->__setItsPredictionModel(NULL);
                }
            itsSMSWTD_CONTROLLER = NULL;
        }
}

const SMSWTD_CONTROLLER* PredictionModel::getItsSMSWTD_CONTROLLER(void) const {
    return itsSMSWTD_CONTROLLER;
}

void PredictionModel::setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            p_SMSWTD_CONTROLLER->_setItsPredictionModel(this);
        }
    _setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void PredictionModel::__setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    itsSMSWTD_CONTROLLER = p_SMSWTD_CONTROLLER;
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_CONTROLLER", p_SMSWTD_CONTROLLER, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
        }
}

void PredictionModel::_setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            itsSMSWTD_CONTROLLER->__setItsPredictionModel(NULL);
        }
    __setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void PredictionModel::_clearItsSMSWTD_CONTROLLER(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
    itsSMSWTD_CONTROLLER = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPredictionModel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD_CONTROLLER", false, true);
    if(myReal->itsSMSWTD_CONTROLLER)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_CONTROLLER);
        }
}
//#]

IMPLEMENT_META_P(PredictionModel, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_PREDICTION_MODEL, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_PREDICTION_MODEL, false, OMAnimatedPredictionModel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/
