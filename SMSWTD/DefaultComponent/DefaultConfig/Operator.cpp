/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Operator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Operator.h"
//#[ ignore
#define Default_Operator_Operator_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Operator
Operator::Operator(void) {
    NOTIFY_CONSTRUCTOR(Operator, Operator(), 0, Default_Operator_Operator_SERIALIZE);
}

Operator::~Operator(void) {
    NOTIFY_DESTRUCTOR(~Operator, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperator::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Operator, Default, Default, false, OMAnimatedOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Operator.cpp
*********************************************************************/
