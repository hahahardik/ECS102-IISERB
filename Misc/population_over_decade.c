// Population over a decade

#include <stdio.h>
int main ()
{
    int yrs;
    float r, p;
    // p is population
    //r is rate
    //yrs is no. of years

    r = 0.1;
    p = 100000;

    for (yrs = 1; yrs <= 10; yrs++)
    {
        p = p - r*p;
        printf("Population %d years before was %d.\n", yrs, (int)p);
    }

    return 0;
}
