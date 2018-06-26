#include <stdio.h> // stdio.h contains the standard input/output library, which means that it deals with input (like from the keyboard) and output (printing characters to the screen). It contains the code of printf that we are using.

// main is the standard name in C to indicate that it is the default function in a program that should be run
int main(void)
{
    printf("hello, world\n");
}

// clang <file> - to compile
// makes "a.out"

// Here, we are telling clang to name the output file hello.
// clang -o hello hello.c