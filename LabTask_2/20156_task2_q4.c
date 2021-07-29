/* WAP to print area and circumference of the circle */

#include <stdio.h>
int main()
{
    float radius, circum, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circum = 2 * 3.14159 * radius;

    printf("Area of circle is: %f\n", area);
    printf("Circumference of circle is: %f\n", circum);
    return 0;
}
