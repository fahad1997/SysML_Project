/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterPressureSensor
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.h
*********************************************************************/

#ifndef WaterPressureSensor_H
#define WaterPressureSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## link itsSMSWTD
class SMSWTD;

//## package Default

//## class WaterPressureSensor
class WaterPressureSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaterPressureSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WaterPressureSensor(void);
    
    //## auto_generated
    ~WaterPressureSensor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD_1(void) const;
    
    //## auto_generated
    void setItsSMSWTD_1(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    SMSWTD* itsSMSWTD_1;		//## link itsSMSWTD_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    //## auto_generated
    void __setItsSMSWTD_1(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD_1(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWaterPressureSensor : virtual public AOMInstance {
    DECLARE_META(WaterPressureSensor, OMAnimatedWaterPressureSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterPressureSensor.h
*********************************************************************/
