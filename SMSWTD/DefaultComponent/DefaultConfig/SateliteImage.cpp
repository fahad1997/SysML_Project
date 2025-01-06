/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImage
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/

//## auto_generated
#include "SateliteImage.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsImageCollector
#include "ImageCollector.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class SateliteImage
SateliteImage::SateliteImage(void) : itsSMSWTD(NULL), itsImageCollector(NULL) {
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
    if(itsImageCollector != NULL)
        {
            const SateliteImage* p_SateliteImage = itsImageCollector->getItsSateliteImage();
            if(p_SateliteImage != NULL)
                {
                    itsImageCollector->__setItsSateliteImage(NULL);
                }
            itsImageCollector = NULL;
        }
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

const ImageCollector* SateliteImage::getItsImageCollector(void) const {
    return itsImageCollector;
}

void SateliteImage::setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(p_ImageCollector != NULL)
        {
            p_ImageCollector->_setItsSateliteImage(this);
        }
    _setItsImageCollector(p_ImageCollector);
}

void SateliteImage::__setItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector = p_ImageCollector;
}

void SateliteImage::_setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(itsImageCollector != NULL)
        {
            itsImageCollector->__setItsSateliteImage(NULL);
        }
    __setItsImageCollector(p_ImageCollector);
}

void SateliteImage::_clearItsImageCollector(void) {
    itsImageCollector = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/
