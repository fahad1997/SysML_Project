/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Mon, 23, Dec 2024  
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
Researcher::Researcher(void) {
    NOTIFY_CONSTRUCTOR(Researcher, Researcher(), 0, Default_Researcher_Researcher_SERIALIZE);
}

Researcher::~Researcher(void) {
    NOTIFY_DESTRUCTOR(~Researcher, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Researcher, Default, Default, false, OMAnimatedResearcher)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/
