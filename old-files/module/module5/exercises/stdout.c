// The standard library includes the system function.
#include <stdlib.h>

// C++ standard I/O library.
#include <stdio.h>

// Function prototypes.
int DataOut(FILE* pFile);
int DataIn(FILE* pFile, char* text);

// Max length of text input.
const int MAXLEN = 80;

int main()
{
     // Using stdin & stdout in C & C++
    
     // Header.
     printf("Using stdin & stdout instead of a File\n\n\n");

     // Output.
     printf("***** OUTPUT *****\n\n");

     // Declare pointer to the file.
     FILE* pFileHandle;

     // Saves the file in the EXE folder.
     char Filename[] = "MyFile.txt";

     // Open file.
     pFileHandle = fopen(Filename, "w");

     // Write data to file.
     DataOut(pFileHandle);

     // Close the file.
     int iReturn = 0;
     iReturn = fclose(pFileHandle);

     // Do the same but send to stdout.
     DataOut(stdout);
     printf("\n\n");

     // Input.
     printf("***** INPUT *****\n\n");

     // Declarations.
     char readline[MAXLEN];

     // Open file.
     pFileHandle = fopen(Filename, "r");
     // Get data.
     DataIn(pFileHandle, readline);
     // Close the file.
     iReturn = fclose(pFileHandle);
     printf("From the file: %s\n", readline);
 
     printf("Input with fgets: ");
     // Get data.
     pFileHandle = stdin;
     DataIn(pFileHandle, readline);
     // OR DataIn(stdin, readline);
     printf("Your input: %s\n", readline);

     // Keep console window open.
     system("pause");

     // Return some value.
     return 0;
} // end main

int DataOut(FILE* pFile)
{
     // Code to send data to file or screen.
     fprintf(pFile, "Print some data to a text file or to the screen.\n\n");

     return 0;
}
int DataIn(FILE* pFile, char* text)
{
     // Code to send data to file or screen.
     fgets(text, MAXLEN, pFile);

     return 0;
}
