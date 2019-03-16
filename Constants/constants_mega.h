#define XMIN 3
#define XMAX 2
#define YMIN 14
#define YMAX 15
#define ZMIN 18
#define ZMAX 19

#define CUT_MICROSTEP_MULTIPLIER 1
#define FULL_CUT_ROTATION 200*CUT_MICROSTEP_MULTIPLIER
#define FULL_FEED_ROTATION 200

// Input pins
#define FEEDER XMIN
#define CUTTER XMAX
#define CUTTER_DISABLE_RELAY YMIN
#define EMERGENCY_STOP YMAX
#define MEGA_CUT_HOME ZMAX // Snap cut motor encoder control pin

#define THERMO_SO 32 // AUX-4
#define THERMO_CS 47
#define THERMO_SC 45

// Output pins
#define SNAP_CUT_HOME ZMIN
#define SSR A3 // AUX-1 Solid State Relay control pin for hot knife

// Addresses
#define ADDR_TEMPERATURE 0
#define ADDR_FEED_SPEED 8
#define ADDR_CUT_SPEED 16
#define ADDR_LABEL_DELAY 24
#define SpAddress 32
#define ADDR_KP 40
#define ADDR_KI 48
#define ADDR_KD 56

// Default values
#define PID_SETPOINT_DEFAULT 800
#define FEED_SPEED_DEFAULT 2000
#define CUT_SPEED_DEFAULT 2500
#define CUT_LABEL_SHIFT_DELAY_DEFAULT 0

#define KP_DEFAULT 60
#define KI_DEFAULT 10 
#define KD_DEFAULT 40

#define EEPROM_NO_DATA -1

// Functions
#define Sprintln(a) (Serial.println(a))
#define Sprint(a) (Serial.print(a));

// Unused
#define M1_STEP 54
#define M1_DIR 55
#define M1_EN 38
#define M2_STEP 60
#define M2_DIR 61
#define M2_EN 56