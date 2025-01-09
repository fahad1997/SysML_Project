/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/

#ifndef DataProcessor_H
#define DataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## class DataProcessor
#include "int_waterPressure_ProxyFlowPropertyInterface.h"
//## class DataProcessor
#include "int_windSpeed_ProxyFlowPropertyInterface.h"
//## link itsImageProcessor
class ImageProcessor;

//## link itsSensorDataProcessor
class SensorDataProcessor;

//#[ ignore
#define OMAnim_SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWaterPressure_int_ARGS_DECLARATION int p_thresholdWaterPressure;

#define OMAnim_SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWindSpeed_int_ARGS_DECLARATION int p_thresholdWindSpeed;
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class DataProcessor
class DataProcessor : public OMReactive, public int_waterPressure_ProxyFlowPropertyInterface, public int_windSpeed_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_DataProcessor_C : public int_waterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataProcessor_C(void);
        
        //## auto_generated
        virtual ~p_DataProcessor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataProcessor(DataProcessor* part);
        
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
    class p_DataProcessor_1_C : public int_windSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataProcessor_1_C(void);
        
        //## auto_generated
        virtual ~p_DataProcessor_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataProcessor(DataProcessor* part);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    virtual ~DataProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

protected :

    //## auto_generated
    void initStatechart(void);

public :

    //## operation dataFetched()
    virtual void dataFetched(void);
    
    //## auto_generated
    p_DataProcessor_C* getP_DataProcessor(void) const;
    
    //## auto_generated
    p_DataProcessor_C* get_p_DataProcessor(void) const;
    
    //## auto_generated
    p_DataProcessor_1_C* getP_DataProcessor_1(void) const;
    
    //## auto_generated
    p_DataProcessor_1_C* get_p_DataProcessor_1(void) const;
    
    //## auto_generated
    const bool getDataAvailability(void) const;
    
    //## auto_generated
    void setDataAvailability(const bool p_dataAvailability);
    
    //## auto_generated
    const bool getTsunami(void) const;
    
    //## auto_generated
    void setTsunami(const bool p_tsunami);
    
    //## auto_generated
    const int getWaterPressure(void) const;
    
    //## auto_generated
    const int getWindSpeed(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);

private :

    bool dataAvailability;		//## attribute dataAvailability
    
    bool tsunami;		//## attribute tsunami
    
    int waterPressure;		//## attribute waterPressure
    
    int windSpeed;		//## attribute windSpeed

public :

    //## auto_generated
    explicit DataProcessor(IOxfActive* const theActiveContext = NULL);
    
//#[ ignore
    void setWaterPressure(int p_waterPressure);
    
    void setWindSpeed(int p_windSpeed);
//#]

    //## auto_generated
    const int getThresholdWaterPressure(void) const;
    
    //## auto_generated
    void setThresholdWaterPressure(const int p_thresholdWaterPressure);
    
    //## auto_generated
    const int getThresholdWindSpeed(void) const;
    
    //## auto_generated
    void setThresholdWindSpeed(const int p_thresholdWindSpeed);
    
    //## auto_generated
    const ImageProcessor* getItsImageProcessor(void) const;
    
    //## auto_generated
    void setItsImageProcessor(ImageProcessor* const p_ImageProcessor);
    
    //## auto_generated
    const SensorDataProcessor* getItsSensorDataProcessor(void) const;
    
    //## auto_generated
    void setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    int thresholdWaterPressure;		//## attribute thresholdWaterPressure
    
    int thresholdWindSpeed;		//## attribute thresholdWindSpeed
    
//#[ ignore
    p_DataProcessor_C p_DataProcessor;
    
    p_DataProcessor_1_C p_DataProcessor_1;
//#]

    ImageProcessor* itsImageProcessor;		//## link itsImageProcessor
    
    SensorDataProcessor* itsSensorDataProcessor;		//## link itsSensorDataProcessor

public :

    //## auto_generated
    void __setItsImageProcessor(ImageProcessor* const p_ImageProcessor);
    
    //## auto_generated
    void _setItsImageProcessor(ImageProcessor* const p_ImageProcessor);
    
    //## auto_generated
    void _clearItsImageProcessor(void);
    
    //## auto_generated
    void __setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);
    
    //## auto_generated
    void _setItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);
    
    //## auto_generated
    void _clearItsSensorDataProcessor(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // StartProcess:
    //## statechart_method
    inline RhpBoolean StartProcess_IN(void) const;
    
    // ProcessData:
    //## statechart_method
    inline RhpBoolean ProcessData_IN(void) const;
    
    // FailedDataCollection:
    //## statechart_method
    inline RhpBoolean FailedDataCollection_IN(void) const;
    
    // CollectData:
    //## statechart_method
    inline RhpBoolean CollectData_IN(void) const;
    
    // accepttimeevent_8:
    //## statechart_method
    inline RhpBoolean accepttimeevent_8_IN(void) const;
    
    // accepttimeevent_7:
    //## statechart_method
    inline RhpBoolean accepttimeevent_7_IN(void) const;
    
    // accepttimeevent_6:
    //## statechart_method
    inline RhpBoolean accepttimeevent_6_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum DataProcessor_Enum {
        OMNonState = 0,
        StartProcess = 1,
        ProcessData = 2,
        FailedDataCollection = 3,
        CollectData = 4,
        accepttimeevent_8 = 5,
        accepttimeevent_7 = 6,
        accepttimeevent_6 = 7
    };
//#]

private :

//#[ ignore
    DataProcessor_Enum rootState_subState;
    
    DataProcessor_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWaterPressure_int)

DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWindSpeed_int)

//#[ ignore
class OMAnimatedDataProcessor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DataProcessor, OMAnimatedDataProcessor)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWaterPressure_int)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_DataProcessor_setThresholdWindSpeed_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StartProcess_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ProcessData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FailedDataCollection_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CollectData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_6_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean DataProcessor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DataProcessor::StartProcess_IN(void) const {
    return rootState_subState == StartProcess;
}

inline RhpBoolean DataProcessor::ProcessData_IN(void) const {
    return rootState_subState == ProcessData;
}

inline RhpBoolean DataProcessor::FailedDataCollection_IN(void) const {
    return rootState_subState == FailedDataCollection;
}

inline RhpBoolean DataProcessor::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

inline RhpBoolean DataProcessor::accepttimeevent_8_IN(void) const {
    return rootState_subState == accepttimeevent_8;
}

inline RhpBoolean DataProcessor::accepttimeevent_7_IN(void) const {
    return rootState_subState == accepttimeevent_7;
}

inline RhpBoolean DataProcessor::accepttimeevent_6_IN(void) const {
    return rootState_subState == accepttimeevent_6;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/
