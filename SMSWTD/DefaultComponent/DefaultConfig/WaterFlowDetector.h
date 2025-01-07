/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WaterFlowDetector
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.h
*********************************************************************/

#ifndef WaterFlowDetector_H
#define WaterFlowDetector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class p_WaterFlowDetector_C
#include "int_waterPressure_ProxyFlowPropertyInterface.h"
//## link itsDataCollector
class DataCollector;

//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int_ARGS_DECLARATION int p_waterPressure;
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class WaterFlowDetector
class WaterFlowDetector {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_WaterFlowDetector_C : public int_waterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_WaterFlowDetector_C(void);
        
        //## auto_generated
        virtual ~p_WaterFlowDetector_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_waterPressure_ProxyFlowPropertyInterface* getItsInt_waterPressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_waterPressure_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setWaterPressure(int p_waterPressure);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_waterPressure_ProxyFlowPropertyInterface(int_waterPressure_ProxyFlowPropertyInterface* const p_int_waterPressure_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_waterPressure_ProxyFlowPropertyInterface* itsInt_waterPressure_ProxyFlowPropertyInterface;		//## link itsInt_waterPressure_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaterFlowDetector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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
    
//#[ ignore
    void setWaterPressure(int p_waterPressure);
//#]

    //## auto_generated
    p_WaterFlowDetector_C* getP_WaterFlowDetector(void) const;
    
    //## auto_generated
    p_WaterFlowDetector_C* get_p_WaterFlowDetector(void) const;
    
    //## auto_generated
    const int getWaterPressure(void) const;
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    void setItsDataCollector(DataCollector* const p_DataCollector);

private :

    int waterPressure;		//## attribute waterPressure
    
//#[ ignore
    p_WaterFlowDetector_C p_WaterFlowDetector;
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
DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int)

//#[ ignore
class OMAnimatedWaterFlowDetector : virtual public AOMInstance {
    DECLARE_META(WaterFlowDetector, OMAnimatedWaterFlowDetector)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_WaterFlowDetector_setWaterPressure_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WaterFlowDetector.h
*********************************************************************/
