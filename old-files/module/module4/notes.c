#include <stdio.h>

File I/O 
File Pointer = FILE*

fopen()
FILE* ptr = fopen(<filename>, <operation>); // ptr = generic name for file pointer
FILE* ptr1 = fopen("file1.txt", "r"); // also "w" & "a"
FILE* ptr2 = fopen("file2.txt", "w");

--------------------------------------------------------------------------------

fclose()
fclose(<file pointer>);
fclose(ptr1);

--------------------------------------------------------------------------------

fgetc() // file get character, read next character of a file, stores in 'c' var
char ch = fgetc(<file pointer>);
char ch = fgetc(ptr1);

// CONCATENATE {linux CAT}
char ch;
while((ch = fgetc(ptr)) != EOF)
    printf("%c", ch);

--------------------------------------------------------------------------------

fputc() // writes or appends the specified character to the pointed-to file
fputc(<character>, <file pointer>);
fputc('a', ptr2); // writes letter 'a' into "file2.txt" 

//COPY {linux CP}
char ch;
while((ch = fgetc(ptr)) != EOF)
    fputc(ch, ptr2);

--------------------------------------------------------------------------------

fread() // generic version of fgetc that allows us to get any amount of info at once
fread(<buffer>, <size>, <qty>, <file pointer>)
//ex
int arr[10];
fread(arr, sizeof(int), 10, ptr)
// reading (size of int * 10 bytes (40 bytes)) from the file pointed to by ptr 
// and storing them somewhere where we have set aside 40 bytes of memory [arr]
// reading from the file, storing it in arr
// the name of an array is really just a pointer to its first element.

double* arr2 = malloc(sizeof(double)) * 80); //saves on heap, not stack
fread(arr2, sizeof(double), 80, ptr);

// var c is not a pointer, so we have to pass the address (&)
char c;
fread(&c, sizeof(char), 1, ptr)

--------------------------------------------------------------------------------

fwrite()
fwrite(<buffer>, <size>, <qty>, <file pointer>)
// writes <qty> units of size <size> to the file pointed to by reading them from
// a buffer (usually an array) pointed to by <buffer>

int arr[10]; // already has information stored
fread(arr, sizeof(int), 10, ptr);
// takes the data from arr[10] and putting it into the file pointed to by ptr

double* arr2 = malloc(sizeof(double)) * 80); //saves on heap, not stack
fwrite(arr2, sizeof(double), 80, ptr);

char c;
fwrite(&c, sizeof(char), 1, ptr)

--------------------------------------------------------------------------------
fgets(<output>, <sizeof(output)>, input)
// read and write a full string from a file ''\0'
fputs(<input>,<output>) 
// writes a formatted string to a file
fprintf()
// allows you to rewind or fast-forward within a file
fseek()
// tells you at what (byte) position you are at within a file.
ftell()
// tells you whether you've read to the end of a file.
feof()
// indicates whether an error has occurred in working with a file
ferror()

--------------------------------------------------------------------------------

STRUCTURES "STRUCTS"    
Provide a way to unify several variables of different types into a single, 
new variable type which can be assigned its own type name

//keyword, name
struct car
{
    // fields
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
}; // semi-colon!

Once we have defined a structure, which we typically do in a separate .h file
or atop our program outside of any functions, we have effectively created a new type

can access the various fields (aka members) using the (.)

// variable declaration
struct car mycar;

// field accessing
mycar.year = 2011;
mycar.plate = "CS50";
mycar.odometer = 50505;

Dynamically Allocating Structures (same struct)
// variable declaration
struct car *mycar = malloc(sizeof(struct car));

// field accessing
(*mycar).year = 2011;
(*mycar).plate = "CS50";
(*mycar).odometer = 50505;
// arrow, does the same as above
// first it dererefences the pointer on the left
// second, it accesses the field on the right
mycar->year = 2011;
mycar->plate = "CS50";
mycar->odometer = 50505;

--------------------------------------------------------------------------------

Defining Custom Data Types
typedef <old name> <new name>;
typedef unsigned char byte; 
typedef char* string; (cs50.h)

// useful used with structures
struct car
{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
};
typedef struct car car_t
// everywhere you would have had to type 'struct car' can now just be 'car_t'

typedef struct car
{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
} car_t;

// variable declaration
car_t mycar; // faster that [struct car mycar]

struct car mycar = {2001, "4Runner", "50505", 200000, 5.4}
car_t mycar = {2001, "4Runner", "50505", 200000, 5.4}
car_t yourcar = {2001, "4Runner", "50505", 200000, 5.4}


