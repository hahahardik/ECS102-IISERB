// Pythagorean triplets from 1 to 30

#include <stdio.h>
int main ()
{
    int a, b, c;

    printf("Pythagorean Triplets are: \n\n");

    for (a = 1; a <=30; a++)
    {
        for (b = 1; b <= 30; b++)
        {
            for (c = 1; c <= 30; c++)
            {
                if (c*c == b*b + a*a)
                    printf("%d\t%d\t%d\n", a, b, c);
                else
                    continue;
            }
        }
    }

    return 0;
}
