/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/

//## auto_generated
#include "ImageCollector.h"
//## link itsImageProcessor
#include "ImageProcessor.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageCollector
ImageCollector::ImageCollector(void) : itsImageProcessor(NULL) {
}

ImageCollector::~ImageCollector(void) {
    cleanUpRelations();
}

const ImageProcessor* ImageCollector::getItsImageProcessor(void) const {
    return itsImageProcessor;
}

void ImageCollector::setItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    itsImageProcessor = p_ImageProcessor;
}

void ImageCollector::cleanUpRelations(void) {
    if(itsImageProcessor != NULL)
        {
            itsImageProcessor = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/
