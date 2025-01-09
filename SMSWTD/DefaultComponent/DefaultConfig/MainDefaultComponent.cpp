/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ANALYSIS.h"
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "PKG_DASHBOARD.h"
//## auto_generated
#include "PKG_DATA_COLLECTOR.h"
//## auto_generated
#include "PKG_NOTIFICATION_SERVICE.h"
//## auto_generated
#include "PKG_PREDICTION_MODEL.h"
//## auto_generated
#include "PKG_SMSWTD_CONTROLLER.h"
//## auto_generated
#include "UC_DATA_PROCESSOR.h"
//## auto_generated
#include "UC_SMSWTD.h"
DefaultComponent::DefaultComponent(void) {
    DESIGN_initRelations();
    (void) DESIGN_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                DefaultComponent initializer_DefaultComponent;
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
