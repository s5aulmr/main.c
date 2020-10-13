#include <stdio.h>
#include "GENFUN.h"
#include <stdlib.h>

/*Nota 70*/
void main ( void ) 
{
    /*/  Minus to Mayus   /*/

    uint8 au8Text_Low_to_Up[12] = "perro chems";
    printf("\n Minusculas a Mayusculas  \n\nTexto antes: %s", au8Text_Low_to_Up);
    GENFUN_vCapsOn( &au8Text_Low_to_Up[0], 12 );
    printf("\nTexto con MAYUSCULAS: %s\n\n", au8Text_Low_to_Up);


    /*/  Mayus to Minus  /*/

    uint8 au8Text_Up_to_Low[12] = "PERRO CHEMS";
    printf("\n Mayusculas a Minusculas  \n\nTexto antes: %s", au8Text_Up_to_Low);
    GENFUN_vCapsOff ( &au8Text_Up_to_Low[0], 12 );
    printf("\nTexto con MINUSCULAS: %s\n\n", au8Text_Up_to_Low);


    /*/  Occurence  /*/

    uint8 u8Target;
    uint8 au8Occurence_Text[12] = "perro chems";
    uint8 u8Occurence;
    printf("\n Occurence  \n\nQue letra quieres buscar en: %s \n", au8Occurence_Text);
    gets(&u8Target);
    u8Occurence = GENFUN_u8GetOccurence ( &au8Occurence_Text[0], u8Target, 12 );
    printf("\nLa Letra  %c  se repite  %d  veces\n\n", u8Target, u8Occurence);


    /*/  Average  /*/

    uint8 u8Chain[6] = { 8 , 6 , 9 , 7 , 10 , 8 };
    uint8 Pos;
    uint8 u8Average;
    printf("\n Average  \n\nEl promedio de la cadena:");
    for ( Pos = 0 ; Pos < 6 ; Pos ++) 
    {
        printf(" %d ", u8Chain[Pos]);
    }
    u8Average = GENFUN_u8GetAverage ( &u8Chain[0], 6 );
    printf(" es: %d", u8Average);


    /*/  Change Array data for an Element  /*/

    uint8 Chain_To_Change[12] = "chemselperro";
    uint8 Change = 'x';
    printf("\n\n\n Change Array data for an Element  \n\nTexto antes de ser cambiado: %s", Chain_To_Change);
    GENFUN_u8MemSet ( &Chain_To_Change[0], Change, 12 );
    printf("\nTexto despues: %s\n", Chain_To_Change);


    /*/ Replace 1 chain with another /*/

    uint8 Chain_Number_1[12] = "perro chems";
    uint8 Chain_Number_2[12] = "chems perro";
    printf("\n Replace 1 chain with another  \n\nCadena Original: %s\nCadena de Remplazo: %s \n", Chain_Number_1, Chain_Number_2);
    GENFUN_u8MemCopy ( &Chain_Number_1[0], &Chain_Number_2[0], 12);
    printf("Cadena final: %s", Chain_Number_1);


    /*/ Sort list in ascending order /*/
    
    uint8 Chain_To_Order[13]={20,13,12,11,15,23,32,56,23,52,14,12,34};
    uint8 Chain_Ordered[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    uint8 i;
    printf("\n\n\n Sort list in ascending order  \n\nCadena antes de ordenar\n");
    for (i=0;i<13;i++) 
    {
    printf(" %d ", Chain_To_Order[i]);
    }
    GENFUN_vSortList ( &Chain_To_Order[0], &Chain_Ordered[0], 13);
    printf("\n\nCadena Ordenada\n");
    for (i=0;i<13;i++)
    {
    printf(" %d ", Chain_Ordered[i]);
    }


    /*/  Average between continuous elements in a string /*/

    uint8 u8Original_Chain[255];
    uint8 u8Final_Chain[255];
    printf("\n\n\n Average between continuous elements in a string\n\n");
    for (i=0 ; i<255 ;i++) 
    {
        u8Original_Chain[i] = pRandoms(3 , 99 , 1);
    }
    GENFUN_vSoftSignal ( &u8Original_Chain[0], &u8Final_Chain[0] );
    

    /*/  MAX and MIN Filter  /*/

    uint8 u8Source_Chain[255];
    uint8 u8Exit_Chain[255];
    i = 0;
    for (i=0 ; i<255 ;i++) 
    {
        u8Source_Chain[i] = pRandoms(3 , 99 , 1);
    }
    printf("\n\n MAX and MIN Filter\n\n");
    GENFUN_vFilterSignal ( &u8Source_Chain[0], &u8Exit_Chain[0], MAX_FILTER_LIMIT, MIN_FILTER_LIMIT);

}



void GENFUN_vCapsOn ( uint8 *pu8Src, uint8 u8SizeOfList ) 
{

    while ( u8SizeOfList > 0 ) 
    {
        if ( *pu8Src > ASCII_MAYUS_LOW_THRESHOLD && *pu8Src < ASCII_MAYUS_HIGH_THRESHOLD ) 
        {

            *pu8Src -= ASCII_CONVERTION_FACTOR;

        }

        else 
        {
            //Nothing to do here//
        }
        *pu8Src++;
        u8SizeOfList--;

    }

}

void GENFUN_vCapsOff ( uint8 *pu8Src, uint8 u8SizeOfList ) 
{
    while ( u8SizeOfList > 0 ) 
    {
        if ( *pu8Src > ASCII_MINUS_LOW_THRESHOLD && *pu8Src < ASCII_MINUS_HIGH_THRESHOLD ) 
        {

            *pu8Src += ASCII_CONVERTION_FACTOR;

        }
        else 
        {
            //Nothing to do here//
        }
        *pu8Src++;
        u8SizeOfList--;

    }
}

uint8 GENFUN_u8GetOccurence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList ) 
{
    uint8 u8VOccurence = 0 ;
    while ( u8SizeOfList != 0 ) 
    {
        if ( *pu8Src != u8Target ) 
        {
            //Nothing to do here//
        }
        else 
        {

        	u8VOccurence++;

        }
        *pu8Src++;
        u8SizeOfList--;
    }
    return u8VOccurence;

}

uint8 GENFUN_u8GetAverage ( uint8 *pu8Src, uint8 u8SizeOfList ) 
{
    
    uint8 u8Sum = 0;
    uint8 Elements;         /*Notacion hungara*/
    Elements = u8SizeOfList;
    while ( u8SizeOfList != 0 ) 
    {

        u8Sum += *pu8Src;       /*Overflow*/
        *pu8Src++;
        u8SizeOfList--;

    }
    
    return u8Sum/Elements;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) 
{
    while ( u8SizeOfList != 0 )
    {
        *pu8Src=u8Char2Set;
        *pu8Src++;
        u8SizeOfList--;
    }
        
}

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{

    while ( u8SizeOfList != 0 ) 
    {

        *pu8Src = *pu8Dest;
        *pu8Src++;
        *pu8Dest++;
        u8SizeOfList--;

    }

}

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{

    uint8 i,j,x;
    uint8 RefArray[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};       /*ciclo para 13 no para sizeoflist*/

    for(i=0;i<13;i++) 
    {
        RefArray[i]= *pu8Src;
        pu8Src++;
    }
    for (i=0;i<13;i++)
    {
    pu8Src--; 
    }
        for (i=0 ; i<12 ; i++) 
        {
            for ( j=i+1; j<13 ; j++) 
            {

                if (RefArray[i]>RefArray[j]) 
                {
                    x = RefArray[i];
                    RefArray[i] = RefArray[j];
                    RefArray[j] = x;

                }
            }
        }
    for (i=0;i<13;i++) 
    {
        *pu8Dest=RefArray[i];
        *pu8Dest++;
    }
}

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest) 
{

    uint8 i,j, Limit = 255;         /*notacion hungara*/
    while ( Limit > i ) 
    {
        i = *pu8Src; 
        *pu8Src++;
        j = *pu8Src;
        *pu8Dest = ( i+j ) / 2;
        Limit--;
        printf(" %d + %d = %d\n", i,j,*pu8Dest);
    }
    
    

}

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal) /*no usas parmetros*/
{

    uint8 a, b, Limit2=0;         /*notacion hungara*/
    while ( Limit2 < 255 ) 
    {
        
        if ( *pu8Src > MAX_FILTER_LIMIT ) 
        {

            a = *pu8Src - MAX_FILTER_LIMIT;
            *pu8Dest = *pu8Src - a;
            printf("\n El numero: %d Ha cambiado a: %d \n", *pu8Src, *pu8Dest);
        }
        else if ( *pu8Src < MIN_FILTER_LIMIT ) 
        {

            b = MIN_FILTER_LIMIT - *pu8Src;
            *pu8Dest = *pu8Src + b;
            printf("\n El numero: %d Ha cambiado a: %d \n", *pu8Src, *pu8Dest);
        }
        else 
        {
            *pu8Dest = *pu8Src;
            printf("\n El numero: %d Esta dentro del filtro", *pu8Src);
        }
        
        *pu8Dest++;
        *pu8Src++;
        Limit2++;

    }
}

uint8 pRandoms(uint8 low, uint8 up,  uint8 count) 
{ 
    uint8 num;
    num = (rand() % (up - low + 1)) + low;  
    return num;

    //Count not useful in this code//
} 