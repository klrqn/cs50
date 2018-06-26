#include <stdio.h>
#include <cs50.h>

int main(void) {

    // get integers to do basic arithmetic with
    int x = get_int("x: ");
    int y = get_int("y: ");


    printf("x + y = %i\n", x+y);
    printf("x - y = %i\n", x-y);
    printf("x * y = %i\n", x*y);
    printf("x mod y = %i\n", x % y);


}