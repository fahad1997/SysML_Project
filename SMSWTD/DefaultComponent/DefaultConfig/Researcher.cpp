/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Thu, 9, Jan 2025  
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
Researcher::Researcher(void) {
    NOTIFY_CONSTRUCTOR(Researcher, Researcher(), 0, SMSWTD_SYSTEM_ANALYSIS_Researcher_Researcher_SERIALIZE);
}

Researcher::~Researcher(void) {
    NOTIFY_DESTRUCTOR(~Researcher, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Researcher, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedResearcher)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/
