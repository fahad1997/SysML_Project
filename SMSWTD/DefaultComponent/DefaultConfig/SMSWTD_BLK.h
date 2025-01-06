/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_BLK
//!	Generated Date	: Mon, 6, Jan 2025  
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
    ////    Constructors and destructors    ////
    
public :

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
