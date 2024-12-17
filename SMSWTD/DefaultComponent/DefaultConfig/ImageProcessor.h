/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245157
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ImageProcessor
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/

#ifndef ImageProcessor_H
#define ImageProcessor_H

//## auto_generated
#include <oxf.h>
//## link itsDataPublisher
class DataPublisher;

//## link itsDataStorage
class DataStorage;

//## package SMSWTD_SYSTEM::ANALYSIS

//## class ImageProcessor
class ImageProcessor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ImageProcessor(void);
    
    //## auto_generated
    ~ImageProcessor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataPublisher* getItsDataPublisher(void) const;
    
    //## auto_generated
    void setItsDataPublisher(DataPublisher* const p_DataPublisher);
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataPublisher* itsDataPublisher;		//## link itsDataPublisher
    
    DataStorage* itsDataStorage;		//## link itsDataStorage
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ImageProcessor.h
*********************************************************************/
