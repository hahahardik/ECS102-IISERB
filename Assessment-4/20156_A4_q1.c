//WAP to print the roots of a quadratic equation

#include <math.h>
#include<stdio.h>

int main ()
{
    float a, b, c;
    double D;
    float root, root_1, root_2, re_root, im_root; //D = determinant

    printf("Quadratic Equation: ax^2 + bx + c = 0\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    D = b*b - (4*a*c);

    if (D < 0)
    {

        re_root = -b  / (2*a*c);
        im_root = sqrt(-D);

        printf("\nThe Roots are imaginary.\n");
        printf("\nRoot 1: %f + i%f", re_root, im_root);
        printf("\nRoot 2: %f - i%f\n", re_root, im_root);
        printf("\nRe[root] = %f\n", re_root);
        printf("Im[root] = %f\n", im_root);
    }

    else if (D > 0)
    {
        root_1 = (-b + sqrt(D)) / (2*a*c);
        root_2 = (-b - sqrt(D)) / (2*a*c);

        printf("\nThe Roots are Real.\n");
        printf("Root 1 = %f\n", root_1);
        printf("Root 2 = %f\n", root_2);
    }

    else
    {
        root = -b / (2*a*c);

        printf("\nThe Roots are Identical.\n");
        printf("Root = %f\n", root);
    }



    return 0;
}
