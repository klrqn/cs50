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
    printf("%i\n", m);
    if (m <= 0)
        return 0;
    else
        return m + sigma(m - 1);
}