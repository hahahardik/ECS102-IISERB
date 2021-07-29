#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c; //Sides of triangle

    //Input sides
    printf("Side 1 = ");
    scanf("%f", &a);
    printf("Side 2 = ");
    scanf("%f", &b);
    printf("Side 3 = ");
    scanf("%f", &c);

    //Conditions
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        if ( a == b && b == c && c == a)
            printf("It is an equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("It is an isosceles triangle.\n");
        else if ( a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
            printf("It is a right angled triangle.\n");
        else
            printf("It is a scalene triangle.\n");
    }
    else
        printf("The triangle is invalid.\n");

    return 0;
}
