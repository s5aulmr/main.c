#define MINES_H_

/*/Data Types/*/

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

/*/Definitions/*/

#define FLUSH fflush(stdin)
#define COLUMNS 16
#define ROWS 16
/*/Functions/*/

void difficulty( void );
void minefield_generator( void );
void print_minefield( void );
void guess( void );
void fail( void );
void print_final_minefield( void );
void win( void );
void play_again( void );
void game_over( void );
