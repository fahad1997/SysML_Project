/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollector
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/

#ifndef DataCollector_H
#define DataCollector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## class DataCollector
#include "int_waterPressure_ProxyFlowPropertyInterface.h"
//## class DataCollector
#include "int_windSpeed_ProxyFlowPropertyInterface.h"
//## link itsSMSWTD_CONTROLLER
class SMSWTD_CONTROLLER;

//## link itsStormSensor
class StormSensor;

//## link itsWaterFlowDetector
class WaterFlowDetector;

//## package SMSWTD_SYSTEM::DESIGN

//## class DataCollector
class DataCollector : public int_waterPressure_ProxyFlowPropertyInterface, public int_windSpeed_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_DataCollector_1_C : public int_waterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataCollector_1_C(void);
        
        //## auto_generated
        virtual ~p_DataCollector_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataCollector(DataCollector* part);
        
        //## auto_generated
        int_waterPressure_ProxyFlowPropertyInterface* getItsInt_waterPressure_ProxyFlowPropertyInterface(void);
        
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
    
    //## package SMSWTD_SYSTEM::DESIGN
    class p_DataCollector_C : public int_windSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataCollector_C(void);
        
        //## auto_generated
        virtual ~p_DataCollector_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataCollector(DataCollector* part);
        
        //## auto_generated
        int_windSpeed_ProxyFlowPropertyInterface* getItsInt_windSpeed_ProxyFlowPropertyInterface(void);
        
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
    
    //## package SMSWTD_SYSTEM::DESIGN
    class p_DataCollector_2_C : public int_waterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataCollector_2_C(void);
        
        //## auto_generated
        virtual ~p_DataCollector_2_C(void);
        
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
    
    //## package SMSWTD_SYSTEM::DESIGN
    class p_DataCollector_3_C : public int_windSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataCollector_3_C(void);
        
        //## auto_generated
        virtual ~p_DataCollector_3_C(void);
        
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
    friend class OMAnimatedDataCollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataCollector(void);
    
    //## auto_generated
    ~DataCollector(void);
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    p_DataCollector_1_C* getP_DataCollector_1(void) const;
    
    //## auto_generated
    p_DataCollector_1_C* get_p_DataCollector_1(void) const;
    
    //## auto_generated
    p_DataCollector_C* getP_DataCollector(void) const;
    
    //## auto_generated
    p_DataCollector_C* get_p_DataCollector(void) const;
    
    //## auto_generated
    p_DataCollector_2_C* getP_DataCollector_2(void) const;
    
    //## auto_generated
    p_DataCollector_2_C* get_p_DataCollector_2(void) const;
    
    //## auto_generated
    p_DataCollector_3_C* getP_DataCollector_3(void) const;
    
    //## auto_generated
    p_DataCollector_3_C* get_p_DataCollector_3(void) const;
    
    //## auto_generated
    const int getWaterPressure(void) const;
    
    //## auto_generated
    const int getWindSpeed(void) const;
    
    //## auto_generated
    const SMSWTD_CONTROLLER* getItsSMSWTD_CONTROLLER(void) const;
    
    //## auto_generated
    void setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    const StormSensor* getItsStormSensor(void) const;
    
    //## auto_generated
    void setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    const WaterFlowDetector* getItsWaterFlowDetector(void) const;
    
    //## auto_generated
    void setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);

private :

    int waterPressure;		//## attribute waterPressure
    
    int windSpeed;		//## attribute windSpeed
    
    SMSWTD_CONTROLLER* itsSMSWTD_CONTROLLER;		//## link itsSMSWTD_CONTROLLER
    
    StormSensor* itsStormSensor;		//## link itsStormSensor
    
    WaterFlowDetector* itsWaterFlowDetector;		//## link itsWaterFlowDetector

public :

    //## auto_generated
    void __setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _setItsSMSWTD_CONTROLLER(SMSWTD_CONTROLLER* const p_SMSWTD_CONTROLLER);
    
    //## auto_generated
    void _clearItsSMSWTD_CONTROLLER(void);
    
    //## auto_generated
    void __setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    void _setItsStormSensor(StormSensor* const p_StormSensor);
    
    //## auto_generated
    void _clearItsStormSensor(void);
    
    //## auto_generated
    void __setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);
    
    //## auto_generated
    void _setItsWaterFlowDetector(WaterFlowDetector* const p_WaterFlowDetector);
    
    //## auto_generated
    void _clearItsWaterFlowDetector(void);
    
//#[ ignore
    void setWaterPressure(int p_waterPressure);
    
    void setWindSpeed(int p_windSpeed);
//#]

private :

//#[ ignore
    p_DataCollector_1_C p_DataCollector_1;
    
    p_DataCollector_C p_DataCollector;
    
    p_DataCollector_2_C p_DataCollector_2;
    
    p_DataCollector_3_C p_DataCollector_3;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataCollector : virtual public AOMInstance {
    DECLARE_META(DataCollector, OMAnimatedDataCollector)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollector.h
*********************************************************************/
