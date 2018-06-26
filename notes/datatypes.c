#include <stdio.h>
#include <cs50.h>


int main(void) {

    // =============================================================================== //
    //INTEGERS
    int integer = 429496720;
    // int intOVER = 25769803776;
    int neginteger = -20;

    // integers always take up 4 bytes of memory (32 bits)
    // this means the range of values they can store is necessarily limited to
    // 32 bits of information
    // -2^31 ------ 0 ------ 2^31-1


    // unsigned
    // 0 -----------2^32-1
    unsigned int lint = 429496000; //unsigned is a qualifier (always above 0);
    unsigned int lint2 = -50; //error

    printf("%i, %i, %i, %i\n", integer, neginteger, lint, lint2);

    // other qualifiers
    // short
    // long
    // const


    // =============================================================================== //
    // CHARS
    // characters only take up 1 byte (8 bits) 2^8 or 0 - 255
    // ascii standard maps those 255 bits to characters on the keyboard
    char letter = 'a';
    printf("char: %c\n", letter);


    // =============================================================================== //
    // FLOATING POINT
    // 4 Bytes ( 32 bits )
    // since we only have 32 bits, we have a precision problem with how
    // precise we can be. some of those bits must be used for the int

    float floatint = 45.45434543;
    printf("%f\n", floatint);

    // =============================================================================== //
    // DOUBLE
    // double the precision of a float
    // 8 Bytes (64)
    // much more precise real numbers!

    double doubleNum = 45.4545454545454545454545454545454545454545454;
    printf("%f\n", doubleNum);
    printf("double: %30f\n", doubleNum); // takes up 30 spaces

    // =============================================================================== //
    // VOID is a type (not a data type)
    // VOID Return Type means it doesn't return a value
    // printf has a void return type - "pritnf is a void function" - it returns nothing"
    // Void is a placeholder for nothingt (more complicated a bit)


    // BOOL (true or false)
    // this is a cs50.h data type
    bool isitTrue = true;
    bool isitFalse = false;
    printf("bool, true: %i\n", isitTrue);
    printf("bool, false: %i\n", isitFalse);


    // STRING TYPE
    string a = "hello";
    printf("string: %s\n", a);

    // VOCAB
    char thisisacharacter; // declaration
    thisisacharacter = 'b'; // assignment
    // or
    char anotherChar = 'c'; // initialization

    printf("\a\a\a%c%c", thisisacharacter, anotherChar); // \a audible bell?
}
