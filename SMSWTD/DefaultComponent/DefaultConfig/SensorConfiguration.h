/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorConfiguration
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.h
*********************************************************************/

#ifndef SensorConfiguration_H
#define SensorConfiguration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "PKG_SMSWTD_CONTROLLER.h"
//## class p_SensorConfiguration_C
#include "int_thresholdWaterPressure_ProxyFlowPropertyInterface.h"
//## class p_SensorConfiguration_1_C
#include "int_thresholdWindSpeed_ProxyFlowPropertyInterface.h"
//## link itsDataProcessor
class DataProcessor;

//#[ ignore
#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int_ARGS_DECLARATION int p_thresholdWaterPressure;

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int_ARGS_DECLARATION int p_thresholdWindSpeed;
//#]

//## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER

//## class SensorConfiguration
class SensorConfiguration {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER
    class p_SensorConfiguration_C : public int_thresholdWaterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SensorConfiguration_C(void);
        
        //## auto_generated
        virtual ~p_SensorConfiguration_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_thresholdWaterPressure_ProxyFlowPropertyInterface* getItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_thresholdWaterPressure_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setThresholdWaterPressure(int p_thresholdWaterPressure);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_thresholdWaterPressure_ProxyFlowPropertyInterface(int_thresholdWaterPressure_ProxyFlowPropertyInterface* const p_int_thresholdWaterPressure_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_thresholdWaterPressure_ProxyFlowPropertyInterface* itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface;		//## link itsInt_thresholdWaterPressure_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD_SYSTEM::DESIGN::PKG_SMSWTD::PKG_SMSWTD_CONTROLLER
    class p_SensorConfiguration_1_C : public int_thresholdWindSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SensorConfiguration_1_C(void);
        
        //## auto_generated
        virtual ~p_SensorConfiguration_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_thresholdWindSpeed_ProxyFlowPropertyInterface* getItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_thresholdWindSpeed_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setThresholdWindSpeed(int p_thresholdWindSpeed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_thresholdWindSpeed_ProxyFlowPropertyInterface(int_thresholdWindSpeed_ProxyFlowPropertyInterface* const p_int_thresholdWindSpeed_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_thresholdWindSpeed_ProxyFlowPropertyInterface* itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface;		//## link itsInt_thresholdWindSpeed_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorConfiguration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorConfiguration(void);
    
    //## auto_generated
    ~SensorConfiguration(void);
    
//#[ ignore
    void setThresholdWaterPressure(int p_thresholdWaterPressure);
    
    void setThresholdWindSpeed(int p_thresholdWindSpeed);
//#]

    //## auto_generated
    p_SensorConfiguration_C* getP_SensorConfiguration(void) const;
    
    //## auto_generated
    p_SensorConfiguration_C* get_p_SensorConfiguration(void) const;
    
    //## auto_generated
    p_SensorConfiguration_1_C* getP_SensorConfiguration_1(void) const;
    
    //## auto_generated
    p_SensorConfiguration_1_C* get_p_SensorConfiguration_1(void) const;
    
    //## auto_generated
    const int getThresholdWaterPressure(void) const;
    
    //## auto_generated
    const int getThresholdWindSpeed(void) const;
    
    //## auto_generated
    const DataProcessor* getItsDataProcessor(void) const;
    
    //## auto_generated
    void setItsDataProcessor(DataProcessor* const p_DataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    int thresholdWaterPressure;		//## attribute thresholdWaterPressure
    
    int thresholdWindSpeed;		//## attribute thresholdWindSpeed
    
//#[ ignore
    p_SensorConfiguration_C p_SensorConfiguration;
    
    p_SensorConfiguration_1_C p_SensorConfiguration_1;
//#]

    DataProcessor* itsDataProcessor;		//## link itsDataProcessor

public :

    //## auto_generated
    void __setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _setItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    void _clearItsDataProcessor(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int)

DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int)

//#[ ignore
class OMAnimatedSensorConfiguration : virtual public AOMInstance {
    DECLARE_META(SensorConfiguration, OMAnimatedSensorConfiguration)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWaterPressure_int)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_PKG_SMSWTD_PKG_SMSWTD_CONTROLLER_SensorConfiguration_setThresholdWindSpeed_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorConfiguration.h
*********************************************************************/
