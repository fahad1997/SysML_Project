/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/

//## auto_generated
#include "ImageCollector.h"
//## link itsSateliteImage
#include "SateliteImage.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class ImageCollector
ImageCollector::ImageCollector(void) : itsSateliteImage(NULL) {
}

ImageCollector::~ImageCollector(void) {
    cleanUpRelations();
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
    if(itsSateliteImage != NULL)
        {
            const ImageCollector* p_ImageCollector = itsSateliteImage->getItsImageCollector();
            if(p_ImageCollector != NULL)
                {
                    itsSateliteImage->__setItsImageCollector(NULL);
                }
            itsSateliteImage = NULL;
        }
}

void ImageCollector::__setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    itsSateliteImage = p_SateliteImage;
}

void ImageCollector::_setItsSateliteImage(SateliteImage* const p_SateliteImage) {
    if(itsSateliteImage != NULL)
        {
            itsSateliteImage->__setItsImageCollector(NULL);
        }
    __setItsSateliteImage(p_SateliteImage);
}

void ImageCollector::_clearItsSateliteImage(void) {
    itsSateliteImage = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/
