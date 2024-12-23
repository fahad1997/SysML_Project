/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/

#ifndef Researcher_H
#define Researcher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor Researcher
class Researcher {
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
class OMAnimatedResearcher : virtual public AOMInstance {
    DECLARE_META(Researcher, OMAnimatedResearcher)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/
