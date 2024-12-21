/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

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
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_ImageProcessor_ImageProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageProcessor
ImageProcessor::ImageProcessor(void) : itsCloudStorageInterface(NULL), itsDashboardPublisher(NULL), itsPredictionModelPublisher(NULL) {
    NOTIFY_CONSTRUCTOR(ImageProcessor, ImageProcessor(), 0, SMSWTD_SYSTEM_ANALYSIS_ImageProcessor_ImageProcessor_SERIALIZE);
}

ImageProcessor::~ImageProcessor(void) {
    NOTIFY_DESTRUCTOR(~ImageProcessor, true);
    cleanUpRelations();
}

const CloudStorageInterface* ImageProcessor::getItsCloudStorageInterface(void) const {
    return itsCloudStorageInterface;
}

void ImageProcessor::setItsCloudStorageInterface(CloudStorageInterface* const p_CloudStorageInterface) {
    itsCloudStorageInterface = p_CloudStorageInterface;
    if(p_CloudStorageInterface != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCloudStorageInterface", p_CloudStorageInterface, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCloudStorageInterface");
        }
}

const DashboardPublisher* ImageProcessor::getItsDashboardPublisher(void) const {
    return itsDashboardPublisher;
}

void ImageProcessor::setItsDashboardPublisher(DashboardPublisher* const p_DashboardPublisher) {
    itsDashboardPublisher = p_DashboardPublisher;
    if(p_DashboardPublisher != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDashboardPublisher", p_DashboardPublisher, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDashboardPublisher");
        }
}

OMIterator<GeographicalConfiguration*> ImageProcessor::getItsGeographicalConfiguration(void) const {
    OMIterator<GeographicalConfiguration*> iter(itsGeographicalConfiguration);
    return iter;
}

void ImageProcessor::addItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    if(p_GeographicalConfiguration != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGeographicalConfiguration", p_GeographicalConfiguration, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGeographicalConfiguration");
        }
    itsGeographicalConfiguration.add(p_GeographicalConfiguration);
}

void ImageProcessor::removeItsGeographicalConfiguration(GeographicalConfiguration* const p_GeographicalConfiguration) {
    NOTIFY_RELATION_ITEM_REMOVED("itsGeographicalConfiguration", p_GeographicalConfiguration);
    itsGeographicalConfiguration.remove(p_GeographicalConfiguration);
}

void ImageProcessor::clearItsGeographicalConfiguration(void) {
    NOTIFY_RELATION_CLEARED("itsGeographicalConfiguration");
    itsGeographicalConfiguration.removeAll();
}

const PredictionModelPublisher* ImageProcessor::getItsPredictionModelPublisher(void) const {
    return itsPredictionModelPublisher;
}

void ImageProcessor::setItsPredictionModelPublisher(PredictionModelPublisher* const p_PredictionModelPublisher) {
    itsPredictionModelPublisher = p_PredictionModelPublisher;
    if(p_PredictionModelPublisher != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPredictionModelPublisher", p_PredictionModelPublisher, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPredictionModelPublisher");
        }
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsCloudStorageInterface != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloudStorageInterface");
            itsCloudStorageInterface = NULL;
        }
    if(itsDashboardPublisher != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboardPublisher");
            itsDashboardPublisher = NULL;
        }
    {
        itsGeographicalConfiguration.removeAll();
    }
    if(itsPredictionModelPublisher != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPredictionModelPublisher");
            itsPredictionModelPublisher = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedImageProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDashboardPublisher", false, true);
    if(myReal->itsDashboardPublisher)
        {
            aomsRelations->ADD_ITEM(myReal->itsDashboardPublisher);
        }
    aomsRelations->addRelation("itsCloudStorageInterface", false, true);
    if(myReal->itsCloudStorageInterface)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloudStorageInterface);
        }
    aomsRelations->addRelation("itsGeographicalConfiguration", false, false);
    {
        OMIterator<GeographicalConfiguration*> iter(myReal->itsGeographicalConfiguration);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsPredictionModelPublisher", false, true);
    if(myReal->itsPredictionModelPublisher)
        {
            aomsRelations->ADD_ITEM(myReal->itsPredictionModelPublisher);
        }
}
//#]

IMPLEMENT_META_P(ImageProcessor, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedImageProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
