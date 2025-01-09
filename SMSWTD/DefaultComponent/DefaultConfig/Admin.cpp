/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Admin
//!	Generated Date	: Thu, 9, Jan 2025  
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
Admin::Admin(void) {
    NOTIFY_CONSTRUCTOR(Admin, Admin(), 0, SMSWTD_SYSTEM_ANALYSIS_Admin_Admin_SERIALIZE);
}

Admin::~Admin(void) {
    NOTIFY_DESTRUCTOR(~Admin, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Admin, SMSWTD_SYSTEM_ANALYSIS, SMSWTD_SYSTEM::ANALYSIS, false, OMAnimatedAdmin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Admin.cpp
*********************************************************************/
