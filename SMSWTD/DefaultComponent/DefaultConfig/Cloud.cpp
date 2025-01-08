/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cloud.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_Cloud_Cloud_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class Cloud
Cloud::Cloud(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Cloud, Cloud(), 0, SMSWTD_SYSTEM_DESIGN_Cloud_Cloud_SERIALIZE);
}

Cloud::~Cloud(void) {
    NOTIFY_DESTRUCTOR(~Cloud, true);
    cleanUpRelations();
}

const SMSWTD* Cloud::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Cloud::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsCloud(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Cloud::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Cloud* p_Cloud = itsSMSWTD->getItsCloud();
            if(p_Cloud != NULL)
                {
                    itsSMSWTD->__setItsCloud(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Cloud::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Cloud::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCloud(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Cloud::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCloud::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Cloud, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedCloud)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.cpp
*********************************************************************/
