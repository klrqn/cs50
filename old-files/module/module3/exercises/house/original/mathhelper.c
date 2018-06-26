#include <math.h>
#include <stdio.h>

int numberOfContainers(int numberOfUnits, int unitsPerContainer)
{
    // calculate number of containers to order using ceil from math.h
    float numberToOrder = ceil(((float)numberOfUnits)/unitsPerContainer);
    return (int)numberToOrder;
}
