/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245163
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteImage
//!	Generated Date	: Mon, 23, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SateliteImage.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define Default_SateliteImage_SateliteImage_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SateliteImage
SateliteImage::SateliteImage(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(SateliteImage, SateliteImage(), 0, Default_SateliteImage_SateliteImage_SERIALIZE);
}

SateliteImage::~SateliteImage(void) {
    NOTIFY_DESTRUCTOR(~SateliteImage, true);
    cleanUpRelations();
}

const SMSWTD* SateliteImage::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void SateliteImage::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSateliteImage(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void SateliteImage::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const SateliteImage* p_SateliteImage = itsSMSWTD->getItsSateliteImage();
            if(p_SateliteImage != NULL)
                {
                    itsSMSWTD->__setItsSateliteImage(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void SateliteImage::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void SateliteImage::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSateliteImage(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void SateliteImage::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSateliteImage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(SateliteImage, Default, Default, false, OMAnimatedSateliteImage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteImage.cpp
*********************************************************************/
