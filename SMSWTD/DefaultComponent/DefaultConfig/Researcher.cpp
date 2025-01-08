/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Researcher.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_Researcher_Researcher_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Researcher
Researcher::Researcher(void) : User() {
    NOTIFY_CONSTRUCTOR(Researcher, Researcher(), 0, SMSWTD_SYSTEM_ANALYSIS_Researcher_Researcher_SERIALIZE);
}

Researcher::~Researcher(void) {
    NOTIFY_DESTRUCTOR(~Researcher, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearcher::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedResearcher::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Researcher, SMSWTD_SYSTEM::ANALYSIS, false, User, OMAnimatedUser, OMAnimatedResearcher)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/
