/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImage
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SateliteImage.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsImageCollector
#include "ImageCollector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SateliteImage_SateliteImage_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SateliteImage
SateliteImage::SateliteImage(void) : itsSMSWTD(NULL), itsImageCollector(NULL) {
    NOTIFY_CONSTRUCTOR(SateliteImage, SateliteImage(), 0, SMSWTD_SYSTEM_DESIGN_SateliteImage_SateliteImage_SERIALIZE);
}

SateliteImage::~SateliteImage(void) {
    NOTIFY_DESTRUCTOR(~SateliteImage, true);
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
            NOTIFY_RELATION_CLEARED("itsImageCollector");
            const SateliteImage* p_SateliteImage = itsImageCollector->getItsSateliteImage();
            if(p_SateliteImage != NULL)
                {
                    itsImageCollector->__setItsSateliteImage(NULL);
                }
            itsImageCollector = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void SateliteImage::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSateliteImage(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void SateliteImage::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_ImageCollector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsImageCollector", p_ImageCollector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsImageCollector");
        }
}

void SateliteImage::_setItsImageCollector(ImageCollector* const p_ImageCollector) {
    if(itsImageCollector != NULL)
        {
            itsImageCollector->__setItsSateliteImage(NULL);
        }
    __setItsImageCollector(p_ImageCollector);
}

void SateliteImage::_clearItsImageCollector(void) {
    NOTIFY_RELATION_CLEARED("itsImageCollector");
    itsImageCollector = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSateliteImage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    aomsRelations->addRelation("itsImageCollector", false, true);
    if(myReal->itsImageCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsImageCollector);
        }
}
//#]

IMPLEMENT_META_P(SateliteImage, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSateliteImage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/
