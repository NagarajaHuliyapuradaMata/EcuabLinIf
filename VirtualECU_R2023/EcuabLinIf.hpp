#pragma once
/******************************************************************************/
/* File   : EcuabLinIf.hpp                                                         */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabLinIf.hpp"
#include "CfgEcuabLinIf.hpp"
#include "EcuabLinIf_core.hpp"
#include "infEcuabLinIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabLinIf:
      INTERFACES_EXPORTED_ECUABLINIF
      public abstract_module
   ,  public class_EcuabLinIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabLinIf_Type* lptrConst = (ConstEcuabLinIf_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabLinIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABLINIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINIF_CONST,       ECUABLINIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINIF_CONFIG_DATA, ECUABLINIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABLINIF_CODE) DeInitFunction (void);
      FUNC(void, ECUABLINIF_CODE) MainFunction   (void);
      ECUABLINIF_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabLinIf, ECUABLINIF_VAR) EcuabLinIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
