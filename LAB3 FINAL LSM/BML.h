#include "Pump1.h"
#include "Pump2.h"
#include "Pump3.h"
#include <stdlib.h>
#include <stdio.h>

void BML ( void );
uint16 Time( void );
void MonitorPump1(uint16 u16TIME_TARGET_FOR_PUMP1);
void MonitorPump2(uint16 u16TIME_TARGET_FOR_PUMP2);
void MonitorPump3(uint16 u16TIME_TARGET_FOR_PUMP3);
void delay(int number_of_seconds);