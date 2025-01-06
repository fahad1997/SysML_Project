/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/

//## auto_generated
#include "ImageProcessor.h"
//## auto_generated
#include <omthread.h>
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsImageCollector
#include "ImageCollector.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
ImageProcessor::ImageProcessor(IOxfActive* const theActiveContext) : DataProcessor(), itsDataPublisher(NULL), itsImageCollector(NULL) {
    setActiveContext(theActiveContext, false);
}

ImageProcessor::~ImageProcessor(void) {
    cleanUpRelations();
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsDataPublisher != NULL)
        {
            itsDataPublisher = NULL;
        }
    if(itsImageCollector != NULL)
        {
            itsImageCollector = NULL;
        }
}

const DataPublisher* ImageProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void ImageProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
}

const ImageCollector* ImageProcessor::getItsImageCollector(void) const {
    return itsImageCollector;
}

void ImageProcessor::setItsImageCollector(ImageCollector* const p_ImageCollector) {
    itsImageCollector = p_ImageCollector;
}

bool ImageProcessor::startBehavior(void) {
    bool done = false;
    done = DataProcessor::startBehavior();
    return done;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
