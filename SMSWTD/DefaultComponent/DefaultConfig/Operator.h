/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Wed, 8, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Operator.h
*********************************************************************/

#ifndef Operator_H
#define Operator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## actor Operator
#include "User.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Operator
class Operator : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Operator(void);
    
    //## auto_generated
    ~Operator(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOperator : public OMAnimatedUser {
    DECLARE_META(Operator, OMAnimatedOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Operator.h
*********************************************************************/
