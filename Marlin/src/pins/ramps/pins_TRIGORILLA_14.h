/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega with RAMPS v1.4 for Anycubic
 */

#define BOARD_INFO_NAME "Anycubic RAMPS 1.4"

// Board labeled pins:

#define TG_HEATER_BED_PIN                      8
#define RAMPS_D8_PIN                          TG_HEATER_BED_PIN

#define TG_HEATER_0_PIN                       10
#define RAMPS_D10_PIN                         TG_HEATER_0_PIN

//#define TG_HEATER_1_PIN                       45  // Anycubic AI3M : Unused

#define FAN_PIN                                9
#define FAN1_PIN                               7
#define FAN2_PIN                              44


//
// Limit Switches
//

  #define X_MIN_PIN                           3
  #define Y_MIN_PIN                           42
  #define Z_MIN_PIN                           18
  #define X_MAX_PIN                           43  //Z2_MIN_PIN

// Others
  #define Z_MIN_PROBE_PIN                     2
  #define FIL_RUNOUT_PIN                      19
  #define BEEPER_PIN                          31
  #define SD_DETECT_PIN                       49
  //#define PS_ON_PIN                           12
  //#define KILL_PIN                            11
  #define SDSS                                53

//
// Servos
// in Trigorilla 1.0 (TRIGORILLA_14), SERVO0_PIN is 11
// in Trigorilla 1.1 (TRIGORILLA_14_11), SERVO0_PIN is 5
// but you can choise 11, 5, 6 or 4, or -1 if not use servo and use pin's for others uses.

#if MB(TRIGORILLA_14_11)
  #define SERVO0_PIN                           5
#else  
  #define SERVO0_PIN                           11
#endif

#define SERVO1_PIN                            -1
#define SERVO2_PIN                            -1
#define SERVO3_PIN                            -1
      


#include "pins_RAMPS.h"
