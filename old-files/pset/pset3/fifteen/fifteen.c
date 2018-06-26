/**
 * fifteen.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 * 
 * 
 */
 
#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE* file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("winner winner chicken dinner!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = GetInt();
        
        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(50000);
        }

        // sleep thread for animation's sake
        usleep(50000);
    }
    
    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).  
 */
void init(void)
{

    // number of total possible tiles
    int tile = d*d-1;
    
    int row = 0;
    int col = 0;
 
    // assign array values
    for (row = 0; row < d; row++)
    {
        for (col = 0; col < d; col++)
        {
            board[row][col] = tile--;
        }
    }
    
    // // '_' replaces '0' (ASCII 95)
    // board[d-1][d-1] = 95;
    
    
    if (d % 2 == 0)
    {
        // swapping 1 & 2 
        int temp = board[row-1][col-2];
        board[row-1][col-2] = board[row-1][col-3];
        board[row-1][col-3] = temp;
        //could have just assigned numbers
    }
}

/**
 * Prints the board in its current state.
 */
void draw(void)
{
    for (int i = 0; i < d; i++) 
    {
        printf("\n");
        for (int j = 0; j < d; j++) 
        { 
            if (board[i][j] == 95) 
            {
                printf("%2c ", 95);
                continue;
                //break erases everything after tile, continue prints rest
            }
            printf("%2i ", board[i][j]);
        }
    }
    printf("\n");
}
/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false. 
 */
bool move(int tile)
{
    if (tile < 0 || tile > d * d - 1)
        return false;
    
    // Find tile
    bool foundtile = false;
    while (foundtile == false) 
    {
        for (int row = 0; row < d; row++) 
        {
            for (int col = 0; col < d; col++)
            {
                if (board[row][col] == tile)
                {
                    //blank tile is above chosen
                    if (board[row-1][col] == 95)
                    {
                        //swap tile chosen and blank
                        board[row-1][col] = tile;
                        board[row][col] = 95;
                        return true;
                    }
                    //blanke is below tile
                    else if (board[row+1][col] == 95)
                    {
                        board[row+1][col] = tile;
                        board[row][col] = 95;
                        return true;
                    }
                    //blank is to the left of chosen tile
                    else if (board[row][col-1] == 95)
                    {
                        board[row][col-1] = tile;
                        board[row][col] = 95;
                        return true;
                    }
                    //blank is to the right of tile
                    else if (board[row][col+1] == 95)
                    {
                        board[row][col+1] = tile;
                        board[row][col] = 95;
                        return true;
                    }
                    return false;
                }
            }
        }
    }
    return -1;
}


/**
 * Returns true if game is won (i.e., board is in winning configuration), 
 * else false.
 */
bool won(void)
{
    // TODO
    int tile = 1;
    for (int row = 0; row < d; row++)
    {
        for (int col = 0; col < d; col++)
        {
            if (row == d-1 && col == d-1) //don't check blank tile
            {
                continue;
            }
            //check that the board make is in order
            if (board[row][col] != tile++)
            {
                return false;
            }

        }
    }
    return true;
}