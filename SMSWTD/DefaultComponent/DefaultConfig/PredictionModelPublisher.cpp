/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModelPublisher
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModelPublisher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PredictionModelPublisher.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_PredictionModelPublisher_PredictionModelPublisher_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class PredictionModelPublisher
PredictionModelPublisher::PredictionModelPublisher(void) : DataPublisher() {
    NOTIFY_CONSTRUCTOR(PredictionModelPublisher, PredictionModelPublisher(), 0, SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_PredictionModelPublisher_PredictionModelPublisher_SERIALIZE);
}

PredictionModelPublisher::~PredictionModelPublisher(void) {
    NOTIFY_DESTRUCTOR(~PredictionModelPublisher, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPredictionModelPublisher::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataPublisher::serializeAttributes(aomsAttributes);
}

void OMAnimatedPredictionModelPublisher::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDataPublisher::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PredictionModelPublisher, SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER, false, DataPublisher, OMAnimatedDataPublisher, OMAnimatedPredictionModelPublisher)

OMINIT_SUPERCLASS(DataPublisher, OMAnimatedDataPublisher)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModelPublisher.cpp
*********************************************************************/
