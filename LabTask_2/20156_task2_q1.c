/* WAP to print the cube of any given number */

#include <stdio.h>
int main()
{
    float num, cube;

    printf("Enter a number: ");
    scanf("%f", &num);

    cube = num * num * num;

    printf("Cube of number is : %f\n", cube);
    return 0;
}
