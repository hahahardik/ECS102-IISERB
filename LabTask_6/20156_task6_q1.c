// WAP to print a pattern

#include<stdio.h>

int main()
{
    int i, j, count;
    // i = number of rows
    //j = actual numbers 1-10
    //count = number of elements in a row

    j = 1;

    for (i = 1; i <= 4; i++)
    {
        for (count = 1; count <= i; count++)
        {
            printf("%d\t", j);
            j++;
        }

        printf("\n");
    }
}
