#include "CONVERTMACHINE.h"

void Volumen()
{
		uint8 u8Selection2;
		uint16 u8Dato;	
		system("cls");
		printf("Las opciones que tenemos para usted son:\n");	
		printf("1)Galon(gal) --> Litros\n2)Litros --> Galon\n3)Cuarto(qt) --> Litros\n4)Litros --> Cuarto\n5)Pie cubico(ft^3) --> Litros\n6)Litros --> Pie cubico\n\n");
    	printf("Ingrese que opcion desea elegir:");
    	scanf("%d",&u8Selection2);
    	printf("Ingrese el Valor que desee Converitr: ");
        scanf("%f",&u8Dato);
    	switch (u8Selection2)
    	{
    		case 1:
    		printf("%f Galones --> %f Litros\n",u8Dato,u8Dato*4.54609);
    		break;

    		case 2:
    		printf("%f Litros --> %f Galones\n",u8Dato,u8Dato/4.54609);
    		break;

    		case 3:
    		printf("%f Cuartos --> %f Litros\n",u8Dato,u8Dato*0.9463529);
    		break;

    		case 4:
    		printf("%f Litros --> %f Cuartos\n",u8Dato,u8Dato/0.9463529);
    		break;

    		case 5:
    		printf("%f Pies cubicos --> %f Litros\n",u8Dato,u8Dato*28.31685);
    		break;

    		case 6:
    		printf("%f Litros --> %f Pies cubicos\n",u8Dato,u8Dato/28.31685);
    		break;
    	}
}