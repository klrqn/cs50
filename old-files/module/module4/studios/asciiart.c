#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    int* hashLocations;
    int length;
} csvLine;

csvLine extractNumbers(char* line);

int main(void)
{
    printf("what is the name of the file i should read from?");
    string input = GetString();
    
    printf("what is the name of the file i should write to?");
    string output = GetString();
    
    FILE* readfile= fopen(input, "r");
    FILE* writefile= fopen(output, "w");
    
    for (int i = 0; i < csvLine.length; i++)
    {
        

    //For each line being read in from the input file:

        //Pass the line into the given extractNumbers function

        //For each value in the int array returned by extractNumbers:

            //put spaces in the file until the value is reached

  
            //put a hash in the file

    //Close both files

    //Insert the name of the output file in the print statement below
    printf("Done! If you open up <output file name> you should now see a cool image!\n");
}

csvLine extractNumbers(char* line)
{
    int count = 0;
    for(int i = 0; i < strlen(line); i++)
    {
        if(line[i] == ',')
        {
            count++;
        }
    }

    char* token;
    int* hV = malloc(sizeof(int) * (count+1));
    int i = 0;
    token = strtok(line, ",");
    hV[i] = atoi(token);
    i++;
    while ((token = strtok(NULL, ",")) != NULL)
    {
        hV[i] = atoi(token);
        i++;
    }
    csvLine result;
    result.hashLocations = hV;
    result.length = count + 1;
    return result;
}

int main(void)
{

    
    
    
    
    
}