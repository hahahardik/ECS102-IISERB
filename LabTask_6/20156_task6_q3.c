// WAP to print maximum of two numbers

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("\nEnter another number: ");
    scanf("%d", &num2);

    int max (int num1, int num2); // function prototype

    max (num1, num2); // function calling
}

int max (int a, int b) //function definition
{
    if (a > b)
        printf("\nMaximum of the two numbers is %d.\n", a);
    else if (b > a)
        printf("\nMaximum of the two numbers is %d.\n", b);
    else if (a == b)
        printf("\nBoth the numbers are equal.\n");
    else
        printf("\nEnter valid numbers.\n");
}
