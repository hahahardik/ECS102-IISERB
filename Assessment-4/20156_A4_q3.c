// WAP to calculate the sum of an exponential series

#include<stdio.h>

//Function for calculating the factorial of a
float factorial (float a)
{
    float fact = 1, temp;

    for (temp = 1; temp<=a; temp++)
    {
        fact = fact * temp;
    }

    return fact;
}

//Function for calculating i-th power of x
float power_of_x (float x, int i)
{
    int j;
    float a;

    a = x;

    for (j=1; j<i; j++)
    {
        x = x * a;
    }


    return x;
}

int main()
{
    float x;
    float sum=1;
    int n, m;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (m=1; m<n; m++)
    {
        sum = sum + (power_of_x(x, m) / factorial(m));
    }

    printf("\nThe sum of the series is: %f\n", sum);

    return 0;
}
