// WAP to create a four function calculator
// Switch Statement

#include <stdio.h>
int main ()
{
    float num1, num2;
    int oper;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nOperation Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter Operation Number: ");
    scanf("%d", &oper);

    switch(oper)
    {
    case 1 : printf("\nResult = %f\n", num1 + num2);
    break;

    case 2 : printf("\nResult = %f\n", num1 - num2);
    break;

    case 3 : printf("\nResult = %f\n", num1 * num2);
    break;

    case 4 : printf("\nResult = %f\n", num1 / num2);
    break;

    default:
    printf("\nInvalid Operation Number entered.\n");

    }

    return 0;
}
