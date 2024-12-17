/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/

#ifndef DataProcessor_H
#define DataProcessor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "omlist.h"
//## classInstance itsImageProcessor
class ImageProcessor;

//## classInstance itsSensorDataProcessor
class SensorDataProcessor;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class DataProcessor
class DataProcessor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataProcessor(void);
    
    //## auto_generated
    ~DataProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<ImageProcessor*> getItsImageProcessor(void) const;
    
    //## auto_generated
    ImageProcessor* newItsImageProcessor(void);
    
    //## auto_generated
    void deleteItsImageProcessor(ImageProcessor* const p_ImageProcessor);
    
    //## auto_generated
    OMIterator<SensorDataProcessor*> getItsSensorDataProcessor(void) const;
    
    //## auto_generated
    SensorDataProcessor* newItsSensorDataProcessor(void);
    
    //## auto_generated
    void deleteItsSensorDataProcessor(SensorDataProcessor* const p_SensorDataProcessor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    OMList<ImageProcessor*> itsImageProcessor;		//## classInstance itsImageProcessor
    
    OMList<SensorDataProcessor*> itsSensorDataProcessor;		//## classInstance itsSensorDataProcessor
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessor.h
*********************************************************************/
