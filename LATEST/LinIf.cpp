/*****************************************************/
/* File   : LinIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "LinIf.h"

#include "LinIf_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_LinIf LinIf;
class_LinIf_EcuM LinIf_EcuM;
class_EcuM_Client *EcuM_Client_ptr_LinIf = &LinIf_EcuM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LINIF_CODE) class_LinIf_EcuM::InitFunction(void){
}

FUNC(void, LINIF_CODE) class_LinIf::GetVersionInfo(void){
}

FUNC(void, LINIF_CODE) class_LinIf::Transmit(void){
}

FUNC(void, LINIF_CODE) class_LinIf::ScheduleRequest(void){
}

FUNC(void, LINIF_CODE) class_LinIf::GoToSleep(void){
}

FUNC(void, LINIF_CODE) class_LinIf::Wakeup(void){
}

FUNC(void, LINIF_CODE) class_LinIf::GetTrcvMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf::SetTrcvMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf::GetTrcvWakeupReason(void){
}

FUNC(void, LINIF_CODE) class_LinIf::SetTrcvWakeupMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf::CancelTransmit(void){
}

FUNC(void, LINIF_CODE) class_LinIf::CheckWakeup(void){
}

FUNC(void, LINIF_CODE) class_LinIf::CbWakeupConfirmation(void){
}

FUNC(void, LINIF_CODE) class_LinIf::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

