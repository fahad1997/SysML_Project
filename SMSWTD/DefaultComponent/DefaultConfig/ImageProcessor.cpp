/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/

//## auto_generated
#include "ImageProcessor.h"
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsDataStorage
#include "DataStorage.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageProcessor
ImageProcessor::ImageProcessor(void) : itsDataPublisher(NULL), itsDataStorage(NULL) {
}

ImageProcessor::~ImageProcessor(void) {
    cleanUpRelations();
}

const DataPublisher* ImageProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void ImageProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
}

const DataStorage* ImageProcessor::getItsDataStorage(void) const {
    return itsDataStorage;
}

void ImageProcessor::setItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage = p_DataStorage;
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsDataPublisher != NULL)
        {
            itsDataPublisher = NULL;
        }
    if(itsDataStorage != NULL)
        {
            itsDataStorage = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
