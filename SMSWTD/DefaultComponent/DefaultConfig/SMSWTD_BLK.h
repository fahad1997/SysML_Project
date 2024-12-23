/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_BLK
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.h
*********************************************************************/

#ifndef SMSWTD_BLK_H
#define SMSWTD_BLK_H

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
#include "omlist.h"
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## link itsDashboard
class Dashboard;

//## classInstance itsDataCollector
class DataCollector;

//## classInstance itsDataProcessor
class DataProcessor;

//## classInstance itsImageCollector
class ImageCollector;

//## link itsPredictionModel
class PredictionModel;

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTD_BLK
class SMSWTD_BLK : public OMReactive {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD_BLK;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD_BLK(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD_BLK(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    OMIterator<DataCollector*> getItsDataCollector(void) const;
    
    //## auto_generated
    DataCollector* newItsDataCollector(void);
    
    //## auto_generated
    void deleteItsDataCollector(DataCollector* const p_DataCollector);
    
    //## auto_generated
    OMIterator<DataProcessor*> getItsDataProcessor(void) const;
    
    //## auto_generated
    DataProcessor* newItsDataProcessor(void);
    
    //## auto_generated
    void deleteItsDataProcessor(DataProcessor* const p_DataProcessor);
    
    //## auto_generated
    OMIterator<ImageCollector*> getItsImageCollector(void) const;
    
    //## auto_generated
    ImageCollector* newItsImageCollector(void);
    
    //## auto_generated
    void deleteItsImageCollector(ImageCollector* const p_ImageCollector);
    
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
    
    OMList<DataCollector*> itsDataCollector;		//## classInstance itsDataCollector
    
    OMList<DataProcessor*> itsDataProcessor;		//## classInstance itsDataProcessor
    
    OMList<ImageCollector*> itsImageCollector;		//## classInstance itsImageCollector
    
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
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Deactivated:
    //## statechart_method
    inline RhpBoolean Deactivated_IN(void) const;
    
    // Activated:
    //## statechart_method
    inline RhpBoolean Activated_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum SMSWTD_BLK_Enum {
        OMNonState = 0,
        Deactivated = 1,
        Activated = 2
    };
//#]

private :

//#[ ignore
    SMSWTD_BLK_Enum rootState_subState;
    
    SMSWTD_BLK_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD_BLK : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SMSWTD_BLK, OMAnimatedSMSWTD_BLK)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Deactivated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Activated_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SMSWTD_BLK::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SMSWTD_BLK::Deactivated_IN(void) const {
    return rootState_subState == Deactivated;
}

inline RhpBoolean SMSWTD_BLK::Activated_IN(void) const {
    return rootState_subState == Activated;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_BLK.h
*********************************************************************/
