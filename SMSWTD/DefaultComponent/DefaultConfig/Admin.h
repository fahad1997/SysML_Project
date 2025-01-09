/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Admin
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Admin.h
*********************************************************************/

#ifndef Admin_H
#define Admin_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Admin
class Admin {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdmin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Admin(void);
    
    //## auto_generated
    ~Admin(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdmin : virtual public AOMInstance {
    DECLARE_META(Admin, OMAnimatedAdmin)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Admin.h
*********************************************************************/
