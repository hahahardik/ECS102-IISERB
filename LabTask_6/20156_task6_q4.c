// WAP to check if the number is even or odd

#include<stdio.h>

int check (int a) //function definition
{
    if (a % 2 == 0)
        printf("\nThe number is even.\n");
    else
        printf("\nThe number is odd.\n");
}

int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check (num); //function calling
}
