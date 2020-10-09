#define GENFUN_H_

/*/Data Types/*/

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

/*/Definitions/*/

#define ASCII_CONVERTION_FACTOR 32

#define ASCII_MAYUS_LOW_THRESHOLD 96
#define ASCII_MAYUS_HIGH_THRESHOLD 123

#define ASCII_MINUS_LOW_THRESHOLD 64
#define ASCII_MINUS_HIGH_THRESHOLD 91

#define MIN_FILTER_LIMIT 40
#define MAX_FILTER_LIMIT 70


/*/Functions/*/

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList);
void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList);
uint8 GENFUN_u8GetOccurence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList );
uint8 GENFUN_u8GetAverage ( uint8 *pu8Src, uint8 u8SizeOfList );
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList);
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest);
void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal);

/*/Generate Randoms/*/
uint8 pRandoms(uint8 low, uint8 up,  uint8 count);
