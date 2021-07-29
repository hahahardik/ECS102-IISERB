//Factorial of a number_while loop

#include <stdio.h>
int main ()
{
    int num, fact, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = 1;
    n = num;
    while (num != 0)
    {
        fact = fact * num;
        num--;
    }
    printf("The factorial of %d is %d.\n", n, fact);

    return 0;
}
