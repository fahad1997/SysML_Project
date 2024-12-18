/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/

//## auto_generated
#include "ImageProcessor.h"
//## link itsCloudStorageInterface
#include "CloudStorageInterface.h"
//## link itsDashboardPublisher
#include "DashboardPublisher.h"
//## link itsGeographicalConfiguration
#include "GeographicalConfiguration.h"
//## link itsPredictionModelPublisher
#include "PredictionModelPublisher.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageProcessor
ImageProcessor::ImageProcessor(void) : itsCloudStorageInterface(NULL), itsDashboardPublisher(NULL), itsPredictionModelPublisher(NULL) {
}

ImageProcessor::~ImageProcessor(void) {
    cleanUpRelations();
}

const CloudStorageInterface* ImageProcessor::getItsCloudStorageInterface(void) const {
    return itsCloudStorageInterface;
}

void ImageProcessor::setItsCloudStorageInterface(CloudStorageInterface* const p_CloudStorageInterface) {
    itsCloudStorageInterface = p_CloudStorageInterface;
}

const DashboardPublisher* ImageProcessor::getItsDashboardPublisher(void) const {
    return itsDashboardPublisher;
}

void ImageProcessor::setItsDashboardPublisher(DashboardPublisher* const p_DashboardPublisher) {
    itsDashboardPublisher = p_DashboardPublisher;
}

OMIterator<GeographicalConfiguration*> ImageProcessor::getItsGeographicalConfiguration(void) const {
    OMIterator<GeographicalConfiguration*> iter(itsGeographicalConfiguration);
    return iter;
}

void ImageProcessor::addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.add(p_GeographicalConfiguration);
}

void ImageProcessor::removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    itsGeographicalConfiguration.remove(p_GeographicalConfiguration);
}

void ImageProcessor::clearItsGeographicalConfiguration(void) {
    itsGeographicalConfiguration.removeAll();
}

const PredictionModelPublisher* ImageProcessor::getItsPredictionModelPublisher(void) const {
    return itsPredictionModelPublisher;
}

void ImageProcessor::setItsPredictionModelPublisher(PredictionModelPublisher* const p_PredictionModelPublisher) {
    itsPredictionModelPublisher = p_PredictionModelPublisher;
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsCloudStorageInterface != NULL)
        {
            itsCloudStorageInterface = NULL;
        }
    if(itsDashboardPublisher != NULL)
        {
            itsDashboardPublisher = NULL;
        }
    {
        itsGeographicalConfiguration.removeAll();
    }
    if(itsPredictionModelPublisher != NULL)
        {
            itsPredictionModelPublisher = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
