#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "MINES.h"

  uint8 x;
  uint8 y;
  uint8 dif;
  uint8 total_mines = 0;
  uint8 mines = 0;
  uint8 minefield[30][30];                                      
  uint8 blank_minefield[30][30];                                
  uint8 final_minefield[30][30];

int main()
{
  printf("¡¡Minesweeper by Leonel & Saul!!\n");
  difficulty();
  return 0;
}

void difficulty( void )                                     
{
    dif = 0;
    while( (dif != 1) && (dif != 2) && (dif != 3) && (dif != 4))        
    {
        printf("\t\tChoose a difficulty level\n 1)Easy 2)Medium 3)Hard\n");   
        scanf("%d", &dif);
        FLUSH;
        if( (dif != 1) && (dif != 2) && (dif != 3) && (dif != 4) )
        {
            printf("ERROR: Please enter 1, 2 or 3\n");
        }
    }   

    if( dif == 1 )                                         
    {
    total_mines = 10;
    minefield_generator();
    guess();
    }
    else if( dif == 2 )
    {
    total_mines = 20;
    minefield_generator();
    guess();
    }
    else if( dif == 3 )
    {
    total_mines = 30;
    minefield_generator();
    guess();
    }
    else 
    {
        /*/Nothing to do here/*/
    }
}

void minefield_generator( void )                            
{
    uint8 i = 0;
    uint8 j = 0;

    srand( time( NULL ) );                                  

    while( j < ROWS )                                          
    {
        while( i < COLUMNS)
        {
            minefield[i][j] = '#';
            blank_minefield[i][j] = minefield[i][j];        
            final_minefield[i][j] = minefield[i][j];        
            i++;
        }
        i = 0;
        j++;
    }
    mines = 0;
    while( mines < total_mines )                            
    {
        i = rand()%(COLUMNS);
        j = rand()%(ROWS);
        if( minefield[i][j] != '@')                         
        {
            minefield[i][j] = '@';
            final_minefield[i][j] = minefield[i][j];
            mines++;
        }
    }
    i = 0;
    j = 0;

    while( j < ROWS )                                          
    {
        while( i < COLUMNS)
        {
            if( minefield[i][j] != '@')
            {
                minefield[i][j] = 0;
            }   
            if((minefield[i-1][j-1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i-1][j] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i][j-1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i-1][j+1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j-1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i][j+1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            if((minefield[i+1][j+1] == '@') && (minefield[i][j] != '@'))
            {
                minefield[i][j]++;
            }
            i++;
        }
        i = 0;
        j++;
    }
    i = 0;
    j = 0;
}

void print_minefield(void)                                  
{
    uint8 i = 0;
    uint8 j = 0;
    uint8 v = 0;
    while( v < COLUMNS )                                          
    {
        if( v == 0 )
        {
            printf("\t");
        }
        printf("|%d|\t", v);
        v++;
    }
    printf("\n\n");

    while( j < ROWS )                                                                 
    {   
        printf("|%d|\t", j);
        while( i < COLUMNS)
        {
            if( blank_minefield[i][j] == '#')
            {
                printf("|%c|\t", blank_minefield[i][j]);

            }
            else if( minefield[i][j] == 0 )                 
            {
                blank_minefield[i][j] = 'Y';                
                printf("|%c|\t", blank_minefield[i][j]);
            }
            else
            {
                printf("|%d|\t", blank_minefield[i][j]);

            }
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
}


void guess( void )
{
    uint8 i = 0;
    uint8 j = 0;
    uint8 match = 0;
    print_minefield();
    while( j < ROWS )                                          
    {
        while( i < COLUMNS )
        {
            if(minefield[i][j] == blank_minefield[i][j])
            {
                match++;
            }
            i++;
        }
        i = 0;
        j++;
    }
    if( match == (( COLUMNS * ROWS ) - total_mines))                 
    {
        win();
    }
    printf("\nPlease enter X value, press space and then Y value:");
    scanf("%d %d", &x, &y);                                 
    FLUSH;
    if( (x >= COLUMNS) || (x < 0) || (y < 0) || (y >= ROWS) )
    {
        printf("\nERROR: Please enter a valid value\n");
        guess();
    }
    if( minefield[x][y] == '@' )                        
    {
        fail();
    }
    if( blank_minefield[x][y] != '#' )
    {
        printf("\nPlease enter a value that has not already been entered\n");
        guess();
    }

    else                                                
    {
        blank_minefield[x][y] = minefield[x][y];
        if( minefield[x][y] == 0 )
        {
            if( minefield[x-1][y-1] == 0 )
            {
                blank_minefield[x-1][y] = minefield[x-1][y];
            }
            if( minefield[x-1][y] == 0 )
            {
                blank_minefield[x-1][y] = minefield[x-1][y];
            }
            if( minefield[x][y-1] == 0 )
            {
                blank_minefield[x][y-1] = minefield[x][y-1];
            }
            if( minefield[x-1][y+1] == 0 )
            {
                blank_minefield[x-1][y+1] = minefield[x-1][y+1];
            }
            if( minefield[x+1][y-1] == 0 )
            {
                blank_minefield[x+1][y-1] = minefield[x+1][y-1];
            }
            if( minefield[x+1][y] == 0 )
            {
                blank_minefield[x+1][y] = minefield[x+1][y];
            }
            if( minefield[x][y+1] == 0 )
            {
                blank_minefield[x][y+1] = minefield[x][y+1];
            }
            if( minefield[x+1][y+1] == 0 )
            {
                blank_minefield[x+1][y+1] = minefield[x+1][y+1];
            }
        }
        guess();
    }
}

void fail( void )                                                         
{
    print_final_minefield();
    printf("\nYou hit a mine at coords: %d,%d\nYOU LOSE\n", x, y);
    play_again();
}

void print_final_minefield( void )                      
{
    uint8 i = 0;
    uint8 j = 0;
    uint8 v = 0;
    while( v < COLUMNS )
    {
        if( v == 0 )
        {
            printf("\t");
        }
        printf("|%d|\t", v);
        v++;
    }
    printf("\n\n");

    while( j < ROWS )
    {   
        printf("|%d|\t", j);
        while( i < COLUMNS)
        {
            printf("|%c|\t", final_minefield[i][j]);
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    }
}

void win( void )                                        
{
    printf("\n\n\n YOU WIN \n\n\n");
    play_again();
}

void play_again( void )                                 
{
    char option[2];
    printf("\n\t\tWould you like to play again Yes or No (Y|N)?:");
    scanf("%c", &option[0]);
    FLUSH;
    if((option[0] == 'Y') || (option[0] == 'y'))        
    {
        difficulty();
    }
    else if( (option[0] == 'N') || (option[0] == 'n'))
    {
        game_over();
    }
    else
    {
        printf("ERROR: Please enter Y or N");
        play_again();
    }
}

void game_over( void )                                 
{
    printf("\n\nGame Over, Thanks for playing");
    exit(1);
}
