// Program to find the sum of squares of 10 numbers using arrays

#include <stdio.h>

int main()
{
    int num[10], i, n = 10, sum = 0;

    for(i=0; i<n; ++i)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &num[i]);

        // adding squares of integers entered by the user to the sum
        sum += num[i] * num[i];
    }

    printf("\n");

    for (i=0; i<n; ++i)
    {
        printf("X[%d] = %d\n", i+1, num[i]);
    }

    printf("\nTotal = %d\n", sum);

    return 0;
}
