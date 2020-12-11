#include "CONVERTMACHINE.h"

void Longitud()
{		
		uint8 u8Selection2;
		uint16 u8Dato;
        system("cls");
        printf("Las opciones que tenemos para usted son:\n");
		printf("1)Pulada(in) --> Metros\n2)Metros --> Pulgada\n3)Pie(ft) --> Metros\n4)Metros --> Pie\n5)Yarda(yd) --> Metros\n6)Metros --> Yarda\n7)Milla(mi) --> Metros\n8)Metros --> Milla\n9)Parsec(pc) --> Metros\n10)Metros --> Parsec\n\n");
    	printf("Ingrese que opcion desea elegir:");
        scanf("%d",&u8Selection2);
        printf("Ingrese el Valor que desee Converitr: ");
        scanf("%f",&u8Dato);
    	switch (u8Selection2)
    	{
    		case 1:
    		printf("%f Pulgadas --> %f Metros\n",u8Dato,u8Dato*0.0254);
    		break;

    		case 2:   		
    		printf("%f Metros --> %f Pulgadas\n",u8Dato,u8Dato/0.0254);
    		break;

    		case 3:    		
    		printf("%f Pies --> %f Metros\n",u8Dato,u8Dato*0.3048);
    		break;

    		case 4:    	
    		printf("%f Metros --> %f Pies\n",u8Dato,u8Dato/0.3048);
    		break;

    		case 5:
    		printf("%f Yardas --> %f Metros\n",u8Dato,u8Dato*0.9144);
    		break;

    		case 6:    		
    		printf("%f Metros --> %f Yardas\n",u8Dato,u8Dato/0.9144);
    		break;

    		case 7:   		
    		printf("%f Milla --> %f Metros\n",u8Dato,u8Dato*1609.34);
    		break;

    		case 8:
    		printf("%f Metros --> %f Millas\n",u8Dato,u8Dato/1609.34);
    		break;

    		case 9:
    		printf("%f Parsec --> %f Metros\n",u8Dato,u8Dato*30856775814914000);
    		break;

    		case 10:
    		printf("%f Metros --> %f Parsec\n",u8Dato,u8Dato/30856775814914000);
    		break;
    	}
}