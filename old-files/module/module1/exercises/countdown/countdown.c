#include <stdio.h>
#include <cs50.h>

int main(void)

{
//     printf("Count Down From: ");             WHILE WORKS
//     int c = GetInt();
//     while (c > -1)
//     {
        
//         printf("%i...\n", c);
//         c = c - 1;
//     }
//     printf("BLAST OFF!\n");
    
    
    printf("Count Down From: ");
    for (int c2 = GetInt(); c2 >= 0; c2--)
    printf("%i...\n", c2);
    printf("BLAST OFF!\n");
   
}