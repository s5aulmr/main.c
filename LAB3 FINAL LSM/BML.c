#include "BML.h"
#include "Types.h"
#include <stdlib.h>
#include <stdio.h>

void BML ( void )
{
	int x = ON;
	int y = ON;
	uint8 u8Selection;
	uint16 u16TIME_TARGET_FOR_PUMP1 = OFF;
	uint16 u16TIME_TARGET_FOR_PUMP2 = OFF;
	uint16 u16TIME_TARGET_FOR_PUMP3 = OFF;
	uint16 u16T1;
	uint16 u16T2;
	uint16 u16T3;
	static uint8 u8Pump1State = ON;
	static uint8 u8Pump2State = ON;
	static uint8 u8Pump3State = ON;

	fflush(stdin);
	printf("\n\nWelcome o the configuration system for the infusion pumps\n\nPlease enter the time in seconds for each pump, Remember the time has to be 25Min or Less (1500Sec)");

	while (x == ON)
	{	
		fflush(stdin);
		printf("\nInsert timer for Pump1\n");
		u16T1 = Time();
		u16TIME_TARGET_FOR_PUMP1 = u16T1;
		
		printf("\nInsert timer for Pump2\n");
		u16T2 = Time();
		u16TIME_TARGET_FOR_PUMP2 = u16T2;
		
		printf("\nInsert timer for Pump3\n");
		u16T3 = Time();
		u16TIME_TARGET_FOR_PUMP3 = u16T3;
		
		printf("\n\n¿Would you like to reconfigure?\n 1)Yes    2)No\n");
		scanf("%d", &u8Selection);

		if (u8Selection == Selection1)
		{
			x=ON;
		}
		else if (u8Selection == Selection2)
		{
			x=OFF;
		}
		else
		{
			printf("Error: Select a valid option.\n");
		}

    }
    printf("\n\nStarting Infusion Pumps\n\n"); 

    y=ON;
    while (y == ON )
    {	
		
		if( u16TIME_TARGET_FOR_PUMP1 != OFF && u8Pump1State == ON)
		{
			
			MonitorPump1(u16TIME_TARGET_FOR_PUMP1);	
			u16TIME_TARGET_FOR_PUMP1--;
		}
		else
		{
			u8Pump1State = OFF;
		}
	
		if( u16TIME_TARGET_FOR_PUMP2 != OFF && u8Pump2State == ON )
		{
			MonitorPump2(u16TIME_TARGET_FOR_PUMP2);
			u16TIME_TARGET_FOR_PUMP2--;
		}
		else
		{
			u8Pump2State = OFF;
		}

		if( u16TIME_TARGET_FOR_PUMP3 != OFF && u8Pump3State == ON )
		{
			MonitorPump3(u16TIME_TARGET_FOR_PUMP3);	
			u16TIME_TARGET_FOR_PUMP3--;	
		}
		else
		{
			u8Pump1State = OFF;
		}

		delay(1);		/* 1 seg  */

		if ( u16TIME_TARGET_FOR_PUMP1 == OFF && u16TIME_TARGET_FOR_PUMP2 == OFF && u16TIME_TARGET_FOR_PUMP3 == OFF )
		{
			printf("\n\nCOMPLETED\n\n");
			y=OFF;
			u8Pump1State = ON;
			u8Pump2State = ON;
			u8Pump3State = ON;
		}
		else
		{
			/*/Nothing to do here/*/
		}
	}
}

uint16 Time(  void )
{	
	uint16 u16Time;
	uint8 u8Condition = ON;
	fflush(stdin);
	while ( u8Condition == ON )
	{
		scanf("%d", &u16Time);
		if ( u16Time > MAX )
		{	
			printf("Invalid Number must be between 0 to 1500\n");
			printf("Enter time");
			u8Condition = ON;
		}
		else
		{
			u8Condition = OFF;
		}
		
	}
	return u16Time;
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = CONVERTION * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 