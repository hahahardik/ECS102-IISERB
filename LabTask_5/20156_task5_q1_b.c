// WAP to print all even numbers between 0 and entered integer
// WHILE Loop

#include <stdio.h>
int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        if (num % 2 == 0)
            printf("%d\t", num);

        num--;
    }

    return 0;
}
