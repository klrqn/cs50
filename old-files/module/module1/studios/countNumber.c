r#include<stdio.h>
#include<math.h>

int digits_after_decimal_point(double x)
{
    int i;
    for (i=0; x!=rint(x); x+=x, i++);
    return i;
}