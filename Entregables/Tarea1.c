#include <stdio.h>
#include <stdlib.h>

int main()
{
    int BitsVar,BitsValue,OpVar,CorrVar;
    
    printf("¿De cuántos bits es su variable?\n");
    scanf("%d",&BitsVar);
    if(BitsVar==8)
    {
    unsigned char BitsValue = 0;  
    }
    else if(BitsVar==16)
    {
    unsigned short BitsValue = 0;
    }
    else if(BitsVar==32)
    {
    unsigned int BitsValue = 0;
    }
    else
    {
        printf("Error: El número debe ser 8, 16 o 32");
        exit(0);
    }
    printf("Qué operación le gustaría realizar? 1)AND 2)OR 3)XOR.\n");
    scanf("%d",&OpVar);
    
    printf("\n¿Cuántos espacios quieres recorrer?\n");
    scanf("%d",&CorrVar);
    if (Corrvar>BitsVar)
    {
       printf("Error: Su valor de corrimiento es mayor que el valor de bits")
       exit(0);
    }
    else
    {
        *//Nothing Here//*
    }
    if (OpVar==1)
    {
    BitsValue&=~(1<<CorrVar);
    }
    else if (OpVar==2)
    {
    BitsValue|=(1<<CorrVar);
    }
    else if (OpVar==3)
    {
    BitsValue^=(1<<CorrVar);
    }
    else
    {
        printf("Error: Tienes que elegir una opción válida.");
        exit(0);
    }
    
    return 0;
}