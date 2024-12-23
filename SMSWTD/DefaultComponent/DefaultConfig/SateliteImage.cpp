/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImage
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/

//## auto_generated
#include "SateliteImage.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package Default

//## class SateliteImage
SateliteImage::SateliteImage(void) : itsSMSWTD(NULL) {
}

SateliteImage::~SateliteImage(void) {
    cleanUpRelations();
}

const SMSWTD* SateliteImage::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void SateliteImage::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSateliteImage(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void SateliteImage::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const SateliteImage* p_SateliteImage = itsSMSWTD->getItsSateliteImage();
            if(p_SateliteImage != NULL)
                {
                    itsSMSWTD->__setItsSateliteImage(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void SateliteImage::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void SateliteImage::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSateliteImage(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void SateliteImage::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/
