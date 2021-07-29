// WAP to create a structure and display output

#include<stdio.h>

int main()
{
    struct student{
    char name[30];
    int roll_no;
    float marks;
    }stud;

    printf("Enter the Following Information:\n");
    printf("Name: ");
    gets(stud.name);
    printf("Roll No.: ");
    scanf("%d", &stud.roll_no);
    printf("Marks: ");
    scanf("%f", &stud.marks);

    printf("\nInformation Entered for Student\n");
    printf("Name: %s\n", stud.name);
    printf("Roll No.: %d\n", stud.roll_no);
    printf("Marks: %f\n", stud.marks);

    return 0;
}
