#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv)
{
  printf("adding all numbers entered into the terminal!");
  float total = 0;
  for (int i = 0; i < argc; i++)
    {
      float number = atof(argv[i]);
      total += number;
    }
  printf(" %g \n", total);
}