#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stretch(char* s, int n);

int main(int argc, char* argv[])
{
    if (argc != 4) {
        printf("./exe a b c etc... \n");
        return 0;
    }
    
    // assigning variables to all three inptu words
    char* word1 = argv[1]; 
    char* word2 = argv[2]; 
    char* word3 = argv[3];
    
    if (strlen(word1) != strlen(word2) && strlen(word2) != strlen(word3))
        printf("all words must be of same length");
    
    printf("OK, your word grid is: \n");
    for (int i = 1; i < 4; i++)
    {
        printf("%s\n", argv[i]);
    }
    int num; 
    
    printf("how many letters would you like to stretch by?: ");
    scanf("%i", &num);
    printf("%i\n", num);

    stretch(word1, num);
    stretch(word2, num);
    stretch(word3, num);
}

void stretch(char* s, int num)
{

    for (int a = 0; a < num; a++) {
        for (int i = 0; i < num ; i++) {
            for (int j = 0; j < num; j++) {
                printf("%c", s[i]);
            }
        }
    printf("\n");
    }
}
    
