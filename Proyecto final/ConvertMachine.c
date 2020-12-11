#include "CONVERTMACHINE.h"

void main()
{
	uint8 u8Password;
	uint8 u8Validation = False;
	uint8 u8Selection1;

    while (u8Validation == False)
    {
        system("cls");
        printf("\nBienvenido al conversor de unidades\n\nInserta la contrasena: ");
        scanf("%d", &u8Password);

    	if (u8Password == PASSWORD)
        {
            printf("Aceptada.\n");
            u8Validation = True;
		}
  	
  	    else
    	{
    		printf("No Valida.\n");
    	}
        delay(1);
    }
    while (u8Validation == True)
    {
        system("cls");
    	printf("\nQue te gustaria convertir?\n");
    	printf("1)LONGITUD\n\n2)MASA\n\n3)VOLUMEN\n\n4)AREA\n\n5)OTROS\n\n\nIngrese la respuesta: ");
    	scanf("%d",&u8Selection1);

    	if (u8Selection1 == 1)
   		{
    		Longitud();
    	}

    	else if (u8Selection1 == 2)
    	{
    		Masa();
    	}

    	else if (u8Selection1 == 3)
    	{
    		Volumen();
    	}

    	else if (u8Selection1 == 4)
    	{
    		Area();
    	}

    	else if (u8Selection1 == 5)
    	{
    		Otros();
    	}

    	else
    	{
    		printf("ERROR: NOT A VALID ACTION\n");
    		exit(-1);
    	}
        delay(2);
    	printf("\nLe gustaria hacer otra conversion?\n1)Si       2)No\n\n");
    	scanf("%d",&u8Validation);

    	if (u8Validation == True)
    	{
            delay(2);
    		//se reinicia ciclo
    	}

    	else if (u8Validation == False)
    	{
            delay(1);
            printf("Gracias por usar nuestro conversor\n");
    		u8Validation = False;
    	}

    	else 
    	{
    		printf("ERROR: NOT A VALID ACTION\n");
    		exit(-1);
    	}
        
    }

}