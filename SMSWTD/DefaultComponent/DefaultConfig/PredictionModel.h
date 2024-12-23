/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.h
*********************************************************************/

#ifndef PredictionModel_H
#define PredictionModel_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## link itsSMSWTD_BLK
class SMSWTD_BLK;

//## package SMSWTD_SYSTEM::DESIGN

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
    
    //## auto_generated
    const SMSWTD_BLK* getItsSMSWTD_BLK(void) const;
    
    //## auto_generated
    void setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD_BLK* itsSMSWTD_BLK;		//## link itsSMSWTD_BLK
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _setItsSMSWTD_BLK(SMSWTD_BLK* const p_SMSWTD_BLK);
    
    //## auto_generated
    void _clearItsSMSWTD_BLK(void);
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
