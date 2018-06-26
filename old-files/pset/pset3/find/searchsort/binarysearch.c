#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// prototype
bool search(int tofind, int haystack[], int size);

int main(void)
{
    int array[] = {10, 11, 12, 13, 14, 15, 16, 17, 18};
    int size = 9;
    printf("A number between 10 and 18? ");
    int find = GetInt();
 
    search(find, array, size);
}

bool search(int tofind, int haystack[], int size)
{
    // making initial limits and midpoint of the array
    int start = 0;
    int end = size;
    int mid;
    do
    {
        // after each iteration the size shrinks ~ 1/2
        size = (end - start);
        mid = (end + start) / 2;
        // if the new midpoint is the number we're searching for, stop.
        if (haystack[mid] == tofind)
        {
            // printf("1");
            return true;
        }
        // if the new midpoint is smaller, just look at the upper half
        else if (haystack[mid] < tofind)
            start = mid + 1;
        // if the new midpoint is larger, just look at the lower half
        else if (haystack[mid] > tofind)
            end = mid;
    }
    while (size > 0);
    // printf("0");
    return false;
}