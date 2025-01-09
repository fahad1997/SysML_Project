/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
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
//## link itsDataProcessor
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_ImageProcessor_ImageProcessor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class ImageProcessor
ImageProcessor::ImageProcessor(IOxfActive* const theActiveContext) : OMReactive(), itsDataPublisher(NULL), itsImageCollector(NULL), itsDataProcessor(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ImageProcessor, ImageProcessor(), 0, SMSWTD_SYSTEM_DESIGN_ImageProcessor_ImageProcessor_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

ImageProcessor::~ImageProcessor(void) {
    NOTIFY_DESTRUCTOR(~ImageProcessor, true);
    cleanUpRelations();
}

void ImageProcessor::cleanUpRelations(void) {
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const ImageProcessor* p_ImageProcessor = itsDataProcessor->getItsImageProcessor();
            if(p_ImageProcessor != NULL)
                {
                    itsDataProcessor->__setItsImageProcessor(NULL);
                }
            itsDataProcessor = NULL;
        }
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
    done = OMReactive::startBehavior();
    return done;
}

const DataProcessor* ImageProcessor::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void ImageProcessor::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsImageProcessor(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void ImageProcessor::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    itsDataProcessor = p_DataProcessor;
    if(p_DataProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataProcessor", p_DataProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
        }
}

void ImageProcessor::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsImageProcessor(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void ImageProcessor::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
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
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ImageProcessor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedImageProcessor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.cpp
*********************************************************************/
