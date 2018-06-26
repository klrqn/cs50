/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
 
bool search(int value, int values[], int n)
{
    int start = 0;
    int end = n;
    int mid;
    do
    {
        n = (end - start);
        mid = (end + start) / 2;
        if (values[mid] == value)
        {
            //printf("here: values[%i]\n", mid);
            return true;
        }
        else if (values[mid] < value)
            start = mid + 1; 
        else if (values[mid] > value)
            end = mid;
    }
    while (n > 0);
    return false;
}

/**
 * Sorts array of n values.
 */
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
    return;
}