/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CloudClient
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CloudClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CloudClient.h"
//## link itsDataProcessor
#include "DataProcessor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_CloudClient_CloudClient_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class CloudClient
CloudClient::CloudClient(void) : itsDataProcessor(NULL) {
    NOTIFY_CONSTRUCTOR(CloudClient, CloudClient(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_CloudClient_CloudClient_SERIALIZE);
}

CloudClient::~CloudClient(void) {
    NOTIFY_DESTRUCTOR(~CloudClient, true);
    cleanUpRelations();
}

const DataProcessor* CloudClient::getItsDataProcessor(void) const {
    return itsDataProcessor;
}

void CloudClient::setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(p_DataProcessor != NULL)
        {
            p_DataProcessor->_setItsCloudClient(this);
        }
    _setItsDataProcessor(p_DataProcessor);
}

void CloudClient::cleanUpRelations(void) {
    if(itsDataProcessor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessor");
            const CloudClient* p_CloudClient = itsDataProcessor->getItsCloudClient();
            if(p_CloudClient != NULL)
                {
                    itsDataProcessor->__setItsCloudClient(NULL);
                }
            itsDataProcessor = NULL;
        }
}

void CloudClient::__setItsDataProcessor(DataProcessor* const p_DataProcessor) {
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

void CloudClient::_setItsDataProcessor(DataProcessor* const p_DataProcessor) {
    if(itsDataProcessor != NULL)
        {
            itsDataProcessor->__setItsCloudClient(NULL);
        }
    __setItsDataProcessor(p_DataProcessor);
}

void CloudClient::_clearItsDataProcessor(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessor");
    itsDataProcessor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCloudClient::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessor", false, true);
    if(myReal->itsDataProcessor)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessor);
        }
}
//#]

IMPLEMENT_META_P(CloudClient, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, OMAnimatedCloudClient)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CloudClient.cpp
*********************************************************************/
