/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Researcher.h"
//#[ ignore
#define Default_Researcher_Researcher_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Researcher
Researcher::Researcher(void) : User() {
    NOTIFY_CONSTRUCTOR(Researcher, Researcher(), 0, Default_Researcher_Researcher_SERIALIZE);
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

IMPLEMENT_META_S_P(Researcher, Default, false, User, OMAnimatedUser, OMAnimatedResearcher)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/
