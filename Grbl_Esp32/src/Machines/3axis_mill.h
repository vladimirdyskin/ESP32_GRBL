#pragma once
// clang-format off

/*
    3axis_v4.h
    Part of Grbl_ESP32

    Pin assignments for the ESP32 Development Controller, v4.1 and later.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    2018    - Bart Dring
    2020    - Mitch Bradley

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
// 2 axis

#define MACHINE_NAME            "CNC"

#define N_AXIS 3
#define INVERT_LIMIT_PIN_MASK (bit(X_AXIS))
// #define DEFAULT_HOMING_CYCLE_0      (bit(Z_AXIS)) 
// #define DEFAULT_HOMING_CYCLE_1      (bit(X_AXIS))  // override this one in defaults.h
// #define DEFAULT_HOMING_CYCLE_2      0  // override this one in defaults.h
// #define ENABLE_WIFI
// #define ENABLE_CAPTIVE_PORTAL

#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_14
#define Y_STEP_PIN              GPIO_NUM_26
#define Y_DIRECTION_PIN         GPIO_NUM_15
#define Z_STEP_PIN              GPIO_NUM_27
#define Z_DIRECTION_PIN         GPIO_NUM_33

#define X_LIMIT_PIN             GPIO_NUM_17
#define Y_LIMIT_PIN             GPIO_NUM_4
#define Z_LIMIT_PIN             GPIO_NUM_16
#define CONTROL_RESET_PIN      GPIO_NUM_34
// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#define SPINDLE_TYPE SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_21   // labeled SpinPWM
#define INVERT_SPINDLE_PWM 1
// #define SPINDLE_ENABLE_PIN      GPIO_NUM_22  // labeled SpinEnbl

//#define COOLANT_MIST_PIN        GPIO_NUM_21  // labeled Mist
// #define COOLANT_FLOOD_PIN       GPIO_NUM_25  // labeled Flood
// #define PROBE_PIN               GPIO_NUM_32  // labeled Probe


/*
#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // labeled Start, needs external pullup
*/

// defaults
#define DEFAULT_STEP_PULSE_MICROSECONDS 10
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // stay on

#define DEFAULT_STEPPING_INVERT_MASK 0 // uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK 0 // uint8_t
#define DEFAULT_INVERT_ST_ENABLE 0 // boolean
#define DEFAULT_INVERT_LIMIT_PINS 1 // boolean
#define DEFAULT_INVERT_PROBE_PIN 0 // boolean

// #define DEFAULT_STATUS_REPORT_MASK 1

#define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
#define DEFAULT_ARC_TOLERANCE 0.002 // mm
// #define DEFAULT_REPORT_INCHES 0 // false

#define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
#define DEFAULT_HARD_LIMIT_ENABLE 1  // false

#define DEFAULT_HOMING_ENABLE 1
#define DEFAULT_HOMING_DIR_MASK 4 // move positive dir Z, negative X,Y
#define DEFAULT_HOMING_FEED_RATE 50.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE 750.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF 4.0 // mm

// #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
// #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm

// #define DEFAULT_LASER_MODE 0 // false

#define DEFAULT_X_STEPS_PER_MM 750.0
#define DEFAULT_Y_STEPS_PER_MM 250.0
#define DEFAULT_Z_STEPS_PER_MM 3200.0 // This is percent in servo mode...used for calibration

#define DEFAULT_X_MAX_RATE 9000.0 // mm/min
#define DEFAULT_Y_MAX_RATE 7000.0 // mm/min
#define DEFAULT_Z_MAX_RATE 400.0 // mm/min

#define DEFAULT_X_ACCELERATION 30.0 // mm/sec^2. 50 mm/sec^2 = 180000 mm/min^2
#define DEFAULT_Y_ACCELERATION 200.0 // mm/sec^2
#define DEFAULT_Z_ACCELERATION 10.0 // mm/sec^2

#define DEFAULT_X_MAX_TRAVEL 200.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 200.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Z_MAX_TRAVEL 200.0 // This is percent in servo mode...used for calibration