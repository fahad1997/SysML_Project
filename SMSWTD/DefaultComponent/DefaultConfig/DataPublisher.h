/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataPublisher
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataPublisher.h
*********************************************************************/

#ifndef DataPublisher_H
#define DataPublisher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class DataPublisher
class DataPublisher {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataPublisher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataPublisher(void);
    
    //## auto_generated
    ~DataPublisher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataPublisher : virtual public AOMInstance {
    DECLARE_META(DataPublisher, OMAnimatedDataPublisher)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataPublisher.h
*********************************************************************/
