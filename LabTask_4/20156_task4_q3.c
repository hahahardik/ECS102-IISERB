//WAP to translate no. of day to name of the day

#include <stdio.h>
int main()
{
    int choice;

    //Input No. of the day
    printf("Enter the number of the day: ");
    scanf("%d", &choice);

    //Sunday
    if (choice == 1)
        printf("\nIts Sunday\n");
    //Monday
    else if (choice == 2)
        printf("\nIts Monday\n");
    //Tuesday
    else if (choice == 3)
        printf("\nIts Tuesday\n");
    //Wednesday
    else if (choice == 4)
        printf("\nIts Wednesday\n");
    //Thursday
    else if (choice == 5)
        printf("\nIts Thursday\n");
    //Friday
    else if (choice == 6)
        printf("\nIts Friday\n");
    //Saturday
    else if (choice == 7)
        printf("\nIts Saturday\n");
    //Any other number
    else
        printf("\nWrong number entered.\n");

    return 0;
}
