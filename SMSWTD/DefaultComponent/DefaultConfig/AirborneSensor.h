/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirborneSensor
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.h
*********************************************************************/

#ifndef AirborneSensor_H
#define AirborneSensor_H

//## auto_generated
#include <oxf.h>
//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class AirborneSensor
class AirborneSensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    AirborneSensor(void);
    
    //## auto_generated
    ~AirborneSensor(void);
    
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirborneSensor.h
*********************************************************************/