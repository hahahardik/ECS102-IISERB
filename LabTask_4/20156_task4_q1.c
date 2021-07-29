// WAP to create a four function calculator

#include <stdio.h>
int main()
{
    float num1, num2, add, sub, multi, divi;
    int choice;

    // Input numbers
    printf("Enter num1: ");
    scanf("%f",&num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    //Choices for operation
    printf("\nOperation Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Input operation
    printf("\nInput Operation Number: ");
    scanf("%d", &choice);

    //Addition
    if (choice == 1)
    {
        add = num1 + num2;
        printf("\nAddition = %f\n", add);
    }

    //Subtraction
    else if (choice == 2)
    {
        sub = num1 - num2;
        printf("\nSubtraction = %f\n", sub);
    }

    //Multiplication
    else if (choice == 3)
    {
        multi = num1 * num2;
        printf("\nMultiplication = %f\n", multi);
    }

    //Division
    else if (choice == 4)
    {
        divi = num1 / num2;
        printf("\nDivision = %f\n", divi);
    }

    //Other choice
    else
        printf("\nWrong Choice Entered.\n");

    return 0;

}
