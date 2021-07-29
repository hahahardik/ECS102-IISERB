// Temperature Conversion Program

#include <stdio.h>
int main()
{
    float c, f, temp;
    int choice;

    // Input Temperature
    printf("Enter temperature: ");
    scanf("%f", &temp);

    //Conversion choices
    printf("\nConversion Choices: \n");
    printf("1. Fahrenheit to Celcius.\n");
    printf("2. Celcius to Fahrenheit.\n");

    //Input choice
    printf("\nEnter Choice Number: ");
    scanf("%d", &choice);

    //Fahrenheit to Celcius
    if (choice == 1)
    {
        c = (temp - 32) / 1.8;
        printf("\nTemperature in Celcius = %f\n", c);
    }

    //Celcius to Fahrenheit
    else if (choice == 2)
    {
        f = (temp * 1.8) + 32;
        printf("\nTemperature in Fahrenheit = %f\n", f);
    }

    //Any other choice
    else
        printf("\nWrong choice entered.\n");

    return 0;
}
