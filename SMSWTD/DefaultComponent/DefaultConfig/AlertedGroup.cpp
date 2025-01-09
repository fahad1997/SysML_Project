/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertedGroup
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertedGroup.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AlertedGroup.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_AlertedGroup_AlertedGroup_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## actor AlertedGroup
AlertedGroup::AlertedGroup(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(AlertedGroup, AlertedGroup(), 0, SMSWTD_SYSTEM_ANALYSIS_AlertedGroup_AlertedGroup_SERIALIZE);
}

AlertedGroup::~AlertedGroup(void) {
    NOTIFY_DESTRUCTOR(~AlertedGroup, true);
    cleanUpRelations();
}

const SMSWTD* AlertedGroup::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void AlertedGroup::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAlertedGroup(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void AlertedGroup::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const AlertedGroup* p_AlertedGroup = itsSMSWTD->getItsAlertedGroup();
            if(p_AlertedGroup != NULL)
                {
                    itsSMSWTD->__setItsAlertedGroup(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void AlertedGroup::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void AlertedGroup::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAlertedGroup(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AlertedGroup::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlertedGroup::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(AlertedGroup, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedAlertedGroup)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertedGroup.cpp
*********************************************************************/
