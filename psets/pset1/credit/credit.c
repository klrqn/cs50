#include <stdio.h>
#include <cs50.h>
#include <math.h>


// make sure that the input is a long long

// do checksum on input number

// report (printf) whether it is a valid AMEX, MasterCard, or Visa number.
// output be AMEX\n or MASTERCARD\n or VISA\n or INVALID\n, nothing more, nothing less, and that main always return 0





int main(void)
{
    // prompt user for a potential credit card number
    unsigned long long cc = get_long_long("Number: ");

    // get the number of digits in the input
    int digitcounter = 0;
    unsigned long digits = cc;
    while (digits > 0)
    {
    	digits = digits / 10;
    // 	printf("digits: ");
    // 	printf("%lu\n", digits);
    	digitcounter += 1;
    }
    // printf("number of digits: %i\n", digitcounter);

    // get the first and second digits of the entry
    // printf("digit to the: %f\n" , pow (10, digitcounter-1));
    unsigned long long firstDigit = cc / (pow(10, digitcounter-1));
    unsigned long long secondDigitTotal = cc - firstDigit * (pow(10, digitcounter-1));
    unsigned long long secondDigit = secondDigitTotal / pow(10, digitcounter-2);



    printf("first digit: %llu\n" , firstDigit);
    printf("second digit: %llu\n" , secondDigit);



    // basic length validation
    if (digitcounter != 13 && digitcounter != 15 && digitcounter != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // checksum
    int multiplySum = 0;
    int regularSum = 0;
    int totalSum = 0;
    unsigned long check = cc;

    for (int i = 0; i < digitcounter; i++) {
        int remain = check % 10;
        check /= 10;
        // printf("cc divided by 10: %lu\n", check);
        // printf("the remainder: %i\n", remain);


        // Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products' digits together.
        if ((i % 2 == 1 && digitcounter % 2 == 1) || (i % 2  == 0 && digitcounter % 2 == 0))
        {
            // get the digit in question an multiply by 2
            int digit = remain * 2;
            // if the multiplied digit is greater than 10
            if (digit > 10) {
                // add the digits together and add them to the sum
                multiplySum += 1 + (digit % 10);
                // printf("adding this: 1 + %i\n", digit%10);
            } else {
                // otherwise add the doubled amount to the sum
                multiplySum += remain * 2;
                // printf("adding this: %i\n", remain * 2);
            }
        }

        if ((i % 2 == 1 && digitcounter % 2 == 0) || (i % 2  == 0 && digitcounter % 2 == 1))
        {
            regularSum += remain;
            // printf("adding this: %i\n", remain * 2);
            // printf("all others adding: %i\n", regularSum);
        }


        // printf("the remainder: %i\n", remain);
        // printf("multiplying the digits: %i\n", multiplySum);

    }
    // printf("total multiplied & summed digits: %i\n", multiplySum);
    // printf("total other summed digits: %i\n", regularSum);
    totalSum = multiplySum + regularSum;



    printf("the total sum: %i\n", totalSum);




    // if the last digit of the Luhns Algorithm Sum is 0
    if (totalSum % 10 == 0)
    {
        // AMEX Specific - starts with 34 or 37,
        if (digitcounter == 15 && firstDigit == 3 && (secondDigit == 4 || secondDigit == 7)) {
            printf("AMEX\n");
        }

        if (firstDigit == 5 && (secondDigit == 1 || secondDigit == 2 || secondDigit == 3 || secondDigit == 4 || secondDigit == 5)) {
            printf("MASTERCARD\n");
        }

        if (firstDigit == 4) {
            printf("VISA\n");
        }
    } else {
        printf("INVALID\n");
    }

    // Add the sum to the sum of the digits that weren’t multiplied by 2.


    // If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!



    // printf("%lu\n", cc);
    // printf("%i\n", digitcounter);
    return 0;
}