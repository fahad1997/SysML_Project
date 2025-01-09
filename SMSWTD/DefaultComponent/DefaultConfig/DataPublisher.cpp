/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataPublisher
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataPublisher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataPublisher.h"
//## link itsDataProcessor
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_DataPublisher_DataPublisher_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class DataPublisher
DataPublisher::DataPublisher(void) : itsDataProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(DataPublisher, DataPublisher(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_DataPublisher_DataPublisher_SERIALIZE);
}

DataPublisher::~DataPublisher(void) {
    NOTIFY_DESTRUCTOR(~DataPublisher, true);
    cleanUpRelations();
}

const DataProcessor* DataPublisher::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void DataPublisher::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsDataPublisher(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void DataPublisher::cleanUpRelations(void) {
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const DataPublisher* p_DataPublisher = itsDataProcessor->getItsDataPublisher();
            if(p_DataPublisher != NULL)
                {
                    itsDataProcessor->__setItsDataPublisher(NULL);
                }
            itsDataProcessor = NULL;
        }
}

void DataPublisher::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
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

void DataPublisher::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsDataPublisher(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void DataPublisher::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataPublisher::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_META_P(DataPublisher, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedDataPublisher)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataPublisher.cpp
*********************************************************************/
