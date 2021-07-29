//WAP to print the larger number using functions and pointers

#include<stdio.h>

int main ()
{
    int a, b, l;

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    l = larger(a, b);

    printf("\nThe larger of the A and B is : %d\n", l);


    return 0;
}

int larger (int x, int y)
{
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    if (*p2 > *p1)
        return *p2;
    else if (*p1 > *p2)
        return *p1;
    else
        return *p1;

}
