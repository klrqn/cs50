#include <stdio.h>

// prototype
int sigma(int m);

int main(void)
{
    int n;
    do
    {
        printf("Give me a positive Integer: ");
        scanf("%i", &n);
    }
    while (n < 1);
    
    int answer = sigma(n);
    printf("%i\n", answer);
}

int sigma(int m)
{
    if (m < 1)
        return 0;
        
    int sum = 0;
    for (int i = 1; i <= m; i++)
        sum += i;
        
    return sum;
}