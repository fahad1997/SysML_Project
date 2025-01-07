/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Tue, 7, Jan 2025  
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
Operator::Operator(void) : User() {
    NOTIFY_CONSTRUCTOR(Operator, Operator(), 0, SMSWTD_SYSTEM_ANALYSIS_Operator_Operator_SERIALIZE);
}

Operator::~Operator(void) {
    NOTIFY_DESTRUCTOR(~Operator, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperator::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Operator, SMSWTD_SYSTEM::ANALYSIS, false, User, OMAnimatedUser, OMAnimatedOperator)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Operator.cpp
*********************************************************************/
