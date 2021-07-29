// WAP to count the number of digits
// DO-WHILE Loop

#include <stdio.h>
int main ()
{
    int num, count, digit = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    count = 10;
    do
    {
        digit++;
        count *= 10;
    }while (num / count != 0);

    printf("\nNumber of digits in the number is %d.\n", digit);

    return 0;
}
