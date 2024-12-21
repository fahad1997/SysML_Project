/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageCollector
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ImageCollector.h"
//## link itsImageProcessor
#include "ImageProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_ImageCollector_ImageCollector_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageCollector
ImageCollector::ImageCollector(void) : itsImageProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(ImageCollector, ImageCollector(), 0, SMSWTD_SYSTEM_ANALYSIS_ImageCollector_ImageCollector_SERIALIZE);
}

ImageCollector::~ImageCollector(void) {
    NOTIFY_DESTRUCTOR(~ImageCollector, true);
    cleanUpRelations();
}

const ImageProcessor* ImageCollector::getItsImageProcessor(void) const {
    return itsImageProcessor;
}

void ImageCollector::setItsImageProcessor(ImageProcessor* const p_ImageProcessor) {
    itsImageProcessor = p_ImageProcessor;
    if(p_ImageProcessor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsImageProcessor", p_ImageProcessor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsImageProcessor");
        }
}

void ImageCollector::cleanUpRelations(void) {
    if(itsImageProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsImageProcessor");
            itsImageProcessor = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedImageCollector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsImageProcessor", false, true);
    if(myReal->itsImageProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsImageProcessor);
        }
}
//#]

IMPLEMENT_META_P(ImageCollector, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedImageCollector)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageCollector.cpp
*********************************************************************/
