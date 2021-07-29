//WAP to assign a variable which can store the address


#include<stdio.h>

int main ()
{
    int *p1, *p2, *p3;
    int a, x;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("\nValue of variable a = %d\n", a);

    p1 = &a;
    printf("Address of p1 = %d\n", p1);

    p2 = &p1;
    printf("Address of p2 = %d\n", p2);

    p3 = *p2;

    printf("Value at the address stored by p2 = %d\n", *p2);
    printf("Value at the address stored by p1 = %d\n", *p1);
    printf("Value of **p2 = %d", *p3);

    return 0;
}
