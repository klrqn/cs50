#include <stdio.h>
#include <cs50.h>

/**
 * Prints a personalized message to the console.
 */
int printMessage(string a, string b, string c);

int main(void)
{
  printf("Name of sender: ");
  string sender = GetString();

  printf("Name of recipient: ");
  string recipient = GetString();

  printf("Message: ");
  string message = GetString();

  printMessage(recipient, message, sender);
}

int printMessage(string a, string b, string c)
{
    printf("\nDear %s,\n\n%s\n\nSincerely,\n%s\n\n", a, b, c);
    return 0;
}
