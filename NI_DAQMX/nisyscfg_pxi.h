/*============================================================================*/
/*             National Instruments / System Configuration API                */
/*----------------------------------------------------------------------------*/
/*    Copyright (c) National Instruments 2010-2016.  All Rights Reserved.     */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Title:   nisyscfg_pxi.h                                                    */
/* Purpose: Include file for PXI specific attributes to be used with the      */
/*          nisyscfg interface defined in nisyscfg.h                          */
/*                                                                            */
/*============================================================================*/

#ifndef ___nisysconfig_pxi_h___
#define ___nisysconfig_pxi_h___

/* Declares the possible values of NISysCfgPxiPropertyFanMode */
typedef enum
{
   NISysCfgPxiFanModesAuto       = 1, /* Default operating mode */
   NISysCfgPxiFanModesSafeManual = 2  /* Allows caller to manipulate the fan
                                         speed within safe boundaries by
                                         setting NISysCfgPxiPropertyFanUserRpm */
} NISysCfgPxiFanModes;

/* Declares the possible values of NISysCfgPxiPropertyClk10Source */
typedef enum
{
   NISysCfgPxiClk10SrcUnknown          = -1, /* Not applicable, or not software-readable */
   NISysCfgPxiClk10SrcInternal         = 0,  /* Internal Oscillator */
   NISysCfgPxiClk10SrcBuiltInConnector = 1,  /* External clock via the built-in connector */
   NISysCfgPxiClk10SrcTimingModule     = 2   /* System Timing Module */
} NISysCfgPxiClock10Sources;

typedef enum
{
   /* Fan control attributes */
   NISysCfgPxiPropertyFanMode     = 185597952,  /* NISysCfgPxiFanModes */
   NISysCfgPxiPropertyFanUserRpm  = 185602048,  /* unsigned int */

   /* Clock attributes */
   NISysCfgPxiPropertyClk10Source = 184635392   /* NISysCfgPxiClock10Sources */

} NISysCfgPxiProperty;

#endif
