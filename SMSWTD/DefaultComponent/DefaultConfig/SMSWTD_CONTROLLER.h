/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_CONTROLLER
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_CONTROLLER.h
*********************************************************************/

#ifndef SMSWTD_CONTROLLER_H
#define SMSWTD_CONTROLLER_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## classInstance itsDataProcessor
#include "DataProcessor.h"
//## class p_SMSWTD_BLK_C
#include "int_waterPressure_ProxyFlowPropertyInterface.h"
//## class p_SMSWTD_BLK_1_C
#include "int_windSpeed_ProxyFlowPropertyInterface.h"
//## link itsDashboard
class Dashboard;

//## link itsDataCollector
class DataCollector;

//## link itsImageCollector
class ImageCollector;

//## link itsPredictionModel
class PredictionModel;

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD_CONTROLLER
class SMSWTD_CONTROLLER : public OMReactive {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_SMSWTD_BLK_C : public int_waterPressure_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_BLK_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_BLK_C(void);
        
        ////    Operations    ////
        
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
    class p_SMSWTD_BLK_1_C : public int_windSpeed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_BLK_1_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_BLK_1_C(void);
        
        ////    Operations    ////
        
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

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD_CONTROLLER;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    const DataProcessor* getItsDataProcessor(void) const;
    
    //## auto_generated
    const ImageCollector* getItsImageCollector(void) const;
    
    //## auto_generated
    const PredictionModel* getItsPredictionModel(void) const;
    
    //## auto_generated
    void setItsPredictionModel(PredictionModel* const p_PredictionModel);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Dashboard* itsDashboard;		//## link itsDashboard
    
    PredictionModel* itsPredictionModel;		//## link itsPredictionModel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _clearItsDashboard(void);
    
    //## auto_generated
    void __setItsPredictionModel(PredictionModel* const p_PredictionModel);
    
    //## auto_generated
    void _setItsPredictionModel(PredictionModel* const p_PredictionModel);
    
    //## auto_generated
    void _clearItsPredictionModel(void);
    
    //## auto_generated
    virtual void destroy(void);
    
    ////    Framework    ////
    
    //## auto_generated
    explicit SMSWTD_CONTROLLER(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD_CONTROLLER(void);
    
    //## auto_generated
    p_SMSWTD_BLK_C* getP_SMSWTD_BLK(void) const;
    
    //## auto_generated
    p_SMSWTD_BLK_C* get_p_SMSWTD_BLK(void) const;
    
    //## auto_generated
    p_SMSWTD_BLK_1_C* getP_SMSWTD_BLK_1(void) const;
    
    //## auto_generated
    p_SMSWTD_BLK_1_C* get_p_SMSWTD_BLK_1(void) const;
    
    //## auto_generated
    const int getWaterPressure(void) const;
    
    //## auto_generated
    void setWaterPressure(const int p_waterPressure);
    
    //## auto_generated
    const int getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const int p_windSpeed);
    
    //## auto_generated
    void setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    void setItsImageCollector(ImageCollector* const p_ImageCollector);

protected :

    //## auto_generated
    void initRelations(void);

private :

    int waterPressure;		//## attribute waterPressure
    
    int windSpeed;		//## attribute windSpeed
    
    DataCollector* itsDataCollector;		//## link itsDataCollector
    
    DataProcessor itsDataProcessor;		//## classInstance itsDataProcessor
    
    ImageCollector* itsImageCollector;		//## link itsImageCollector

public :

    //## auto_generated
    void __setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    void _setItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    void _clearItsDataCollector(void);
    
    //## auto_generated
    void __setItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    void _setItsImageCollector(ImageCollector* const p_ImageCollector);
    
    //## auto_generated
    void _clearItsImageCollector(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);

private :

//#[ ignore
    p_SMSWTD_BLK_C p_SMSWTD_BLK;
    
    p_SMSWTD_BLK_1_C p_SMSWTD_BLK_1;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Deactivated:
    //## statechart_method
    inline RhpBoolean Deactivated_IN(void) const;
    
    // Activated:
    //## statechart_method
    inline RhpBoolean Activated_IN(void) const;
    
    //## statechart_method
    void Activated_entDef(void);
    
    //## statechart_method
    void Activated_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Activated_processEvent(void);
    
    // state_3:
    //## statechart_method
    inline RhpBoolean state_3_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent(void);
    
    // state_2:
    //## statechart_method
    inline RhpBoolean state_2_IN(void) const;
    
    //## statechart_method
    void state_2_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent(void);
    
    // DataProcessorStart:
    //## statechart_method
    inline RhpBoolean DataProcessorStart_IN(void) const;
    
    // DataProcessingDone:
    //## statechart_method
    inline RhpBoolean DataProcessingDone_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum SMSWTD_CONTROLLER_Enum {
        OMNonState = 0,
        Deactivated = 1,
        Activated = 2,
        state_3 = 3,
        state_2 = 4,
        DataProcessorStart = 5,
        DataProcessingDone = 6
    };
//#]

private :

//#[ ignore
    SMSWTD_CONTROLLER_Enum rootState_subState;
    
    SMSWTD_CONTROLLER_Enum rootState_active;
    
    SMSWTD_CONTROLLER_Enum state_3_subState;
    
    SMSWTD_CONTROLLER_Enum state_3_active;
    
    SMSWTD_CONTROLLER_Enum state_2_subState;
    
    SMSWTD_CONTROLLER_Enum state_2_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD_CONTROLLER : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SMSWTD_CONTROLLER, OMAnimatedSMSWTD_CONTROLLER)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Deactivated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Activated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DataProcessorStart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DataProcessingDone_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SMSWTD_CONTROLLER::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SMSWTD_CONTROLLER::Deactivated_IN(void) const {
    return rootState_subState == Deactivated;
}

inline RhpBoolean SMSWTD_CONTROLLER::Activated_IN(void) const {
    return rootState_subState == Activated;
}

inline RhpBoolean SMSWTD_CONTROLLER::state_3_IN(void) const {
    return Activated_IN();
}

inline RhpBoolean SMSWTD_CONTROLLER::state_2_IN(void) const {
    return Activated_IN();
}

inline RhpBoolean SMSWTD_CONTROLLER::DataProcessorStart_IN(void) const {
    return state_2_subState == DataProcessorStart;
}

inline RhpBoolean SMSWTD_CONTROLLER::DataProcessingDone_IN(void) const {
    return state_2_subState == DataProcessingDone;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_CONTROLLER.h
*********************************************************************/
