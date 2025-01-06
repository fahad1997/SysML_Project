/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/

//## auto_generated
#include "PredictionModel.h"
//## link itsSMSWTD_BLK
#include "SMSWTD_BLK.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class PredictionModel
PredictionModel::PredictionModel(void) : itsSMSWTD_BLK(NULL) {
}

PredictionModel::~PredictionModel(void) {
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
}

void PredictionModel::_setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(itsSMSWTD_BLK != NULL)
        {
            itsSMSWTD_BLK->__setItsPredictionModel(NULL);
        }
    __setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void PredictionModel::_clearItsSMSWTD_BLK(void) {
    itsSMSWTD_BLK = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.cpp
*********************************************************************/
