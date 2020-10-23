#include <stdio.h>
#include "AUTHCARD2.h"
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  char u8Card_Number[16];
  int Check = 0;	
  printf("Please Insert You Card Number\n");
  gets(u8Card_Number);
  printf("Your card number is: %s?\n 1)Yes  2)No.\n", u8Card_Number);
  scanf("%d",&Check);
  if (Check == 1)
  AUTHCARD_LuhnMethod(u8Card_Number);

  else if (Check == 2)
  {
  printf("The program will restart, make sure you put the right number this time.");
  exit(-1);
  }

  else
  {
  printf("ERROR");
  exit(-1);
  }
  return 0;
}

void AUTHCARD_LuhnMethod(char u8Card_Number[])
{
  uint8 i;
  uint16 u16Sum = 0;
  uint16 u16Sum2 = 0;
  
  for(i = 0; i < CARD_DIGITS; i++)
  {
  	if(i%2 == 0)
    {
      u16Sum = (u8Card_Number[i]-'0') * 2;
      if(u16Sum > CARD_FILTER_THRESHOLD)
       		 u16Sum = (u16Sum - 9);
    } 
    
    else
      u16Sum = u8Card_Number[i]-'0';

    u16Sum2 = u16Sum2 + u16Sum;
  }
 
  printf("Your Final Validation Number is: %d\n\n", u16Sum2);


  if(u16Sum2%10 == 0)
  {
    printf("Congratulations! Your card have been validated");
  }
  else 
  {
    printf("Your card validation have failed, try with another card");
  }
}