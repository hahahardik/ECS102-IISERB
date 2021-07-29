// WAP to count the number of digits
// FOR Loop

#include <stdio.h>
int main ()
{
    int num, count, digit = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (count = 10; num / count != 0 ; count *= 10)
        digit++;

    printf("\nNumber of digits in the number is %d.\n", digit);

    return 0;
}
