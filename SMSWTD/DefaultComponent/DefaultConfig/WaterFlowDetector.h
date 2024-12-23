/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowDetector
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.h
*********************************************************************/

#ifndef WaterFlowDetector_H
#define WaterFlowDetector_H

//## auto_generated
#include <oxf.h>
//## link itsSMSWTD
class SMSWTD;

//## package Default

//## class WaterFlowDetector
class WaterFlowDetector {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    WaterFlowDetector(void);
    
    //## auto_generated
    ~WaterFlowDetector(void);
    
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
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.h
*********************************************************************/
