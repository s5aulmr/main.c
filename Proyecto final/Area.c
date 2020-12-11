#include "CONVERTMACHINE.h"
void Area()
{
		uint8 u8Selection2;
		uint16 u8Dato;	
		system("cls");
		printf("Las opciones que tenemos para usted son:\n");	
		printf("1)Acre(ac) --> Metro Cuadrado \n2)Metro Cuadrado(m^2) --> Acre\n3)Pies cuadrados(ft^3) --> Metros cuadrados\n4)Metros cuadrados --> Pies cuadrados");
    	printf("Ingrese que opcion desea elegir:");
    	scanf("%d",&u8Selection2);
    	printf("Ingrese el Valor que desee Converitr: \n");
        scanf("%f",&u8Dato);
    	switch (u8Selection2)
    	{
    		case 1:
    		printf("%f Acres --> %f Metros Cuadrados\n",u8Dato,u8Dato*4046.8564224);
    		break;

    		case 2:
    		printf("%f Metros Cuadrados --> %f Acres\n",u8Dato,u8Dato/4046.8564224);
    		break;

            case 3:
            printf("%f Pies cuadrados --> %f Metros cuadrados\n",u8Dato,u8Dato/10.764);
            break;

            case 4:
            printf("%f Metros cuadrados --> %f Pies cuadrados\n",u8Dato,u8Dato*10.764);

    	}
}