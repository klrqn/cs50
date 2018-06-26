//Decimal to binary conversion in c programming language. C source code for decimal to binary conversion:
#include<stdio.h>

int main()
{
    long int decimalNumber, quotient;
    int binaryNumber[100], i = 1, j;

    printf("Enter any decimal number: ");
    scanf("%ld", &decimalNumber);

    quotient = decimalNumber;
    while(quotient!=0)
    {
         binaryNumber[i++]= quotient % 2;
         quotient = quotient / 2;
    }

    printf("Equivalent binary value of decimal number %ld: ", -decimalNumber);

    for(j = i - 1; j > 0; j--)
         printf("%d",binaryNumber[j]);
    printf("\n");
    return 0;
}
