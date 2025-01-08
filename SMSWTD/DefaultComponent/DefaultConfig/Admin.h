/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Admin
//!	Generated Date	: Wed, 8, Jan 2025  
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
//## actor Admin
#include "User.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Admin
class Admin : public User {
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
class OMAnimatedAdmin : public OMAnimatedUser {
    DECLARE_META(Admin, OMAnimatedAdmin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Admin.h
*********************************************************************/
