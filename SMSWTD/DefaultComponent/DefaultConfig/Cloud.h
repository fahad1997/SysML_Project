/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Cloud.h
*********************************************************************/

#ifndef Cloud_H
#define Cloud_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD_SYSTEM::DESIGN

//## class Cloud
class Cloud {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCloud;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cloud(void);
    
    //## auto_generated
    ~Cloud(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCloud : virtual public AOMInstance {
    DECLARE_META(Cloud, OMAnimatedCloud)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.h
*********************************************************************/
