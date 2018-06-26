#include <cs50.h>
#include <stdio.h>
#include <string.h>

string length(string s);

int main(void)
{
    printf("Hello, thank you for signing up for: The United States\n");
    printf("I'll need to get some info from you please...\n\n");
    
    string firstname = "First Name: ";
    string first = length(firstname);
    
    string lastname = "Last Name: ";
    string last = length(lastname);
    
    string state = "State: ";
    string st = length(state);
    
    string email = "E-Mail: ";
    string em =length(email);

    printf("\nGreat thanks, lemme just enter that into my system here...\n");
    printf("%s %s from %s, at %s\n", first, last, st, em);
    printf("Excellent! Please pay your taxes in April, or you'll be hearing from us (check your spam folder).\n");
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
