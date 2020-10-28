#include <stdio.h>
#include "PARKINGSYSTEM.h"
#include <stdlib.h>
/* Descripcion 

->Crear un programa que simule un estacionamiento con 5 diferentes secciones 0, 1, 2, 3 o 4. Cada seccion tendra un cupo maximo de carros que sera definido por Defines diferentes. 
->Se tiene que usar un arreglo de estructuras para manejar los estacionamientos, la estructura es la de abajo.
->El programa correra en un ciclo infinito y habra funciones aleatorias que metan y saquen carros de las diferentes secciones.
->El programa debe tener una logica que atienda las peticiones siguientes con funciones:
	*Obtener el numero de espacios disponibles de una seccion (F1)
	*Obtener el numero de espacios no disponibles de una seccion (F2)
	*Obtener ganancias de sección(F3)
	*Registrar vehiculo ingresado(F4)
	*Remover vehiculo(F5)
	*Registrar pago de vehiculo ingresado(F6)
*/

/* Fucniones */
/*
->(F1) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion
->(F2) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
->(F3) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección
->(F4) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita ingresar un vehiculo a esa seccion
->(F5) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion
->(F6) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y registre el pago por haber ingresado el vehiculo
*/

tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;						/*Struct to Use*/

void main ( void )
{
	uint8 u8InputAction = 0; 
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0; 
	while(1)
	{
		fflush(stdin);
		printf("Press 1 to -> Read Available Slots\n");
		printf("Press 2 to -> Read Unavailable Slots\n");
		printf("Press 3 to -> Read Earned Money\n");
		printf("Press 4 to -> Enter a Car to a Section\n");
		printf("Press 5 to -> Remove a Car from a Section\n");
		printf("Enter selection: ");
        
		scanf("%d", &u8InputAction);
        system("cls");
		printf("\nAction Selected ---> %d\n", u8InputAction );

		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("Sector Selected ---> %d\n\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{   
                if (enSector == 0)
                {    
                    ShowAvailableSlots ( enSector0 );
                }

                else if (enSector == 1)
                {
                    ShowAvailableSlots ( enSector1 );
                }
                        
                else if (enSector == 2)
                {
                    ShowAvailableSlots ( enSector2 );
                }

                else if (enSector == 3)
                {
                    ShowAvailableSlots ( enSector3 );
                }

                else if (enSector == 4)
                {
                    ShowAvailableSlots ( enSector4 );
                }

                else
                {
                    /*/Nothing to do here/*/
                }
            }
			else if( u8InputAction == 2 )
			{
                if (enSector == 0)
                {    
                    ShowNotAvailableSlots ( enSector0 );
                }

                else if (enSector == 1)
                {
                    ShowNotAvailableSlots ( enSector1 );
                }
                        
                else if (enSector == 2)
                {
                    ShowNotAvailableSlots ( enSector2 );
                }

                else if (enSector == 3)
                {
                    ShowNotAvailableSlots ( enSector3 );
                }

                else if (enSector == 4)
                {
                    ShowNotAvailableSlots ( enSector4 );
                }

                else
                {
                    /*/Nothing to do here/*/
                }
			}
			else if( u8InputAction == 3 )
			{
                if (enSector == 0)
                {    
                    ShowEarnedMoney ( enSector0 );
                }

                else if (enSector == 1)
                {
                    ShowEarnedMoney ( enSector1 );
                }
                        
                else if (enSector == 2)
                {
                    ShowEarnedMoney ( enSector2 );
                }

                else if (enSector == 3)
                {
                    ShowEarnedMoney ( enSector3 );
                }

                else if (enSector == 4)
                {
                    ShowEarnedMoney ( enSector4 );
                }

                else
                {
                    /*/Nothing to do here/*/
                }
			}
			else if( u8InputAction == 4 )
			{
                if (enSector == 0)
                {    
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector0 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("Slots are full");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector0 );
                    }
                }

                else if (enSector == 1)
                {   
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector1 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("Slots are full");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector1 );
                    }
                }
                        
                else if (enSector == 2)
                {    
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector2 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("Slots are full");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector2 );
                    }                 
                }

                else if (enSector == 3)
                {    
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector3 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("Slots are full");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector3 );
                    }
                }

                else if (enSector == 4)
                {    
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector4 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("Slots are full");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector4 );
                    }
                }

                else
                {
                    /*/Nothing to do here/*/
                }
			}
			else if ( u8InputAction == 5 )
			{
                if (enSector == 0)
                {
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector0 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("Slots are empty");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("The car has been removed");
                    }
                }

                else if (enSector == 1)
                {    
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector1 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("Slots are empty");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("The car has been removed");
                    } 
                }
                        
                else if (enSector == 2)
                {    
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector2 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("Slots are empty");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("The car has been removed");
                    }
                }

                else if (enSector == 3)
                {    
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector3 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("Slots are empty");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("The car has been removed");
                    }
                }

                else if (enSector == 4)
                {    
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector4 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("Slots are empty");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("The car has been removed");
                    }
                }

                else
                {
                    /*/Nothing to do here/*/
                }             
			}
			else
			{
                printf("Not a valid Action");
			}
			printf("\n\n");
		}
		else
		{
			printf("Not a valid Sector");
		}
    
	}
}

/*F1*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
    
    if (enCurrentSector == 0)
    {
        printf("There are %d/%d free slots", astMyParks[enSector0].u8AvailableSlots, astMyParks[enSector0].u8MaxSlots );
    }

    else if (enCurrentSector == 1)
    {    
        printf("There are %d/%d free slots", astMyParks[enSector1].u8AvailableSlots, astMyParks[enSector1].u8MaxSlots );
    }
                        
    else if (enCurrentSector == 2)
    {    
        printf("There are %d/%d free slots", astMyParks[enSector2].u8AvailableSlots, astMyParks[enSector2].u8MaxSlots );
    }

    else if (enCurrentSector == 3)
    {    
        printf("There are %d/%d free slots", astMyParks[enSector3].u8AvailableSlots, astMyParks[enSector3].u8MaxSlots );
    }

    else if (enCurrentSector == 4)
    {    
        printf("There are %d/%d free slots", astMyParks[enSector4].u8AvailableSlots, astMyParks[enSector4].u8MaxSlots );
    }

    else
    {
        /*/Nothing to do here/*/
    }
}

/*F2*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{

    if (enCurrentSector == 0)
    {
        printf("There are %d/%d occupied slots", astMyParks[enSector0].u8NotAvailableSlots, astMyParks[enSector0].u8MaxSlots );
    }

    else if (enCurrentSector == 1)
    {    
        printf("There are %d/%d occupied slots", astMyParks[enSector1].u8NotAvailableSlots, astMyParks[enSector1].u8MaxSlots );
    }
                        
    else if (enCurrentSector == 2)
    {    
        printf("There are %d/%d occupied slots", astMyParks[enSector2].u8NotAvailableSlots, astMyParks[enSector2].u8MaxSlots );
    }

    else if (enCurrentSector == 3)
    {    
        printf("There are %d/%d occupied slots", astMyParks[enSector3].u8NotAvailableSlots, astMyParks[enSector3].u8MaxSlots );
    }

    else if (enCurrentSector == 4)
    {    
        printf("There are %d/%d occupied slots", astMyParks[enSector4].u8NotAvailableSlots, astMyParks[enSector4].u8MaxSlots );
    }

    else
    {
        /*/Nothing to do here/*/
    }
}

/*F3*/
void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
    if (enCurrentSector == 0)
    {    
        printf("Money Earned ---> $%d", astMyParks[enSector0].u32MoneyEarn );
    }

    else if (enCurrentSector == 1)
    {    
        printf("Money Earned ---> $%d", astMyParks[enSector1].u32MoneyEarn );
    }
                        
    else if (enCurrentSector == 2)
    {    
        printf("Money Earned ---> $%d", astMyParks[enSector2].u32MoneyEarn );
    }

    else if (enCurrentSector == 3)
    {    
        printf("Money Earned ---> $%d", astMyParks[enSector3].u32MoneyEarn );
    }

    else if (enCurrentSector == 4)
    {
        printf("Money Earned ---> $%d", astMyParks[enSector4].u32MoneyEarn );
    } 

    else
    {
        /*/Nothing to do here/*/
    }   
}

/*F4*/
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
    if (enCurrentSector == 0)
    {    
        if ( astMyParks[enSector0].u8NotAvailableSlots == SECTOR0_SLOTS )
        {
            return 0;
        } 
        else 
        {
            astMyParks[enSector0].u8AvailableSlots--;
            astMyParks[enSector0].u8NotAvailableSlots++;
            return 1;
        }
    }

    else if (enCurrentSector == 1)
    {   
        if ( astMyParks[enSector1].u8NotAvailableSlots == SECTOR1_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector1].u8AvailableSlots--;
            astMyParks[enSector1].u8NotAvailableSlots++;
            return 1;
        }
    }
                        
    else if (enCurrentSector == 2)
    {
        if ( astMyParks[enSector2].u8NotAvailableSlots == SECTOR2_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector2].u8AvailableSlots--;
            astMyParks[enSector2].u8NotAvailableSlots++;
            return 1;
        }
    }

    else if (enCurrentSector == 3)
    {
        if ( astMyParks[enSector3].u8NotAvailableSlots == SECTOR3_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector3].u8AvailableSlots--;
            astMyParks[enSector3].u8NotAvailableSlots++;
            return 1;
        }
    }

    else if (enCurrentSector == 4)
    {
        if ( astMyParks[enSector4].u8NotAvailableSlots == SECTOR4_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector4].u8AvailableSlots--;
            astMyParks[enSector4].u8NotAvailableSlots++;
            return 1;
        }
    }

    else
    {
        /*/Nothing to do here/*/
    }
}

/*F5*/
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
    if (enCurrentSector == 0)
    {    
        if ( astMyParks[enSector0].u8AvailableSlots == SECTOR0_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector0].u8AvailableSlots++;
            astMyParks[enSector0].u8NotAvailableSlots--;
            return 1;
        }
    }

    else if (enCurrentSector == 1)
    {
        if ( astMyParks[enSector1].u8AvailableSlots == SECTOR1_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector1].u8AvailableSlots++;
            astMyParks[enSector1].u8NotAvailableSlots--;
            return 1;
        }
    }
                        
    else if (enCurrentSector == 2)
    {
        if ( astMyParks[enSector2].u8AvailableSlots == SECTOR2_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector2].u8AvailableSlots++;
            astMyParks[enSector2].u8NotAvailableSlots--;
            return 1;
        }
    }

    else if (enCurrentSector == 3)
    {
        if ( astMyParks[enSector3].u8AvailableSlots == SECTOR3_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector3].u8AvailableSlots++;
            astMyParks[enSector3].u8NotAvailableSlots--;
            return 1;
        }
    }

    else if (enCurrentSector == 4)
    {
        if ( astMyParks[enSector4].u8AvailableSlots == SECTOR4_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector4].u8AvailableSlots++;
            astMyParks[enSector4].u8NotAvailableSlots--;
            return 1;
        }
    }

    else
    {
        /*/Nothing to do here/*/
    }  
}

/*F6*/
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
    if (enCurrentSector == 0)
    {
        astMyParks[enSector0].u32MoneyEarn += PRICE;
    }

    else if (enCurrentSector == 1)
    {
        astMyParks[enSector1].u32MoneyEarn += PRICE;
    }
                        
    else if (enCurrentSector == 2)
    {
        astMyParks[enSector2].u32MoneyEarn += PRICE;
    }

    else if (enCurrentSector == 3)
    {
        astMyParks[enSector3].u32MoneyEarn += PRICE;
    }

    else if (enCurrentSector == 4)
    {
        astMyParks[enSector4].u32MoneyEarn += PRICE;
    }

    else
    {
        /*/Nothing to do here/*/
    }
}