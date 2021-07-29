//WAP to compute exponent of an number

#include<stdio.h>

int main()
{
    int x,y;
    double value;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the exponent of x (y): ");
    scanf("%d", &y);

    double power(int, int);
    value = power(x, y);

    printf("\nx raised to the power of y is: %lf\n", value);

    return 0;
}

double power(int x, int y)
{
    int j;
    float a, value;

    a = x;

    if (y > 0)
    {
        for (j=1; j<y; j++)
        {
            x = x * a;
        }

        return x;
    }
    else if (y < 0)
    {
        y = -y;
        value = x;

        for (j=1; j<y; j++)
        {
            value = value * a;
        }

        return 1/value;
    }
    else // when y = 0
        return 1;
}
