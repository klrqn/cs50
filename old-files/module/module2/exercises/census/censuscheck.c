#include <cs50.h>
#include <stdio.h>
#include <string.h>

string length(string s);

int main(void)
{

    string firstname = "First Name: ";
    string first = length(firstname);
    
        printf("%s\n", first);
}

string length(string s)
{
    string answer = "";
    int minlength = 2;
    while( strlen(answer) < minlength ) 
    {
        printf("%s(must be at least %i characters long):\n", s, minlength);
        answer = GetString();
    }
    return answer;
}
