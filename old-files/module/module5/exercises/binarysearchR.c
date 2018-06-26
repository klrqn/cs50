#include <stdio.h>
#include <stdlib.h>

int binary(int a[], int n, int m, int l, int u);

int main(void)
{
    int n;
    printf("enter the size of an array: ");
    scanf("%d", &n); // n = size of array
    
    int a[n], i, m, c, l, u;
    /* n = array size 
     * a = elements of array
     * m = search number
     * c = binary yes/no
     * l = 1st # in array
     * u = last # in array   */
     
    printf("enter the highest (possible) number of the array: ");
    int upper;
    scanf("%d", &upper);
    // to do: randomize elements within a range
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % (upper + 1);
    }
    
    // PRINT ARRAY
    for (i = 0; i < n; i++)
    {
        printf("%3i: %3i \n", i, a[i]);
    }
    
    printf("enter the number to be search for: ");
    scanf("%d", &m); 
    
    // l = lower limit, u = upper limit of array
    l = 0, u = n-1;
    c = binary(a,n,m,l,u);
    if (c == 0) {
        printf("number found\n");
    }
    else
        printf("number not found\n");
    
    return 0;
}

int binary(int a[], int n, int m, int l, int u)
// m = search#, n = size of array
{
    int mid, c = 0;
    
    if (l <= u) {
        mid = (l + u) / 2;
        if (m == a[mid]) {
            c = 1;
        }
        else if (m < a[mid]) {
            return binary(a,n,m,l,mid-1);
        }
        else
            return binary(a,n,m,l,mid+1);
    }
    else
        return c;
    return 99;
}
