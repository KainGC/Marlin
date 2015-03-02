/**
 * RigidBoard from Invent-A-Part pin assigments
 * http://www.inventapart.com/rigidbot.php
 */

#include "pins_RAMPS_13.h"

// Prevent compiler warnings
#undef E0_DIR_PIN
#undef E0_ENABLE_PIN
#undef E0_STEP_PIN
#undef E1_DIR_PIN
#undef E1_ENABLE_PIN
#undef E1_STEP_PIN
#undef FAN_PIN
#undef HEATER_0_PIN
#undef HEATER_1_PIN
#undef HEATER_2_PIN
#undef HEATER_BED_PIN
#undef PS_ON_PIN
#undef TEMP_0_PIN
#undef TEMP_1_PIN
#undef TEMP_2_PIN
#undef TEMP_BED_PIN

// Swap E0 and E1 pin definitions from RAMPS standard
#define E0_STEP_PIN        36
#define E0_DIR_PIN         34
#define E0_ENABLE_PIN      30

#define E1_STEP_PIN        26
#define E1_DIR_PIN         28
#define E1_ENABLE_PIN      24

// Can't use RAMPS EFB/EEB/EFF/EEF configs for the RigidBoard
#define FAN_PIN            8   // IO pin. Buffer needed
#define PS_ON_PIN          -1

#define HEATER_0_PIN       9   // EXTRUDER 1
#define HEATER_1_PIN       12  // EXTRUDER 2
#define HEATER_2_PIN       -1
#define TEMP_0_PIN         14  // ANALOG NUMBERING
#define TEMP_1_PIN         13  // ANALOG NUMBERING
#define TEMP_2_PIN         -1  // ANALOG NUMBERING
#define HEATER_BED_PIN     10  // BED
#define TEMP_BED_PIN       15  // ANALOG NUMBERING

/* RigidBoard requires a pulse to ^RESET pin of motor driver chips after
 * voltages stabilize.  You must have "#define DRIVER_RESET_FIX" in
 * Configuration.h to use this during boot */
#define DRIVER_RESET_PIN 41
