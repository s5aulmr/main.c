#include "CONVERTMACHINE.h"

void Masa()
{
		uint8 u8Selection2;
		uint16 u8Dato;	
		system("cls");
		printf("Las opciones que tenemos para usted son:\n");	
		printf("1)Liba(lb) --> Gramos\n2)Gramos --> Libra\n3)Onza(oz) --> Gramos\n4)Gramos --> Onza\n5)ToneladaIngles(ton) --> ToneladaSI\n6)ToneladaSI --> ToneladaIngles\n\n");
    	printf("Ingrese que opcion desea elegir:");
    	scanf("%d",&u8Selection2);
    	printf("Ingrese el Valor que desee Converitr: ");
        scanf("%f",&u8Dato);
    	switch (u8Selection2)
    	{
    		case 1:
    		printf("%f Libras --> %f Gramos\n",u8Dato,u8Dato/0.0022046);
    		break;

    		case 2:
    		printf("%f Gramos --> %f Libras\n",u8Dato,u8Dato*0.0022046);
    		break;

    		case 3:
    		printf("%f Onza --> %f Gramos\n",u8Dato,u8Dato/0.035274);
    		break;

    		case 4:
    		printf("%f Gramos --> %f Onza\n",u8Dato,u8Dato*0.035274);
    		break;

    		case 5:
    		printf("%f ToneladaIngles --> %f ToneladaSI\n",u8Dato,u8Dato*0.90718474);
    		break;

    		case 6:
    		printf("%f ToneladaSI --> %f ToneladaIngles\n",u8Dato,u8Dato/0.90718474);
    		break;
    	}    	
}