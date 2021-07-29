// Practice on while-loops

#include <stdio.h>
int main ()
{
    int num, exp, count, n;

    //Input number and exponent
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    n = num;
    count = 1;

    while (count < exp)
    {
        num = num * n;
        count++;
    }

    printf("\n%d raised to the power of %d is %d.\n", exp, n, num);

    return 0;
}
