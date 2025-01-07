/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/

#ifndef Researcher_H
#define Researcher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ANALYSIS.h"
//## actor Researcher
#include "User.h"
//## package SMSWTD_SYSTEM::ANALYSIS

//## actor Researcher
class Researcher : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearcher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Researcher(void);
    
    //## auto_generated
    ~Researcher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResearcher : public OMAnimatedUser {
    DECLARE_META(Researcher, OMAnimatedResearcher)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/
