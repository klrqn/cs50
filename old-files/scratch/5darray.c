#include <stdio.h>
#include <cs50.h>

#define number 6

int main(void) 
{
    int tile = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    int board[number][number][number];
    
    for (x = 0; x < number; x++) 
    {
        board[x][y][z] = tile;
        // printf("%4i", board[x][y][z]);
        // tile++;
        for (y = 0; y < number; y++) 
        {
            board[x][y][z] = tile; 
            // printf("%4i", board[x][y][z]);
            // tile++;
            for (z = 0; z < number; z++) 
            {
                board[x][y][z] = tile; 
                printf("%4i", board[x][y][z]);
                tile++;
            }
            printf("\n");
        }     
        printf("\n");
    }            
    printf("\n");
}