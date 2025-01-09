/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GeographicalConfiguration
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GeographicalConfiguration.h"
//## link itsDataProcessor
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_GeographicalConfiguration_GeographicalConfiguration_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class GeographicalConfiguration
GeographicalConfiguration::GeographicalConfiguration(void) : itsDataProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(GeographicalConfiguration, GeographicalConfiguration(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_GeographicalConfiguration_GeographicalConfiguration_SERIALIZE);
}

GeographicalConfiguration::~GeographicalConfiguration(void) {
    NOTIFY_DESTRUCTOR(~GeographicalConfiguration, true);
    cleanUpRelations();
}

const DataProcessor* GeographicalConfiguration::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void GeographicalConfiguration::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsGeographicalConfiguration(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void GeographicalConfiguration::cleanUpRelations(void) {
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const GeographicalConfiguration* p_GeographicalConfiguration = itsDataProcessor->getItsGeographicalConfiguration();
            if(p_GeographicalConfiguration != NULL)
                {
                    itsDataProcessor->__setItsGeographicalConfiguration(NULL);
                }
            itsDataProcessor = NULL;
        }
}

void GeographicalConfiguration::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
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

void GeographicalConfiguration::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsGeographicalConfiguration(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void GeographicalConfiguration::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGeographicalConfiguration::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_META_P(GeographicalConfiguration, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedGeographicalConfiguration)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GeographicalConfiguration.cpp
*********************************************************************/
