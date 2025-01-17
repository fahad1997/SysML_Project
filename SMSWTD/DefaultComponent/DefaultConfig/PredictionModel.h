/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.h
*********************************************************************/

#ifndef PredictionModel_H
#define PredictionModel_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "PKG_PREDICTION_MODEL.h"
//## link itsSMSWTD_CONTROLLER
class SMSWTD_CONTROLLER;

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_PREDICTION_MODEL

//## class PredictionModel
class PredictionModel {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPredictionModel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PredictionModel(void);
    
    //## auto_generated
    ~PredictionModel(void);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD_CONTROLLER* itsSMSWTD_CONTROLLER;		//## link itsSMSWTD_CONTROLLER
    
    ////    Framework operations    ////

public :

    //## auto_generated
    const SMSWTD_CONTROLLER* getItsSMSWTD_CONTROLLER(void) const;
    
    //## auto_generated
    void setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void __setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _clearItsSMSWTD_CONTROLLER(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPredictionModel : virtual public AOMInstance {
    DECLARE_META(PredictionModel, OMAnimatedPredictionModel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.h
*********************************************************************/
