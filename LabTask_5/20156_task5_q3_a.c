// WAP to calculate the factorial of an integer.
// FOR Loop

#include <stdio.h>
int main ()
{
    int num, fact, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    for (fact = 1; num != 0; num --)
        fact *= num;

    printf("\nFactorial of %d = %d.\n", n, fact);

    return 0;
}
