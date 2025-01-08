/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ImageProcessor.h"
//## link itsDataPublisher
#include "DataPublisher.h"
//## link itsImageCollector
#include "ImageCollector.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_ImageProcessor_ImageProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
ImageProcessor::ImageProcessor(IOxfActive* const theActiveContext) : DataProcessor(), itsDataPublisher(NULL), itsImageCollector(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ImageProcessor, ImageProcessor(), 0, SMSWTD_SYSTEM_DESIGN_ImageProcessor_ImageProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

ImageProcessor::~ImageProcessor(void) {
    NOTIFY_DESTRUCTOR(~ImageProcessor, false);
    cleanUpRelations();
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsDataPublisher != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataPublisher");
            itsDataPublisher = NULL;
        }
    if(itsImageCollector != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsImageCollector");
            itsImageCollector = NULL;
        }
}

const DataPublisher* ImageProcessor::getItsDataPublisher(void) const {
    return itsDataPublisher;
}

void ImageProcessor::setItsDataPublisher(DataPublisher* const p_DataPublisher) {
    itsDataPublisher = p_DataPublisher;
    if(p_DataPublisher != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataPublisher", p_DataPublisher, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataPublisher");
        }
}

const ImageCollector* ImageProcessor::getItsImageCollector(void) const {
    return itsImageCollector;
}

void ImageProcessor::setItsImageCollector(ImageCollector* const p_ImageCollector) {
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

bool ImageProcessor::startBehavior(void) {
    bool done = false;
    done = DataProcessor::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedImageProcessor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataProcessor::serializeAttributes(aomsAttributes);
}

void OMAnimatedImageProcessor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsImageCollector", false, true);
    if(myReal->itsImageCollector)
        {
            aomsRelations->ADD_ITEM(myReal->itsImageCollector);
        }
    aomsRelations->addRelation("itsDataPublisher", false, true);
    if(myReal->itsDataPublisher)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataPublisher);
        }
    OMAnimatedDataProcessor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(ImageProcessor, SMSWTD_SYSTEM::DESIGN, false, DataProcessor, OMAnimatedDataProcessor, OMAnimatedImageProcessor)

OMINIT_SUPERCLASS(DataProcessor, OMAnimatedDataProcessor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
