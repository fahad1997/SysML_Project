/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormSensor
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormSensor.h
*********************************************************************/

#ifndef StormSensor_H
#define StormSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class p_StormSensor_C
#include "int_windSpeed_ProxyFlowPropertyInterface.h"
//## link itsDataCollector
class DataCollector;

//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int_ARGS_DECLARATION int p_windSpeed;
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class StormSensor
class StormSensor {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_StormSensor_C : public int_windSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_StormSensor_C(void);
        
        //## auto_generated
        virtual ~p_StormSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_windSpeed_ProxyFlowPropertyInterface* getItsInt_windSpeed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_windSpeed_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setWindSpeed(int p_windSpeed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_windSpeed_ProxyFlowPropertyInterface(int_windSpeed_ProxyFlowPropertyInterface* const p_int_windSpeed_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_windSpeed_ProxyFlowPropertyInterface* itsInt_windSpeed_ProxyFlowPropertyInterface;		//## link itsInt_windSpeed_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedStormSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StormSensor(void);
    
    //## auto_generated
    ~StormSensor(void);
    
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
    
//#[ ignore
    void setWindSpeed(int p_windSpeed);
//#]

    //## auto_generated
    p_StormSensor_C* getP_StormSensor(void) const;
    
    //## auto_generated
    p_StormSensor_C* get_p_StormSensor(void) const;
    
    //## auto_generated
    const int getWindSpeed(void) const;
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    void setItsDataCollector(DataCollector* const p_DataCollector);

private :

    int windSpeed;		//## attribute windSpeed
    
//#[ ignore
    p_StormSensor_C p_StormSensor;
//#]

    DataCollector* itsDataCollector;		//## link itsDataCollector

public :

    //## auto_generated
    void __setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    void _setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    void _clearItsDataCollector(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int)

//#[ ignore
class OMAnimatedStormSensor : virtual public AOMInstance {
    DECLARE_META(StormSensor, OMAnimatedStormSensor)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_StormSensor_setWindSpeed_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormSensor.h
*********************************************************************/
