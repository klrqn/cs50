/* Bubble sort code */
 
#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap;
 // n = number of elements
 // c = for loop counter
 // d = 2nd for loop counter
 // swap = holds value when swapping array[x] and array[x+1]
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
    
   //print original array 
   for (int i = 0; i < n; i ++)
      printf("%d - ", array[i]);
   printf("\n");
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
      //print each iteration of array after swap
      for (int i = 0; i < n; i ++)
         printf("%d - ", array[i]);
      printf("\n");
    }
  }
  return 0;
}