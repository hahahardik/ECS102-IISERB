// WAP to compare the entered number with 100.

#include <stdio.h>
void main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 100)
        printf("Your number is smaller than 100.\n");
    else
        printf("Your number contains more than two digits.\n");
}
