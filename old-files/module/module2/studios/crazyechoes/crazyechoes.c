#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
  string rev[argc];
  for (int i = 0, j = (argc-1); i < argc; i++, j--)
  {
    rev[i] = argv[j]; //rev[] array is argv[] in reverse
    //printf("%s\n", rev[i]);
    for (int k = strlen(argv[j]); k >= 0; k--)
    {
      printf("%c", rev[i][k]);
    }
    printf(" ");
  }
  printf("\n");
}