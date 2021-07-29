// WAP to calculate the factorial of an integer.
// WHILE Loop

#include <stdio.h>
int main ()
{
    int num, fact, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    fact = 1;
    while (num != 0)
    {
        fact *= num;
        num--;
    }

    printf("\nFactorial of %d = %d.\n", n, fact);

    return 0;
}
