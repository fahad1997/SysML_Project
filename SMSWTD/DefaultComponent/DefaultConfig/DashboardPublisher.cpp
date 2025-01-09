/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DashboardPublisher
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DashboardPublisher.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_DashboardPublisher_DashboardPublisher_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class DashboardPublisher
DashboardPublisher::DashboardPublisher(void) : DataPublisher() {
    NOTIFY_CONSTRUCTOR(DashboardPublisher, DashboardPublisher(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_DashboardPublisher_DashboardPublisher_SERIALIZE);
}

DashboardPublisher::~DashboardPublisher(void) {
    NOTIFY_DESTRUCTOR(~DashboardPublisher, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboardPublisher::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataPublisher::serializeAttributes(aomsAttributes);
}

void OMAnimatedDashboardPublisher::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDataPublisher::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(DashboardPublisher, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, DataPublisher, OMAnimatedDataPublisher, OMAnimatedDashboardPublisher)

OMINIT_SUPERCLASS(DataPublisher, OMAnimatedDataPublisher)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DashboardPublisher.cpp
*********************************************************************/
