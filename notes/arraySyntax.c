#include <stdio.h>
#include <cs50.h>

#define LENGTH 100


int main(void)
{
    int arr_of_five[] = { 1, 2, 3, 4, 5 }; // dont need to instantiate with the total number

    bool three_truths[3] = { false, true, true };

    int anotherArr[5];
    anotherArr[0] = 5;
    anotherArr[1] = 4;
    anotherArr[2] = 3;
    anotherArr[3] = 2;
    anotherArr[4] = 1;

    printf("%i\n", arr_of_five[0]);
    printf("%i\n", three_truths[0]);
    printf("%i\n", anotherArr[3]);

    // printf("%i", three_truths[0]);
    // create an array that assigns the array using a loop good exercise


    // arrays can consist of more than a single dimension. you can have as many size specifiers as you wish.
    bool battleship[10][10];

    // while we can treat individual elements of arrays as variables, we cannot treat entire arrays themselves as variables..
    // int foo[] = {1,2,3,4}
    // int bar = foo !!! Will not work.


    // =====================================================================
    // MOST VARIABLES IN C ARE PASSED BY VALUE IN FUNCTION CALLS
    // ARRAYS DO NOT FOLLOW THIS RULE. RATHER THEY ARE PASSED BY REFERENCE.
    // THE CALLEE RECIEVES THE ACTUAL ARRAY, NOT A COPY OF IT.

    // WHAT DOES THIS MEAN WHEN THE CALLEE MANIPULATES ELEMENTS IN AN ARRAY?
    //
    // =====================================================================

}
