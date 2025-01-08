/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ImageCollector.h"
//## link itsSateliteImage
#include "SateliteImage.h"
//## link itsSMSWTD_BLK
#include "SMSWTD_BLK.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_ImageCollector_ImageCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageCollector
ImageCollector::ImageCollector(void) : itsSMSWTD_BLK(NULL), itsSateliteImage(NULL) {
    NOTIFY_CONSTRUCTOR(ImageCollector, ImageCollector(), 0, SMSWTD_SYSTEM_DESIGN_ImageCollector_ImageCollector_SERIALIZE);
}

ImageCollector::~ImageCollector(void) {
    NOTIFY_DESTRUCTOR(~ImageCollector, true);
    cleanUpRelations();
}

const SMSWTD_BLK* ImageCollector::getItsSMSWTD_BLK(void) const {
    return itsSMSWTD_BLK;
}

void ImageCollector::setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(p_SMSWTD_BLK != NULL)
        {
            p_SMSWTD_BLK->_setItsImageCollector(this);
        }
    _setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

const SateliteImage* ImageCollector::getItsSateliteImage(void) const {
    return itsSateliteImage;
}

void ImageCollector::setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    if(p_SateliteImage != NULL)
        {
            p_SateliteImage->_setItsImageCollector(this);
        }
    _setItsSateliteImage(p_SateliteImage);
}

void ImageCollector::cleanUpRelations(void) {
    if(itsSMSWTD_BLK != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
            const ImageCollector* p_ImageCollector = itsSMSWTD_BLK->getItsImageCollector();
            if(p_ImageCollector != NULL)
                {
                    itsSMSWTD_BLK->__setItsImageCollector(NULL);
                }
            itsSMSWTD_BLK = NULL;
        }
    if(itsSateliteImage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSateliteImage");
            const ImageCollector* p_ImageCollector = itsSateliteImage->getItsImageCollector();
            if(p_ImageCollector != NULL)
                {
                    itsSateliteImage->__setItsImageCollector(NULL);
                }
            itsSateliteImage = NULL;
        }
}

void ImageCollector::__setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
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

void ImageCollector::_setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK) {
    if(itsSMSWTD_BLK != NULL)
        {
            itsSMSWTD_BLK->__setItsImageCollector(NULL);
        }
    __setItsSMSWTD_BLK(p_SMSWTD_BLK);
}

void ImageCollector::_clearItsSMSWTD_BLK(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_BLK");
    itsSMSWTD_BLK = NULL;
}

void ImageCollector::__setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    itsSateliteImage = p_SateliteImage;
    if(p_SateliteImage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSateliteImage", p_SateliteImage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSateliteImage");
        }
}

void ImageCollector::_setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    if(itsSateliteImage != NULL)
        {
            itsSateliteImage->__setItsImageCollector(NULL);
        }
    __setItsSateliteImage(p_SateliteImage);
}

void ImageCollector::_clearItsSateliteImage(void) {
    NOTIFY_RELATION_CLEARED("itsSateliteImage");
    itsSateliteImage = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedImageCollector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSateliteImage", false, true);
    if(myReal->itsSateliteImage)
        {
            aomsRelations->ADD_ITEM(myReal->itsSateliteImage);
        }
    aomsRelations->addRelation("itsSMSWTD_BLK", false, true);
    if(myReal->itsSMSWTD_BLK)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_BLK);
        }
}
//#]

IMPLEMENT_META_P(ImageCollector, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedImageCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/
