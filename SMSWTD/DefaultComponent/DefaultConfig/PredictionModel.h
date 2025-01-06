/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PredictionModel
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.h
*********************************************************************/

#ifndef PredictionModel_H
#define PredictionModel_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## link itsSMSWTD_BLK
class SMSWTD_BLK;

//## package SMSWTD_SYSTEM::DESIGN

//## class PredictionModel
class PredictionModel {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PredictionModel.h
*********************************************************************/
