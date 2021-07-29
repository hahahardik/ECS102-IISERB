// WAP to compare the two entered numbers.

#include <stdio.h>
void main()
{
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    if (x == y)
        printf("Both numbers are same.\n");
    else
    {
        if (x < y)
            printf("x is less than y.\n");
        else
            printf("x is more than y.\n");
    }
}
