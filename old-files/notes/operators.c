#include <stdio.h>
#include <cs50.h>


Addition        +
Subtraction     -
Multiplication  *
Division        \
Modulus         %   (Remainder)
x = x * 5       x *= 5
x = x + 3       x += 3
x = x + 1       x++
x = x - 1       x--
Boolean         true or false  (bool)
    In C, every nonzero value is equivalent to true, and zero is false
    types: logical operators & relational operators
    AND - &&    both expressions have to be true to be true
    OR  - ||       only one has to be true to be true
    NOT - !         inverts the value of it's operand
    
    less or equal, greater or equal, equal, not equal
                <= >= == !=

--variable - decrementing before using
++variable - incrementing before using
variable++ 


sizes:
1 byte is 8 bits
integer, 4 bytes; float, 4 bytes; double, 8 bytes
string, each char is 1 byte

\0 equals NULL

atoi(), string to int if possible
atof(), string to int if possible

round(), floor(), ceil() #math
toupper(), tolower, isupper, islower #string
isalpha() //checks if it is a character



int main(void)
int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[1]);
}

a recursive function is a method that calls itself until a certain condition is met
the conditional branch that does not call itself is called the terminating condtion or the 'base case'

strcmp(a, b) - String Compare
malloc((strlen(s) + 1) * sizeof(char));      - memory allocation

