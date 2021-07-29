// WAP to print all even numbers between 0 and entered integer
// DO-WHILE Loop

#include <stdio.h>
int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        if (num % 2 == 0)
            printf("%d\t", num);

        num--;
    }while (num >= 0);

    return 0;
}
