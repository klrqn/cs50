#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int counter = 0;
    //printf("%lu\n", strlen(argv[0]));
    int lengthFirst = strlen(argv[0]);
    int lengthSecond = strlen(argv[1]);
    do
    {
        printf("(%i)-- ", counter);
        printf("%c\n", argv[0][counter % lengthFirst]);
        printf("%c\n", argv[1][counter++ % lengthSecond]);
        printf("(%i)-- ", counter);
    }
    while(counter < lengthFirst || counter < lengthSecond);
    printf("\n");
}