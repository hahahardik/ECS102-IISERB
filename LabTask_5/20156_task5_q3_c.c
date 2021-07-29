// WAP to calculate the factorial of an integer.
// DO-WHILE Loop

#include <stdio.h>
int main ()
{
    int num, fact, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    fact = 1;

    do
    {
        fact *= num;
        num--;
    }while (num != 0);

    printf("\nFactorial of %d = %d.\n", n, fact);

    return 0;
}
