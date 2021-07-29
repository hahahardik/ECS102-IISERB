// WAP to print a multiplication table

#include<stdio.h>

int main()
{
    int num, i , prod;
    //num = input form user
    // i = multiples
    //prod = i * num

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        prod = i * num;
        printf("%d x %d = %d\n", num, i, prod);
    }
}
