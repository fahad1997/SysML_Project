/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Thu, 19, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//#[ ignore
#define Default_Sensors_Sensors_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sensors
Sensors::Sensors(void) {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, Default_Sensors_Sensors_SERIALIZE);
}

Sensors::~Sensors(void) {
    NOTIFY_DESTRUCTOR(~Sensors, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensors::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Sensors, Default, Default, false, OMAnimatedSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/
