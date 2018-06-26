#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
  int array[8] = {1,2,3,4,5,6,7,8};
  int arrayRev[8];
  for (int i = 7, j = 0; i >= 0; i--, j++)
  {
    arrayRev[j] = array[i];
  }
  for (int i = 0; i < 8; i++)
    printf("%i ", arrayRev[i]);
    
    printf("%i", arrayRev[3]);
}