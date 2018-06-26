#include <stdio.h>

void sort(int values[], int n);

int main(void)
{
    // size of array
    int n = 8;
    // array values. check.
    int array[8] = {19,23,3,3,5,7,9,4};
    
    sort(array, n);
}

void sort(int values[], int n)
{
    int lowestVal;
    int swap;
    int swapArray;
    for (int i = 0; i < n - 1; i++)
    {
        lowestVal = values[i];
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < lowestVal)
            {
                // find the lowest value in the array, push to variable
                lowestVal = values[j];
                // hold the array location of lowest number (to swap later)
                swapArray = j;
            }
        }
        if (lowestVal < values[i])
        {
            // first part of the array to be swapped
            swap = values[i];
            values[i] = lowestVal;
            values[swapArray] = swap;
        }
    }
    // for (int i = 0; i < n; i++)
    // printf("%i:", values[i]);
}