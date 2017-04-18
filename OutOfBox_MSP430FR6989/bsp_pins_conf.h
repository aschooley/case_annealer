#ifndef BSP_PINS_CONF_H
#define BSP_PINS_CONF_H

/**
 * @file bsp_pins_conf.h
 * @brief Implemntation specific pin mappings.
 * @details Contains both the hardware mappings and the logical mappings.
 * Hardware mapping correlates a pin number to a port and bit.  Logical mapping
 * is used to equate that hardware pin to a pcb function.  In addidtion to the
 * mapping information about how to setup and use the pins is included such as
 * input/output, State to set at boot up and what logic level is enabled.
 * @copyright COPYRIGHT NOTICE: (c) 2016 NASA Ames Research Center
 * @note ROM: BioSentinel Bio Payload
 * @note Processor: MSP430FR6989
 * @note Compiler: MSP-430 TI 4.4.5
 * $Id$
 */

// Application header files
#include "bsp_pins_types.h"
// Internal library header files
// Third-party library header files
#include <msp430.h>
// Standard library header files
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// *****************************************************************************
// Public macro definitions
// *****************************************************************************

// Specific to the MSP430FR6989

#define PIN_1   {1,  PORT_4,  BIT_3}
#define PIN_2   {2,  PORT_1,  BIT_4}
#define PIN_3   {3,  PORT_1,  BIT_5}
#define PIN_4   {4,  PORT_1,  BIT_6}
#define PIN_5   {5,  PORT_1,  BIT_7}
#define PIN_6   {6,  PORT_NA, BIT_NA} // LCDCAP
#define PIN_7   {7,  PORT_6,  BIT_0}
#define PIN_8   {8,  PORT_6,  BIT_1}
#define PIN_9   {9,  PORT_6,  BIT_2}
#define PIN_10  {10, PORT_6,  BIT_3}
#define PIN_11  {11, PORT_6,  BIT_4}
#define PIN_12  {12, PORT_6,  BIT_5}
#define PIN_13  {13, PORT_6,  BIT_6}
#define PIN_14  {14, PORT_2,  BIT_4}
#define PIN_15  {15, PORT_2,  BIT_5}
#define PIN_16  {16, PORT_2,  BIT_6}
#define PIN_17  {17, PORT_2,  BIT_7}
#define PIN_18  {18, PORT_10, BIT_2}
#define PIN_19  {19, PORT_5,  BIT_0}
#define PIN_20  {20, PORT_5,  BIT_1}
#define PIN_21  {21, PORT_5,  BIT_2}
#define PIN_22  {22, PORT_5,  BIT_3}
#define PIN_23  {23, PORT_3,  BIT_0}
#define PIN_24  {24, PORT_3,  BIT_1}
#define PIN_25  {25, PORT_3,  BIT_2}
#define PIN_26  {26, PORT_NA, BIT_NA} // DVSS1
#define PIN_27  {27, PORT_NA, BIT_NA} // DVCC1
#define PIN_28  {28, PORT_NA, BIT_NA} // TEST
#define PIN_29  {29, PORT_NA, BIT_NA} // RST
#define PIN_30  {30, PORT_NA, BIT_NA} // TDO
#define PIN_31  {31, PORT_NA, BIT_NA} // TDI
#define PIN_32  {32, PORT_NA, BIT_NA} // ACLK
#define PIN_33  {33, PORT_NA, BIT_NA} // TCK
#define PIN_34  {34, PORT_6,  BIT_7}
#define PIN_35  {35, PORT_7,  BIT_5}
#define PIN_36  {36, PORT_7,  BIT_6}
#define PIN_37  {37, PORT_10, BIT_1}
#define PIN_38  {38, PORT_7,  BIT_7}
#define PIN_39  {39, PORT_3,  BIT_3}
#define PIN_40  {40, PORT_3,  BIT_4}
#define PIN_41  {41, PORT_3,  BIT_5}
#define PIN_42  {42, PORT_3,  BIT_6}
#define PIN_43  {43, PORT_3,  BIT_7}
#define PIN_44  {44, PORT_8,  BIT_0}
#define PIN_45  {45, PORT_8,  BIT_1}
#define PIN_46  {46, PORT_8,  BIT_2}
#define PIN_47  {47, PORT_8,  BIT_3}
#define PIN_48  {48, PORT_2,  BIT_3}
#define PIN_49  {49, PORT_2,  BIT_2}
#define PIN_50  {50, PORT_2,  BIT_1}
#define PIN_51  {51, PORT_2,  BIT_0}
#define PIN_52  {52, PORT_7,  BIT_0}
#define PIN_53  {53, PORT_7,  BIT_1}
#define PIN_54  {54, PORT_7,  BIT_2}
#define PIN_55  {55, PORT_7,  BIT_3}
#define PIN_56  {56, PORT_7,  BIT_4}
#define PIN_57  {57, PORT_NA, BIT_NA} // DVSS2
#define PIN_58  {58, PORT_NA, BIT_NA} // DVCC2
#define PIN_59  {59, PORT_8,  BIT_4}
#define PIN_60  {60, PORT_8,  BIT_5}
#define PIN_61  {61, PORT_8,  BIT_6}
#define PIN_62  {62, PORT_8,  BIT_7}
#define PIN_63  {63, PORT_1,  BIT_3}
#define PIN_64  {64, PORT_1,  BIT_2}
#define PIN_65  {65, PORT_1,  BIT_1}
#define PIN_66  {66, PORT_1,  BIT_0}
#define PIN_67  {67, PORT_9,  BIT_0}
#define PIN_68  {68, PORT_9,  BIT_1}
#define PIN_69  {69, PORT_9,  BIT_2}
#define PIN_70  {70, PORT_9,  BIT_3}
#define PIN_71  {71, PORT_9,  BIT_4}
#define PIN_72  {72, PORT_9,  BIT_5}
#define PIN_73  {73, PORT_9,  BIT_6}
#define PIN_74  {74, PORT_9,  BIT_7}
#define PIN_75  {75, PORT_NA, BIT_NA} // ESIDVCC
#define PIN_76  {76, PORT_NA, BIT_NA} // ESIDVCC
#define PIN_77  {77, PORT_NA, BIT_NA} // ESICI
#define PIN_78  {78, PORT_NA, BIT_NA} // ESICOM
#define PIN_79  {79, PORT_NA, BIT_NA} // AVCC1
#define PIN_80  {80, PORT_NA, BIT_NA} // AVSS3
#define PIN_81  {81, PORT_NA, BIT_NA} // HFXOUT
#define PIN_82  {82, PORT_NA, BIT_NA} // HFXIN
#define PIN_83  {83, PORT_NA, BIT_NA} // AVSS1
#define PIN_84  {84, PORT_NA, BIT_NA} // LFXIN  UPDATE LATER PJ.4
#define PIN_85  {85, PORT_NA, BIT_NA} // LFXOUT UPDATE LATER PJ.5
#define PIN_86  {86, PORT_NA, BIT_NA} // AVSS2
#define PIN_87  {87, PORT_5,  BIT_4}
#define PIN_88  {88, PORT_5,  BIT_5}
#define PIN_89  {89, PORT_5,  BIT_6}
#define PIN_90  {90, PORT_5,  BIT_7}
#define PIN_91  {91, PORT_4,  BIT_4}
#define PIN_92  {92, PORT_4,  BIT_5}
#define PIN_93  {93, PORT_4,  BIT_6}
#define PIN_94  {94, PORT_4,  BIT_7}
#define PIN_95  {95, PORT_10, BIT_0}
#define PIN_96  {96, PORT_4,  BIT_0}
#define PIN_97  {97, PORT_4,  BIT_1}
#define PIN_98  {98, PORT_NA, BIT_NA} // DVSS3
#define PIN_99  {99, PORT_NA, BIT_NA} // AVCC3
#define PIN_100 {100,PORT_4,  BIT_2}



//				name    		pin		type	default		enabled	alt_fcn
#define pin_table \
	pin_table_entry(LED_1,	PIN_4,	OUTPUT,	DISABLED,	HIGH,	TERTIARY)






// *****************************************************************************
// Public data type definitions (enum, struct, typedef, union)
// *****************************************************************************

// *****************************************************************************
// Public constant definitions
// *****************************************************************************

/**
 * Struct to hold info about all of the port pins.  This is created with the
 * help of a xmacro.
 */
static const struct
{
#define pin_table_entry(a,b,c,d,e,f) pin_t a;
	pin_table
#undef pin_table_entry
}pins = {
#define pin_table_entry(a,b,c,d,e,f) {b,c,d,e,f},
		pin_table
#undef pin_table_entry
};

/**
 * Array of stringified names for each pin.  Name index matches the pin table
 * entry thanks to xmacro.
 */
static const char* const pin_names[]={
#define pin_table_entry(a,b,c,d,e,f) #a,
		pin_table
#undef pin_table_entry
};
// *****************************************************************************
// Public function prototypes
// *****************************************************************************

// *****************************************************************************
// Public inline function definitions
// *****************************************************************************

#ifdef __cplusplus
}
#endif

#endif // BSP_PINS_CONF_H
