/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModelPublisher
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModelPublisher.h
*********************************************************************/

#ifndef PredictionModelPublisher_H
#define PredictionModelPublisher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## class PredictionModelPublisher
#include "DataPublisher.h"
//## auto_generated
#include <aom.h>
//## package SMSWTD_SYSTEM::DESIGN

//## class PredictionModelPublisher
class PredictionModelPublisher : public DataPublisher {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPredictionModelPublisher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PredictionModelPublisher(void);
    
    //## auto_generated
    ~PredictionModelPublisher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPredictionModelPublisher : public OMAnimatedDataPublisher {
    DECLARE_META(PredictionModelPublisher, OMAnimatedPredictionModelPublisher)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModelPublisher.h
*********************************************************************/
