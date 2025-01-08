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
//## link itsSMSWTD_CONTROLLER
#include "SMSWTD_CONTROLLER.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_ImageCollector_ImageCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageCollector
ImageCollector::ImageCollector(void) : itsSMSWTD_CONTROLLER(NULL), itsSateliteImage(NULL) {
    NOTIFY_CONSTRUCTOR(ImageCollector, ImageCollector(), 0, SMSWTD_SYSTEM_DESIGN_ImageCollector_ImageCollector_SERIALIZE);
}

ImageCollector::~ImageCollector(void) {
    NOTIFY_DESTRUCTOR(~ImageCollector, true);
    cleanUpRelations();
}

const SMSWTD_CONTROLLER* ImageCollector::getItsSMSWTD_CONTROLLER(void) const {
    return itsSMSWTD_CONTROLLER;
}

void ImageCollector::setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(p_SMSWTD_CONTROLLER != NULL)
        {
            p_SMSWTD_CONTROLLER->_setItsImageCollector(this);
        }
    _setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
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
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
            const ImageCollector* p_ImageCollector = itsSMSWTD_CONTROLLER->getItsImageCollector();
            if(p_ImageCollector != NULL)
                {
                    itsSMSWTD_CONTROLLER->__setItsImageCollector(NULL);
                }
            itsSMSWTD_CONTROLLER = NULL;
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

void ImageCollector::__setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
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

void ImageCollector::_setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER) {
    if(itsSMSWTD_CONTROLLER != NULL)
        {
            itsSMSWTD_CONTROLLER->__setItsImageCollector(NULL);
        }
    __setItsSMSWTD_CONTROLLER(p_SMSWTD_CONTROLLER);
}

void ImageCollector::_clearItsSMSWTD_CONTROLLER(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_CONTROLLER");
    itsSMSWTD_CONTROLLER = NULL;
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
    aomsRelations->addRelation("itsSMSWTD_CONTROLLER", false, true);
    if(myReal->itsSMSWTD_CONTROLLER)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_CONTROLLER);
        }
}
//#]

IMPLEMENT_META_P(ImageCollector, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedImageCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/
