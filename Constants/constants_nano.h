// 
#define BEEPER_PIN        EXP1_1
#define ENC_MAIN_BTN      EXP1_2
#define ENC_MAIN_B        EXP2_5
#define ENC_MAIN_A        EXP2_3
#define LCD_PINS_D4       EXP1_5
#define LCD_PINS_ENABLE   EXP1_3
#define LCD_PINS_RS       EXP1_4

#define GND               AUX3_1
#define VCC               AUX3_7

#define EXP1_1 AUX09
#define EXP1_2 AUX10
#define EXP2_5 AUX11
#define EXP2_3 AUX12
#define EXP1_5 AUX16
#define EXP1_3 AUX17
#define EXP1_4 AUX18

#define AUX09 2
#define AUX10 3
#define AUX11 4
#define AUX12 5
#define AUX16 9
#define AUX17 10
#define AUX18 11

// #define AUX09 NC
// #define AUX10 3
// #define AUX11 4
// #define AUX12 5
// #define AUX16 9
// #define AUX17 10
// #define AUX18 11

#define ST7920_CLK_PIN  LCD_PINS_D4
#define ST7920_DAT_PIN  LCD_PINS_ENABLE
#define ST7920_CS_PIN   LCD_PINS_RS

#define SPI_SPEED_MAX 1000000
#define SPI_DATA_ORDER MSBFIRST
#define SPI_DATA_MODE SPI_MODE0

#define FEEDER A0
#define CUTTER A1

#define SHIFTMIN 0
#define SHIFTMAX 255
#define SHIFTMAX2 0xFFFFFFFF

#define FEEDER_BIT_TO_TRANSFER 2
#define CUTTER_BIT_TO_TRANSFER 1

#define ADDR_TEMPERATURE 0
#define ADDR_FEED_SPEED 8
#define ADDR_CUT_SPEED 16
#define ADDR_LABEL_DELAY 24
#define SpAddress 32
#define ADDR_KP 40
#define ADDR_KI 48
#define ADDR_KD 56

// Default values
#define CUT_LABEL_SHIFT_DELAY_DEFAULT 0
#define PID_SETPOINT_DEFAULT 800
#define FEED_SPEED_DEFAULT 2100
#define CUT_SPEED_DEFAULT 2400
#define KP_DEFAULT 60
#define KI_DEFAULT 10 
#define KD_DEFAULT 40

// Threshold for values
// TODO: Still need to update these values
const int CUT_DELAY_THRESHOLD_MAX = 100;
const int CUT_DELAY_THRESHOLD_MIN = 0;
const int PID_SETPOINT_THRESHOLD_MIN = 0;
const int PID_SETPOINT_THRESHOLD_MAX = 850;
const int FEED_SPEED_THRESHOLD_MAX = 2000;
const int FEED_SPEED_THRESHOLD_MIN = 0;
const int CUT_SPEED_THRESHOLD_MAX = 2000;
const int CUT_SPEED_THRESHOLD_MIN = 0;
const int KP_THRESHOLD_MAX = 1000;
const int KI_THRESHOLD_MAX = 1000; 
const int KD_THRESHOLD_MAX = 1000;
const int KP_THRESHOLD_MIN = 1;
const int KI_THRESHOLD_MIN = 1; 
const int KD_THRESHOLD_MIN = 1;

#define EEPROM_NO_DATA -1

#define Sprintln(a) (Serial.println(a))
#define Sprint(a) (Serial.print(a))
