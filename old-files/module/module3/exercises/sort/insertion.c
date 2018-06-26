#include <stdio.h>
 
int main()
{
  int n, array[1000], c, d, t;
  
  // n  = number of elements
  // c  = counter
  // d  = counter #2
  
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
  
  //print initial array
  for (int i = 0; i < n; i ++)
    printf("%d - ", array[i]);
  printf("\n");
 
 //-----------------------------------------------------------------------------
 
  for (c = 1 ; c <= n - 1; c++) 
  {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) 
    {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
      
      d--;
    }
    //print as it goes through
    for (int i = 0; i < n; i ++)
        printf("%d - ", array[i]);
    printf("\n");
    
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}