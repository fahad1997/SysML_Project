/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PredictionModel.h"
//## link itsSMSWTD_BLK
#include "SMSWTD_BLK.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PredictionModel_PredictionModel_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class PredictionModel
PredictionModel::PredictionModel(void) : itsSMSWTD_BLK(NULL) {
    NOTIFY_CONSTRUCTOR(PredictionModel, PredictionModel(), 0, SMSWTD_SYSTEM_DESIGN_PredictionModel_PredictionModel_SERIALIZE);
}

PredictionModel::~PredictionModel(void) {
    NOTIFY_DESTRUCTOR(~PredictionModel, true);
    cleanUpRelations();
}

const SMSWTD_BLK* PredictionModel::getItsSMSWTD_BLK(void) const {
    return itsSMSWTD_BLK;
}

void PredictionModel::setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(p_SMSWTD_BLK != NULL)
        {
            p_SMSWTD_BLK->_setItsPredictionModel(this);
        }
    _setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void PredictionModel::cleanUpRelations(void) {
    if(itsSMSWTD_BLK != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
            const PredictionModel* p_PredictionModel = itsSMSWTD_BLK->getItsPredictionModel();
            if(p_PredictionModel != NULL)
                {
                    itsSMSWTD_BLK->__setItsPredictionModel(NULL);
                }
            itsSMSWTD_BLK = NULL;
        }
}

void PredictionModel::__setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    itsSMSWTD_BLK = p_SMSWTD_BLK;
    if(p_SMSWTD_BLK != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_BLK", p_SMSWTD_BLK, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
        }
}

void PredictionModel::_setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(itsSMSWTD_BLK != NULL)
        {
            itsSMSWTD_BLK->__setItsPredictionModel(NULL);
        }
    __setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void PredictionModel::_clearItsSMSWTD_BLK(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
    itsSMSWTD_BLK = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPredictionModel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD_BLK", false, true);
    if(myReal->itsSMSWTD_BLK)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_BLK);
        }
}
//#]

IMPLEMENT_META_P(PredictionModel, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedPredictionModel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/
