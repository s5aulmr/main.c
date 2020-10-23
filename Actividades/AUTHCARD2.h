#define AUTHCARD2_H_

/*/Data Types/*/

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

/*/Definitions/*/

#define CARD_DIGITS 16
#define CARD_FILTER_THRESHOLD 9

/*/Functions/*/

void AUTHCARD_LuhnMethod(char u8Card_Number[]);