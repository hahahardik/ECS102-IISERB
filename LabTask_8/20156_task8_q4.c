//WAP to find the smallest element of the array using linear search

#include<stdio.h>

int main()
{
    int m[12] = {11, 29, 7, 11, 45, 19, 18, 96, 71, 89, 99, 3};

    int i,size = 12, small;

    small = m[0];

    for(i=0; i < size; i++)
    {
        if(m[i]<small)
        small = m[i];
    }

    printf("\nThe smallest element is %d and its position is %d\n", small, i-1);


    return 0;
}
