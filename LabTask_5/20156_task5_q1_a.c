// WAP to print all even numbers between 0 and entered integer
// FOR Loop

#include <stdio.h>
int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num >= 0; num--)
    {
            if (num % 2 == 0)
                printf("%d\t", num);
    }

    return 0;
}
