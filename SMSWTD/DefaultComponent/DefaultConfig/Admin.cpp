/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Admin
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Admin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Admin.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_Admin_Admin_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Admin
Admin::Admin(void) : User() {
    NOTIFY_CONSTRUCTOR(Admin, Admin(), 0, SMSWTD_SYSTEM_ANALYSIS_Admin_Admin_SERIALIZE);
}

Admin::~Admin(void) {
    NOTIFY_DESTRUCTOR(~Admin, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdmin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedAdmin::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Admin, SMSWTD_SYSTEM::ANALYSIS, false, User, OMAnimatedUser, OMAnimatedAdmin)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Admin.cpp
*********************************************************************/
