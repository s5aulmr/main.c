#include "CONVERTMACHINE.h"
void Otros()
{
        uint8 u8Selection2;
        uint16 u8Dato;  
        system("cls");  
        printf("Las opciones que tenemos para usted son:\n");
		printf("1)LibraFuerza(lbf) --> Newton\n2)Newton(N) --> LibraFuerza\n3)Celsius(c) --> Fahrenheit\n4)Fahrenheit(f) --> Celsius\n5)Celsius --> Kelvin\n6)Kelvin(k) --> Celsius\n7)Kilometros/hora(km/h) --> Millas/hora\n8)Millas/hora(m/h) --> Kilometros/hora\n9)Atmosferas(atm) --> Pascales\n10)Pascales(pa) --> Atmosferas\n11)Milimetros de mercurio (mmHg) --> Pascales\n12)Pascales(pa) --> Milimetros de mercurio\n13)Joul(J) --> Caloria\n14)Caloria(cal) --> Joul\n15)Kilowatt(kW) --> Horsepower\n16)Horsepower(hp) --> Kilowatt\n\n");
    	printf("Ingrese que opcion desea elegir:");
    	scanf("%d",&u8Selection2);
    	printf("Ingrese el Valor que desee Converitr: \n");
        scanf("%f",&u8Dato);
    	switch (u8Selection2)
    	{
    		case 1:
    		printf("%f LibrasFuerza --> %f Newtons\n",u8Dato,u8Dato*4.44822);
    		break;

    		case 2:
    		printf("%f Newtons --> %f LibrasFuerza\n",u8Dato,u8Dato/4.44822);
    		break;

    		case 3:
    		printf("%f Celsius --> %f Fahrenheit\n",u8Dato,(u8Dato*9/5)+32);
    		break;

    		case 4:
    		printf("%f Fahrenheit --> %f Celsius\n",u8Dato,(u8Dato-32)/1.8);
    		break;

    		case 5:
    		printf("%f Celsius --> %f Kelvin\n",u8Dato,u8Dato+273.15);
    		break;

    		case 6:
    		printf("%f Kelvin --> %f Celsius\n",u8Dato,u8Dato-273.15);
    		break;

    		case 7:
    		printf("%f Kilometros/hora --> %f Millas/hora\n",u8Dato,u8Dato*0.621371);
    		break;

    		case 8:
    		printf("%f Millas/hora --> %f Kilometros/hora\n",u8Dato,u8Dato/0.621371);
    		break;

    		case 9:
    		printf("%f Atmosferas --> %f Pascales\n",u8Dato,u8Dato*101325);
    		break;

    		case 10:
    		printf("%f Pascales --> %f Atmosferas\n",u8Dato,u8Dato/101325);
    		break;

    		case 11:
    		printf("%f Milimetros de mercurio --> %f Pascales\n",u8Dato,u8Dato*133.322);
    		break;

    		case 12:
    		printf("%f Pascales --> %f Milimetros de mercurio\n",u8Dato,u8Dato/133.322);
    		break;

    		case 13:
    		printf("%f Joules --> %f Calorias\n",u8Dato,u8Dato*0.2388);
    		break;

    		case 14:
    		printf("%f Calorias --> %f Joules\n",u8Dato,u8Dato/0.2388);
    		break;

    		case 15:
    		printf("%f Kilowatts --> %f Horsepower\n",u8Dato,u8Dato*1.34102);
    		break;

    		case 16:
    		printf("%f Horsepower --> %f Kilowatts\n",u8Dato,u8Dato/1.34102);
    		break;
    	}
}