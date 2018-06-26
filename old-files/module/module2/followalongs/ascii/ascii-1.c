#include <stdio.h>
#include <ctype.h>

int main(void)
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        int l = tolower(c);
        printf("%i is %c\n", (int) c, c);
        
        printf("%i is %c\n", (int) l, l);
    }
}