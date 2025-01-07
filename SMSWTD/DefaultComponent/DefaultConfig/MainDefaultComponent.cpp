/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ANALYSIS.h"
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "UC_DATA_PROCESSOR.h"
//## auto_generated
#include "UC_SMSWTD.h"
//## auto_generated
#include "DataProcessor.h"
DefaultComponent::DefaultComponent(void) {
    DESIGN_initRelations();
    (void) DESIGN_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                DataProcessor p_DataProcessor;
                p_DataProcessor.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_DataProcessor.startBehavior();
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
