// Printing a pyramid 1 - 10

#include <stdio.h>
int main ()
{
    int i, j, k, count=1;

    for (i = 1; i <= 4; i++ ) //for number of rows
    {
        for (j = 1; j <= 4-i; j++) //for spaces before first digit of every row
            printf(" ");

        for (k = 1; k <= i; k++) //number of elements in a row
        {
            printf("%d ", count);
            count++;
        }

        printf("\n"); // after every ro
    }

    return 0;
}
