#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    int newval=0;  
    int bits=0;
    int opcs=0;
    int recorrbit=0; 
    printf("de cuantos bits es tu variable? (8-16-32)\n"); 
    scanf("%d", &bits); 
    if (bits==8 || bits==16 || bits==32)
    {
        printf("Que operacion deseas hacer?");
        printf("\n(1) AND \n(2) OR \n(3) XOR\n");
        scanf("%d", &opcs);

    }
    else {
        printf("Opcion no valida intente de nuevo");
        exit(0);
    }
   if (opcs>3){  printf("Opcion no valida intente de nuevo"); 
        exit(0);
   }
   else { //nada que agregar// 
   }
   printf("cuantos espacios quieres recorrer? ");
        scanf("%d", &recorrbit);
 if (recorrbit>bits)
   { 
        printf("Error: Corriemiento mayor al numero de bits\n");
        exit(0);
       
   }
else 
{ //nada que agregar//  
}
if (opcs=1) 
{
     bits &= ~(1 << recorrbit);
     bits=newval;
printf("Has elegido la opcion AND con un corrimiento = %d",recorrbit); 
printf ("\nEl nuevo valor es de: %d\n",newval);
}
    else if (opcs=2) 
{
     bits |=(1 << recorrbit);
printf("Has elegido la opcion AND con un corrimiento = %d",recorrbit); 
printf ("\nEl nuevo valor es de: %d\n",bits);
}
   else if (opcs=3) 
{
     bits ^=(1 << recorrbit);
printf("Has elegido la opcion AND con un corrimiento = %d",recorrbit); 
printf ("\nEl nuevo valor es de: %d\n",bits);
}
}
