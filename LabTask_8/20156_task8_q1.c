// WAP to perform a binary search on an array

#include<stdio.h>


int main ()
{
    int search, beg, mid, last;

    int m[12] = {3, 4, 7, 11, 18, 29, 45, 71, 87, 89, 93, 96};

    printf("Enter a number to search the array: ");
    scanf("%d", &search);

    beg = 0;
    last = 11;
    mid = (beg + last) / 2;

    while (beg <= last)
    {
        if (m[mid] < search)
            beg = mid + 1;
        else if (m[mid] == search)
            {
                printf("\n%d is an element of an array and its position is %d\n", search, mid + 1);
                break;
            }
        else
            last = mid - 1;

        mid = (beg + last) / 2;
    }

    if (beg > last)
        printf("\nNot an element of the array\n");


    return 0;
}
