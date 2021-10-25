
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

// common interface
#define PIN_BTN1 2
#define PIN_LED1 16 //A2
#define PIN_BUZZ 15 //A1
#define PIN_LINK 17 //A3

// 9 pins by row (3 tabs)
#define PIN_TAB_1_1 14  //D14 é A0
#define PIN_TAB_1_2 3
#define PIN_TAB_1_3 4
#define PIN_TAB_2_1 5
#define PIN_TAB_2_2 6
#define PIN_TAB_2_3 7
#define PIN_TAB_3_1 8
#define PIN_TAB_3_2 9
#define PIN_TAB_3_3 10

// connected rows (3 tabs by row) D13 is last row
#define ROW_ACTIVATION_MILLIS 100
#define ROW_COUNT 2
#define PIN_ROW_1 11
#define PIN_ROW_2 13//12
#define PIN_ROW_3 //13

/* generic codes
#define CODE_0 "000"
#define CODE_1 "001"
#define CODE_2 "010"
#define CODE_3 "011"
#define CODE_4 "100"
#define CODE_5 "101"
#define CODE_6 "110"
#define CODE_7 "111"
#define TAB_SEPARATOR "-"
#define ROW_SEPARATOR ""
#define PRG_SEPARATOR "\n"
*/
//*
// escornabot codes
#define CODE_0 "G"
#define CODE_1 "W\n"
#define CODE_2 "s\n"
#define CODE_3 "w\n"
#define CODE_4 "E\n"
#define CODE_5 "n\n"
#define CODE_6 "e\n"
#define CODE_7 "g\n"
#define TAB_SEPARATOR ""
#define ROW_SEPARATOR ""
#define PRG_SEPARATOR "g\n"
//*/

#endif // _CONFIGURATION_H
