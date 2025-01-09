/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Operator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Operator.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_Operator_Operator_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Operator
Operator::Operator(void) {
    NOTIFY_CONSTRUCTOR(Operator, Operator(), 0, SMSWTD_SYSTEM_ANALYSIS_Operator_Operator_SERIALIZE);
}

Operator::~Operator(void) {
    NOTIFY_DESTRUCTOR(~Operator, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperator::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Operator, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Operator.cpp
*********************************************************************/
