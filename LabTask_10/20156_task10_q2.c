//WAP to create a array-structure for 10 studnets

#include<stdio.h>

int main()
{
    struct student{
    char name[30];
    int roll_no;
    float marks;
    }stud[10];

    int i;

    for (i=0; i<10; i++)
    {
        printf("\nEnter the Information for Student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", &stud[i].name);
        printf("Roll No.: ");
        scanf("%d", &stud[i].roll_no);
        printf("Marks: ");
        scanf("%f", &stud[i].marks);
    }

    printf("\nInformation collected:\n");
    printf("\n");

    for (i=0; i<10; i++)
        printf("Name: %s\tRoll No.: %d\t Marks: %f\n", stud[i].name, stud[i].roll_no, stud[i].marks);

    return 0;
}
