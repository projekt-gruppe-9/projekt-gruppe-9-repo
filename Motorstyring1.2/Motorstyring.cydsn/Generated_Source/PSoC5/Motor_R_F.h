/*******************************************************************************
* File Name: Motor_R_F.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Motor_R_F_H) /* Pins Motor_R_F_H */
#define CY_PINS_Motor_R_F_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Motor_R_F_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Motor_R_F__PORT == 15 && ((Motor_R_F__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Motor_R_F_Write(uint8 value);
void    Motor_R_F_SetDriveMode(uint8 mode);
uint8   Motor_R_F_ReadDataReg(void);
uint8   Motor_R_F_Read(void);
void    Motor_R_F_SetInterruptMode(uint16 position, uint16 mode);
uint8   Motor_R_F_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Motor_R_F_SetDriveMode() function.
     *  @{
     */
        #define Motor_R_F_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Motor_R_F_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Motor_R_F_DM_RES_UP          PIN_DM_RES_UP
        #define Motor_R_F_DM_RES_DWN         PIN_DM_RES_DWN
        #define Motor_R_F_DM_OD_LO           PIN_DM_OD_LO
        #define Motor_R_F_DM_OD_HI           PIN_DM_OD_HI
        #define Motor_R_F_DM_STRONG          PIN_DM_STRONG
        #define Motor_R_F_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Motor_R_F_MASK               Motor_R_F__MASK
#define Motor_R_F_SHIFT              Motor_R_F__SHIFT
#define Motor_R_F_WIDTH              1u

/* Interrupt constants */
#if defined(Motor_R_F__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Motor_R_F_SetInterruptMode() function.
     *  @{
     */
        #define Motor_R_F_INTR_NONE      (uint16)(0x0000u)
        #define Motor_R_F_INTR_RISING    (uint16)(0x0001u)
        #define Motor_R_F_INTR_FALLING   (uint16)(0x0002u)
        #define Motor_R_F_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Motor_R_F_INTR_MASK      (0x01u) 
#endif /* (Motor_R_F__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Motor_R_F_PS                     (* (reg8 *) Motor_R_F__PS)
/* Data Register */
#define Motor_R_F_DR                     (* (reg8 *) Motor_R_F__DR)
/* Port Number */
#define Motor_R_F_PRT_NUM                (* (reg8 *) Motor_R_F__PRT) 
/* Connect to Analog Globals */                                                  
#define Motor_R_F_AG                     (* (reg8 *) Motor_R_F__AG)                       
/* Analog MUX bux enable */
#define Motor_R_F_AMUX                   (* (reg8 *) Motor_R_F__AMUX) 
/* Bidirectional Enable */                                                        
#define Motor_R_F_BIE                    (* (reg8 *) Motor_R_F__BIE)
/* Bit-mask for Aliased Register Access */
#define Motor_R_F_BIT_MASK               (* (reg8 *) Motor_R_F__BIT_MASK)
/* Bypass Enable */
#define Motor_R_F_BYP                    (* (reg8 *) Motor_R_F__BYP)
/* Port wide control signals */                                                   
#define Motor_R_F_CTL                    (* (reg8 *) Motor_R_F__CTL)
/* Drive Modes */
#define Motor_R_F_DM0                    (* (reg8 *) Motor_R_F__DM0) 
#define Motor_R_F_DM1                    (* (reg8 *) Motor_R_F__DM1)
#define Motor_R_F_DM2                    (* (reg8 *) Motor_R_F__DM2) 
/* Input Buffer Disable Override */
#define Motor_R_F_INP_DIS                (* (reg8 *) Motor_R_F__INP_DIS)
/* LCD Common or Segment Drive */
#define Motor_R_F_LCD_COM_SEG            (* (reg8 *) Motor_R_F__LCD_COM_SEG)
/* Enable Segment LCD */
#define Motor_R_F_LCD_EN                 (* (reg8 *) Motor_R_F__LCD_EN)
/* Slew Rate Control */
#define Motor_R_F_SLW                    (* (reg8 *) Motor_R_F__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Motor_R_F_PRTDSI__CAPS_SEL       (* (reg8 *) Motor_R_F__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Motor_R_F_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Motor_R_F__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Motor_R_F_PRTDSI__OE_SEL0        (* (reg8 *) Motor_R_F__PRTDSI__OE_SEL0) 
#define Motor_R_F_PRTDSI__OE_SEL1        (* (reg8 *) Motor_R_F__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Motor_R_F_PRTDSI__OUT_SEL0       (* (reg8 *) Motor_R_F__PRTDSI__OUT_SEL0) 
#define Motor_R_F_PRTDSI__OUT_SEL1       (* (reg8 *) Motor_R_F__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Motor_R_F_PRTDSI__SYNC_OUT       (* (reg8 *) Motor_R_F__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Motor_R_F__SIO_CFG)
    #define Motor_R_F_SIO_HYST_EN        (* (reg8 *) Motor_R_F__SIO_HYST_EN)
    #define Motor_R_F_SIO_REG_HIFREQ     (* (reg8 *) Motor_R_F__SIO_REG_HIFREQ)
    #define Motor_R_F_SIO_CFG            (* (reg8 *) Motor_R_F__SIO_CFG)
    #define Motor_R_F_SIO_DIFF           (* (reg8 *) Motor_R_F__SIO_DIFF)
#endif /* (Motor_R_F__SIO_CFG) */

/* Interrupt Registers */
#if defined(Motor_R_F__INTSTAT)
    #define Motor_R_F_INTSTAT            (* (reg8 *) Motor_R_F__INTSTAT)
    #define Motor_R_F_SNAP               (* (reg8 *) Motor_R_F__SNAP)
    
	#define Motor_R_F_0_INTTYPE_REG 		(* (reg8 *) Motor_R_F__0__INTTYPE)
#endif /* (Motor_R_F__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Motor_R_F_H */


/* [] END OF FILE */
