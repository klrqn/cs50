#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //string heart = "<3";
    printf("Width: ");
    int w = GetInt();
    printf("Height: ");
    int h = GetInt();
    int Area = w * h;
    
    if (w == h)
    {
        printf("that's a square!\n");
    }
    
    printf("the area of your rectangle is %i.\n", Area);

    int i; //works with width (w)
    int j; //works with height (h)
    
    for (i = 1; i <= h; i++)
    {
        printf("<3");
        for(j = 1; j < w; j++)
        {
            printf("<3");
        }
    printf("\n");
    }
}