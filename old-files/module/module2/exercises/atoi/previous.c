//int input = atoi(argv[1]);        atoi takes a string and tries to convert it into an integer

#include<cs50.h>
#include<stdio.h>

int main(int argc, string argv[])
{

    // validation: make sure they provided a CL argument
    if (argc < 2) 
    {
        printf("I need a number!, blarg forget it!\n");
        // a "usage" statement explains what they should have typed
        printf("usage: previous n (the number whose predecessor you want)\n");
        // quit the program. Why? Because if we continue, then line 20 below is
        // going to try to access memory beyond the bounds of the argv array
        // break?;
        return 1;
        
    }

    //string input = argv[1];
    int input = atoi(argv[1]);
    printf ("The previous number is %i\n", input - 1);
    printf("this \"%s\" is this integer: %i\n", argv[1], input);

    return 0;
}


//$ ./previous 67
//The previous number is 66
//atoi("67") is 67