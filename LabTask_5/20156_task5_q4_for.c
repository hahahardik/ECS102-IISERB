// WAP to calculate the sum of the series
// FOR Loop

#include <stdio.h>
int main ()
{
    int sum, x, n, count, a;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (sum = 1, count = 1, a = 1; count <= n; count++)
    {
        a = a * x;
        sum += a;
    }

    printf("\nSum of the series= %d.\n", sum);

    return 0;
}
